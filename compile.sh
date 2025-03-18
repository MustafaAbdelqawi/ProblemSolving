mkdir build
cd build
BUILD_TYPE=${1}
cmake $BUILD_TYPE ..
make -j8
