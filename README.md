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
docker build -t lmiao/dev-env:ubuntu-cpp-ml-cpu-x86_64 - < Dockerfile.c++ml.cpu.x86_64
docker push lmiao/dev-env:ubuntu-cpp-ml-cpu-x86_64
```
```
docker build -t lmiao/dev-env:ubuntu-cpp-ml-gpu-x86_64 - < Dockerfile.c++ml.gpu.x86_64
docker push lmiao/dev-env:ubuntu-cpp-ml-gpu-x86_64
```

## Run container
```
docker run -it --name dev-env-cpp-ml -p 8888:8888 lmiao/dev-env:ubuntu-cpp-ml /bin/sh
. /opt/miniconda/bin/activate
# only work with ip 0.0.0.0 and port 80 with MacOSX(11.5.2 M1)
jupyter-lab --no-browser --ip 0.0.0.0 --port 80
```
* in case network debug is needed
```
sudo apt install net-tools
ifconfig
```

## Jupyter
* https://github.com/jupyter-xeus/xeus
* https://github.com/jupyter-xeus/xeus-cling
```
. /opt/miniconda/bin/activate
conda create -y -n cpp-ml
conda activate cpp-ml
conda install -c conda-forge -q -y jupyterlab
conda install -c conda-forge -q -y xeus
conda install -c conda-forge -q -y xeus-cling
jupyter-lab --no-browser --ip 0.0.0.0 --port 80
```


