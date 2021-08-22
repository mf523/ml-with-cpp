FROM lmiao/dev-env:ubuntu-base

RUN apt-get -y dist-upgrade && \
    apt-get -y update

RUN apt-get -y install git gcc g++ cmake
    
RUN apt-get -y install libjsoncpp-dev uuid-dev openssl libssl-dev zlib1g-dev

# USER docker
CMD /bin/bash
