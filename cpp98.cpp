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

const uint8_t MY_POLYNOM = 0x07;
const int TABLE_SIZE = 256;

template<uint8_t POLYNOM, uint8_t INDEX, int bitNum = 0>
struct CalcHelper { 
  static const uint8_t value = CalcHelper<POLYNOM, ((INDEX & 0x80) ? (uint8_t)((INDEX << 1) ^ POLYNOM) : (uint8_t)(INDEX << 1)), bitNum + 1>::value;
};

template<uint8_t POLYNOM, uint8_t INDEX>
struct CalcHelper<POLYNOM, INDEX, 8> { 
  static const uint8_t value = INDEX;
};

template<int POLYNOM>
struct Helper {
    static const uint8_t table[TABLE_SIZE];
};

template<int POLYNOM>
const uint8_t Helper<POLYNOM>::table[TABLE_SIZE] = {
 CalcHelper<POLYNOM, 0>::value,

CalcHelper<POLYNOM, 1>::value,

CalcHelper<POLYNOM, 2>::value,

CalcHelper<POLYNOM, 3>::value,

CalcHelper<POLYNOM, 4>::value,

CalcHelper<POLYNOM, 5>::value,

CalcHelper<POLYNOM, 6>::value,

CalcHelper<POLYNOM, 7>::value,

CalcHelper<POLYNOM, 8>::value,

CalcHelper<POLYNOM, 9>::value,

CalcHelper<POLYNOM, 10>::value,

CalcHelper<POLYNOM, 11>::value,

CalcHelper<POLYNOM, 12>::value,

CalcHelper<POLYNOM, 13>::value,

CalcHelper<POLYNOM, 14>::value,

CalcHelper<POLYNOM, 15>::value,

CalcHelper<POLYNOM, 16>::value,

CalcHelper<POLYNOM, 17>::value,

CalcHelper<POLYNOM, 18>::value,

CalcHelper<POLYNOM, 19>::value,

CalcHelper<POLYNOM, 20>::value,

CalcHelper<POLYNOM, 21>::value,

CalcHelper<POLYNOM, 22>::value,

CalcHelper<POLYNOM, 23>::value,

CalcHelper<POLYNOM, 24>::value,

CalcHelper<POLYNOM, 25>::value,

CalcHelper<POLYNOM, 26>::value,

CalcHelper<POLYNOM, 27>::value,

CalcHelper<POLYNOM, 28>::value,

CalcHelper<POLYNOM, 29>::value,

CalcHelper<POLYNOM, 30>::value,

CalcHelper<POLYNOM, 31>::value,

CalcHelper<POLYNOM, 32>::value,

CalcHelper<POLYNOM, 33>::value,

CalcHelper<POLYNOM, 34>::value,

CalcHelper<POLYNOM, 35>::value,

CalcHelper<POLYNOM, 36>::value,

CalcHelper<POLYNOM, 37>::value,

CalcHelper<POLYNOM, 38>::value,

CalcHelper<POLYNOM, 39>::value,

CalcHelper<POLYNOM, 40>::value,

CalcHelper<POLYNOM, 41>::value,

CalcHelper<POLYNOM, 42>::value,

CalcHelper<POLYNOM, 43>::value,

CalcHelper<POLYNOM, 44>::value,

CalcHelper<POLYNOM, 45>::value,

CalcHelper<POLYNOM, 46>::value,

CalcHelper<POLYNOM, 47>::value,

CalcHelper<POLYNOM, 48>::value,

CalcHelper<POLYNOM, 49>::value,

CalcHelper<POLYNOM, 50>::value,

CalcHelper<POLYNOM, 51>::value,

CalcHelper<POLYNOM, 52>::value,

CalcHelper<POLYNOM, 53>::value,

CalcHelper<POLYNOM, 54>::value,

CalcHelper<POLYNOM, 55>::value,

CalcHelper<POLYNOM, 56>::value,

CalcHelper<POLYNOM, 57>::value,

CalcHelper<POLYNOM, 58>::value,

CalcHelper<POLYNOM, 59>::value,

CalcHelper<POLYNOM, 60>::value,

CalcHelper<POLYNOM, 61>::value,

CalcHelper<POLYNOM, 62>::value,

CalcHelper<POLYNOM, 63>::value,

CalcHelper<POLYNOM, 64>::value,

CalcHelper<POLYNOM, 65>::value,

CalcHelper<POLYNOM, 66>::value,

CalcHelper<POLYNOM, 67>::value,

CalcHelper<POLYNOM, 68>::value,

CalcHelper<POLYNOM, 69>::value,

CalcHelper<POLYNOM, 70>::value,

CalcHelper<POLYNOM, 71>::value,

CalcHelper<POLYNOM, 72>::value,

CalcHelper<POLYNOM, 73>::value,

CalcHelper<POLYNOM, 74>::value,

CalcHelper<POLYNOM, 75>::value,

CalcHelper<POLYNOM, 76>::value,

CalcHelper<POLYNOM, 77>::value,

CalcHelper<POLYNOM, 78>::value,

CalcHelper<POLYNOM, 79>::value,

CalcHelper<POLYNOM, 80>::value,

CalcHelper<POLYNOM, 81>::value,

CalcHelper<POLYNOM, 82>::value,

CalcHelper<POLYNOM, 83>::value,

CalcHelper<POLYNOM, 84>::value,

CalcHelper<POLYNOM, 85>::value,

CalcHelper<POLYNOM, 86>::value,

CalcHelper<POLYNOM, 87>::value,

CalcHelper<POLYNOM, 88>::value,

CalcHelper<POLYNOM, 89>::value,

CalcHelper<POLYNOM, 90>::value,

CalcHelper<POLYNOM, 91>::value,

CalcHelper<POLYNOM, 92>::value,

CalcHelper<POLYNOM, 93>::value,

CalcHelper<POLYNOM, 94>::value,

CalcHelper<POLYNOM, 95>::value,

CalcHelper<POLYNOM, 96>::value,

CalcHelper<POLYNOM, 97>::value,

CalcHelper<POLYNOM, 98>::value,

CalcHelper<POLYNOM, 99>::value,

CalcHelper<POLYNOM, 100>::value,

CalcHelper<POLYNOM, 101>::value,

CalcHelper<POLYNOM, 102>::value,

CalcHelper<POLYNOM, 103>::value,

CalcHelper<POLYNOM, 104>::value,

CalcHelper<POLYNOM, 105>::value,

CalcHelper<POLYNOM, 106>::value,

CalcHelper<POLYNOM, 107>::value,

CalcHelper<POLYNOM, 108>::value,

CalcHelper<POLYNOM, 109>::value,

CalcHelper<POLYNOM, 110>::value,

CalcHelper<POLYNOM, 111>::value,

CalcHelper<POLYNOM, 112>::value,

CalcHelper<POLYNOM, 113>::value,

CalcHelper<POLYNOM, 114>::value,

CalcHelper<POLYNOM, 115>::value,

CalcHelper<POLYNOM, 116>::value,

CalcHelper<POLYNOM, 117>::value,

CalcHelper<POLYNOM, 118>::value,

CalcHelper<POLYNOM, 119>::value,

CalcHelper<POLYNOM, 120>::value,

CalcHelper<POLYNOM, 121>::value,

CalcHelper<POLYNOM, 122>::value,

CalcHelper<POLYNOM, 123>::value,

CalcHelper<POLYNOM, 124>::value,

CalcHelper<POLYNOM, 125>::value,

CalcHelper<POLYNOM, 126>::value,

CalcHelper<POLYNOM, 127>::value,

CalcHelper<POLYNOM, 128>::value,

CalcHelper<POLYNOM, 129>::value,

CalcHelper<POLYNOM, 130>::value,

CalcHelper<POLYNOM, 131>::value,

CalcHelper<POLYNOM, 132>::value,

CalcHelper<POLYNOM, 133>::value,

CalcHelper<POLYNOM, 134>::value,

CalcHelper<POLYNOM, 135>::value,

CalcHelper<POLYNOM, 136>::value,

CalcHelper<POLYNOM, 137>::value,

CalcHelper<POLYNOM, 138>::value,

CalcHelper<POLYNOM, 139>::value,

CalcHelper<POLYNOM, 140>::value,

CalcHelper<POLYNOM, 141>::value,

CalcHelper<POLYNOM, 142>::value,

CalcHelper<POLYNOM, 143>::value,

CalcHelper<POLYNOM, 144>::value,

CalcHelper<POLYNOM, 145>::value,

CalcHelper<POLYNOM, 146>::value,

CalcHelper<POLYNOM, 147>::value,

CalcHelper<POLYNOM, 148>::value,

CalcHelper<POLYNOM, 149>::value,

CalcHelper<POLYNOM, 150>::value,

CalcHelper<POLYNOM, 151>::value,

CalcHelper<POLYNOM, 152>::value,

CalcHelper<POLYNOM, 153>::value,

CalcHelper<POLYNOM, 154>::value,

CalcHelper<POLYNOM, 155>::value,

CalcHelper<POLYNOM, 156>::value,

CalcHelper<POLYNOM, 157>::value,

CalcHelper<POLYNOM, 158>::value,

CalcHelper<POLYNOM, 159>::value,

CalcHelper<POLYNOM, 160>::value,

CalcHelper<POLYNOM, 161>::value,

CalcHelper<POLYNOM, 162>::value,

CalcHelper<POLYNOM, 163>::value,

CalcHelper<POLYNOM, 164>::value,

CalcHelper<POLYNOM, 165>::value,

CalcHelper<POLYNOM, 166>::value,

CalcHelper<POLYNOM, 167>::value,

CalcHelper<POLYNOM, 168>::value,

CalcHelper<POLYNOM, 169>::value,

CalcHelper<POLYNOM, 170>::value,

CalcHelper<POLYNOM, 171>::value,

CalcHelper<POLYNOM, 172>::value,

CalcHelper<POLYNOM, 173>::value,

CalcHelper<POLYNOM, 174>::value,

CalcHelper<POLYNOM, 175>::value,

CalcHelper<POLYNOM, 176>::value,

CalcHelper<POLYNOM, 177>::value,

CalcHelper<POLYNOM, 178>::value,

CalcHelper<POLYNOM, 179>::value,

CalcHelper<POLYNOM, 180>::value,

CalcHelper<POLYNOM, 181>::value,

CalcHelper<POLYNOM, 182>::value,

CalcHelper<POLYNOM, 183>::value,

CalcHelper<POLYNOM, 184>::value,

CalcHelper<POLYNOM, 185>::value,

CalcHelper<POLYNOM, 186>::value,

CalcHelper<POLYNOM, 187>::value,

CalcHelper<POLYNOM, 188>::value,

CalcHelper<POLYNOM, 189>::value,

CalcHelper<POLYNOM, 190>::value,

CalcHelper<POLYNOM, 191>::value,

CalcHelper<POLYNOM, 192>::value,

CalcHelper<POLYNOM, 193>::value,

CalcHelper<POLYNOM, 194>::value,

CalcHelper<POLYNOM, 195>::value,

CalcHelper<POLYNOM, 196>::value,

CalcHelper<POLYNOM, 197>::value,

CalcHelper<POLYNOM, 198>::value,

CalcHelper<POLYNOM, 199>::value,

CalcHelper<POLYNOM, 200>::value,

CalcHelper<POLYNOM, 201>::value,

CalcHelper<POLYNOM, 202>::value,

CalcHelper<POLYNOM, 203>::value,

CalcHelper<POLYNOM, 204>::value,

CalcHelper<POLYNOM, 205>::value,

CalcHelper<POLYNOM, 206>::value,

CalcHelper<POLYNOM, 207>::value,

CalcHelper<POLYNOM, 208>::value,

CalcHelper<POLYNOM, 209>::value,

CalcHelper<POLYNOM, 210>::value,

CalcHelper<POLYNOM, 211>::value,

CalcHelper<POLYNOM, 212>::value,

CalcHelper<POLYNOM, 213>::value,

CalcHelper<POLYNOM, 214>::value,

CalcHelper<POLYNOM, 215>::value,

CalcHelper<POLYNOM, 216>::value,

CalcHelper<POLYNOM, 217>::value,

CalcHelper<POLYNOM, 218>::value,

CalcHelper<POLYNOM, 219>::value,

CalcHelper<POLYNOM, 220>::value,

CalcHelper<POLYNOM, 221>::value,

CalcHelper<POLYNOM, 222>::value,

CalcHelper<POLYNOM, 223>::value,

CalcHelper<POLYNOM, 224>::value,

CalcHelper<POLYNOM, 225>::value,

CalcHelper<POLYNOM, 226>::value,

CalcHelper<POLYNOM, 227>::value,

CalcHelper<POLYNOM, 228>::value,

CalcHelper<POLYNOM, 229>::value,

CalcHelper<POLYNOM, 230>::value,

CalcHelper<POLYNOM, 231>::value,

CalcHelper<POLYNOM, 232>::value,

CalcHelper<POLYNOM, 233>::value,

CalcHelper<POLYNOM, 234>::value,

CalcHelper<POLYNOM, 235>::value,

CalcHelper<POLYNOM, 236>::value,

CalcHelper<POLYNOM, 237>::value,

CalcHelper<POLYNOM, 238>::value,

CalcHelper<POLYNOM, 239>::value,

CalcHelper<POLYNOM, 240>::value,

CalcHelper<POLYNOM, 241>::value,

CalcHelper<POLYNOM, 242>::value,

CalcHelper<POLYNOM, 243>::value,

CalcHelper<POLYNOM, 244>::value,

CalcHelper<POLYNOM, 245>::value,

CalcHelper<POLYNOM, 246>::value,

CalcHelper<POLYNOM, 247>::value,

CalcHelper<POLYNOM, 248>::value,

CalcHelper<POLYNOM, 249>::value,

CalcHelper<POLYNOM, 250>::value,

CalcHelper<POLYNOM, 251>::value,

CalcHelper<POLYNOM, 252>::value,

CalcHelper<POLYNOM, 253>::value,

CalcHelper<POLYNOM, 254>::value,

CalcHelper<POLYNOM, 255>::value};

uint8_t calcCRC(uint8_t len, const uint8_t* data) {
  uint8_t checksum = 0;
  while(len--) {
    checksum = Helper<MY_POLYNOM>::table[*data++ ^ checksum];
  }
  return checksum;
}

int main() {
  const uint8_t message[] = "Hello World"; 
  const uint8_t checksum = calcCRC(11, message);
  std::cout << "Checksum is: " << std::hex << static_cast<int>(checksum) << std::endl;
  for(int i = 0; i < 256; ++i) {
    std::cout << static_cast<int>(Helper<MY_POLYNOM>::table[i]) << std::endl;
  }
}

