/*
 * Fraunhofer-Institute for Integrated Circuits IIS
 * Am Wolfsmantel 33, 91058 Erlangen, Germany
 * www.iis.fraunhofer.de
 *
 * Application Center Wireless Sensor Systems
 * Sonntagsanger 1, 96450 Coburg, Germany
 *
 * Copyright Fraunhofer IIS, All rights reserved.
 */
 
#include <inttypes.h> // for uint8_t
#include <iostream>

constexpr uint8_t MY_POLYNOM = 0x07;
constexpr int TABLE_SIZE = 256;

template<uint8_t POLYNOM>
constexpr uint8_t calcCRC(uint8_t index) { 
  for (int j = 0; j < 8; j++) {
    if ((index & 0x80) != 0) {
      index = (uint8_t)((index << 1) ^ POLYNOM);
    } else {
      index <<= 1;
    }
  }
  return index;
}

/**
 * Variadic template for a recursive helper struct.
 */
template<uint8_t POLYNOM, int INDEX = 0, int ...D>
struct Helper : Helper<POLYNOM, INDEX + 1, D..., calcCRC<POLYNOM>(INDEX)> { };

/**
 * Specialization of the template to end the recursion when the table size reaches TABLE_SIZE.
 */
template<uint8_t POLYNOM, int ...D>
struct Helper<POLYNOM, TABLE_SIZE, D...> {
  static constexpr uint8_t table[TABLE_SIZE] = { D... };
};

template<uint8_t POLYNOM, int ...D>
constexpr uint8_t Helper<POLYNOM, TABLE_SIZE, D...>::table[TABLE_SIZE];

constexpr auto calcCRC(uint8_t len, const uint8_t* data) {
  uint8_t checksum = 0;
  while(len--) {
    checksum = Helper<MY_POLYNOM>::table[*data++ ^ checksum];
  }
  return checksum;
}

int main() {
  constexpr uint8_t message[] = "Hello World"; 
  constexpr uint8_t checksum = calcCRC(11, message);
  std::cout << "Checksum is: " << std::hex << static_cast<int>(checksum) << std::endl;
  for(int i = 0; i < 256; ++i) {
    std::cout << static_cast<int>(Helper<MY_POLYNOM>::table[i]) << std::endl;
  }
}
