#!/bin/sh

# drogon framework
git clone https://github.com/an-tao/drogon.git
cd drogon.git
git submodule update --init
mkdir build
cd build
cmake ..
make && sudo make install
