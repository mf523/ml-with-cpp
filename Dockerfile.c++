FROM lmiao/dev-env:ubuntu-base

RUN apt-get -y dist-upgrade && \
    apt-get -y update

RUN DEBIAN_FRONTEND=noninteractive apt-get -y install git gcc g++ cmake

RUN apt-get -y install libboost-all-dev libjsoncpp-dev uuid-dev openssl libssl-dev zlib1g-dev

# USER docker
CMD /bin/bash
