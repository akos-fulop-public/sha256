# SHA256 Project

This is a very simple practice project to implement the SHA256 algorithm.

## Build

### Build the Docker image (optional)
```
docker image build -t <image_name> <repo_root>
```

### Build the application (out-of-source)
```
docker container run --rm -ti -v<repo_root>:/src <image_name>
mkdir build
cd build
cmake ..
cmake --build .
```
Optionally to run the tests
```
cd test
ctest
```
