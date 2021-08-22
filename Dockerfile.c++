FROM lmiao/dev-env:ubuntu-base

RUN apt-get -y dist-upgrade && \
    apt-get -y update

RUN apt-get -y install git gcc g++ cmake
    
RUN apt-get -y install libjsoncpp-dev uuid-dev openssl libssl-dev zlib1g-dev

# drogon framework
RUN mkdir -p /tmp/build; cd /tmp/build && \
    git clone https://github.com/an-tao/drogon; cd drogon && \
    git submodule update --init && \
    mkdir build; cd build && \
    cmake .. && \
    make && sudo make install

# USER docker
CMD /bin/bash
