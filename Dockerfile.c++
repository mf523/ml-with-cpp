FROM lmiao/dev-env:ubuntu-base

RUN apt-get -y dist-upgrade && \
    apt-get -y update && \
    apt-get -y install git gcc g++ cmake

# USER docker
CMD /bin/bash
