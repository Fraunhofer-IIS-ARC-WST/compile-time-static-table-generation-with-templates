#bin/bash
echo "clang++ -Oz"
clang++ -Oz -s oldStyle.cpp -std=c++98 -o main && ls -l main
clang++ -Oz -s cpp98.cpp -std=c++98 -o main && ls -l main
clang++ -Oz -s cpp17.cpp -std=c++17 -o main && ls -l main
clang++ -Oz -s cpp14withoutArray.cpp -std=c++14 -o main && ls -l main
clang++ -Oz -s cpp14withArray.cpp -std=c++14 -o main && ls -l main
clang++ -Oz -s cpp11.cpp -std=c++11 -o main && ls -l main
echo "clang++ -Os"

clang++ -Os -s oldStyle.cpp -std=c++98 -o main && ls -l main
clang++ -Os -s cpp98.cpp -std=c++98 -o main && ls -l main
clang++ -Os -s cpp17.cpp -std=c++17 -o main && ls -l main
clang++ -Os -s cpp14withoutArray.cpp -std=c++14 -o main && ls -l main
clang++ -Os -s cpp14withArray.cpp -std=c++14 -o main && ls -l main
clang++ -Os -s cpp11.cpp -std=c++11 -o main && ls -l main
echo "clang++ -O1"

clang++ -O1 -s oldStyle.cpp -std=c++98 -o main && ls -l main
clang++ -O1 -s cpp98.cpp -std=c++98 -o main && ls -l main
clang++ -O1 -s cpp17.cpp -std=c++17 -o main && ls -l main
clang++ -O1 -s cpp14withoutArray.cpp -std=c++14 -o main && ls -l main
clang++ -O1 -s cpp14withArray.cpp -std=c++14 -o main && ls -l main
clang++ -O1 -s cpp11.cpp -std=c++11 -o main && ls -l main
echo "clang++ -O2"

clang++ -O2 -s oldStyle.cpp -std=c++98 -o main && ls -l main
clang++ -O2 -s cpp98.cpp -std=c++98 -o main && ls -l main
clang++ -O2 -s cpp17.cpp -std=c++17 -o main && ls -l main
clang++ -O2 -s cpp14withoutArray.cpp -std=c++14 -o main && ls -l main
clang++ -O2 -s cpp14withArray.cpp -std=c++14 -o main && ls -l main
clang++ -O2 -s cpp11.cpp -std=c++11 -o main && ls -l main
echo "clang++ -O3"

clang++ -O3 -s oldStyle.cpp -std=c++98 -o main && ls -l main
clang++ -O3 -s cpp98.cpp -std=c++98 -o main && ls -l main
clang++ -O3 -s cpp17.cpp -std=c++17 -o main && ls -l main
clang++ -O3 -s cpp14withoutArray.cpp -std=c++14 -o main && ls -l main
clang++ -O3 -s cpp14withArray.cpp -std=c++14 -o main && ls -l main
clang++ -O3 -s cpp11.cpp -std=c++11 -o main && ls -l main
echo "g++ -Os"

g++ -Os -s oldStyle.cpp -std=c++98 -o main && ls -l main
g++ -Os -s cpp98.cpp -std=c++98 -o main && ls -l main
g++ -Os -s cpp17.cpp -std=c++17 -o main && ls -l main
g++ -Os -s cpp14withoutArray.cpp -std=c++14 -o main && ls -l main
g++ -Os -s cpp14withArray.cpp -std=c++14 -o main && ls -l main
g++ -Os -s cpp11.cpp -std=c++11 -o main && ls -l main
echo "g++ -O1"

g++ -O1 -s oldStyle.cpp -std=c++98 -o main && ls -l main
g++ -O1 -s cpp98.cpp -std=c++98 -o main && ls -l main
g++ -O1 -s cpp17.cpp -std=c++17 -o main && ls -l main
g++ -O1 -s cpp14withoutArray.cpp -std=c++14 -o main && ls -l main
g++ -O1 -s cpp14withArray.cpp -std=c++14 -o main && ls -l main
g++ -O1 -s cpp11.cpp -std=c++11 -o main && ls -l main
echo "g++ -O2"

g++ -O2 -s oldStyle.cpp -std=c++98 -o main && ls -l main
g++ -O2 -s cpp98.cpp -std=c++98 -o main && ls -l main
g++ -O2 -s cpp17.cpp -std=c++17 -o main && ls -l main
g++ -O2 -s cpp14withoutArray.cpp -std=c++14 -o main && ls -l main
g++ -O2 -s cpp14withArray.cpp -std=c++14 -o main && ls -l main
g++ -O2 -s cpp11.cpp -std=c++11 -o main && ls -l main
echo "g++ -O3"

g++ -O3 -s oldStyle.cpp -std=c++98 -o main && ls -l main
g++ -O3 -s cpp98.cpp -std=c++98 -o main && ls -l main
g++ -O3 -s cpp17.cpp -std=c++17 -o main && ls -l main
g++ -O3 -s cpp14withoutArray.cpp -std=c++14 -o main && ls -l main
g++ -O3 -s cpp14withArray.cpp -std=c++14 -o main && ls -l main
g++ -O3 -s cpp11.cpp -std=c++11 -o main && ls -l main