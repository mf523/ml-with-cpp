# ml-with-cpp

## Install Docker CE
* https://docs.docker.com/engine/install/ubuntu/

## Build Docker Image for C++
```
sudo apt-get install git wget
git clone https://github.com/mf523/ml-with-cpp.git ml-with-cpp.git
cd ml-with-cpp.git
docker build -t lmiao/dev-env:ubuntu-cpp - < Dockerfile.c++
docker push lmiao/dev-env:ubuntu-cpp
```

## Build Docker Image for ML with C++
```
docker build -t lmiao/dev-env:ubuntu-cpp-ml - < Dockerfile.c++ml
docker push lmiao/dev-env:ubuntu-cpp-ml
```
## Jupyter
* https://github.com/jupyter-xeus/xeus
```
. /opt/miniconda/bin/activate
conda create -y -n cpp-ml
conda activate cpp-ml
conda install -c conda-forge -q -y jupyterlab
conda install -c conda-forge -q -y xeus
jupyter-lab --no-browser
```


