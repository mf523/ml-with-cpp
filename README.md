# ml-with-cpp

## Install Docker CE
* https://docs.docker.com/engine/install/ubuntu/

## Build Docker Image for C++
```
sudo apt-get install git wget
git clone https://github.com/mf523/ml-with-cpp.git ml-with-cpp.git
cd ml-with-cpp.git
docker build -t lmiao/dev-env:ubuntu-cpp - < Dockerfile.cpp
docker push lmiao/dev-env:ubuntu-cpp
```

## Build Docker Image for ML with C++
* https://docs.conda.io/en/latest/miniconda.html
```
docker build -t lmiao/dev-env:ubuntu-cpp-ml - < Dockerfile.cpp-ml
docker push lmiao/dev-env:ubuntu-cpp-ml
```
## Jupyter
* https://github.com/jupyter-xeus/xeus


