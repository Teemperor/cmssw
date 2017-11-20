add_library(CSCNoiseMatrixTest OBJECT 
  CSCNoiseMatrixTest.cc
)

target_include_directories(CSCNoiseMatrixTest PUBLIC /usr/include/boost/python/)
target_include_directories(CSCNoiseMatrixTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCNoiseMatrixTest PUBLIC /usr/include/python2.7/)
target_include_directories(CSCNoiseMatrixTest PUBLIC /usr/include/root/)
target_include_directories(CSCNoiseMatrixTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCNoiseMatrixTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCNoiseMatrixTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCNoiseMatrixTest PUBLIC /usr/include/boost/)
target_include_directories(CSCNoiseMatrixTest PUBLIC /usr/include/boost/regex/)

add_library(CSCGasCollisionsTest OBJECT 
  CSCGasCollisionsTest.cpp
)

target_include_directories(CSCGasCollisionsTest PUBLIC /usr/include/boost/python/)
target_include_directories(CSCGasCollisionsTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCGasCollisionsTest PUBLIC /usr/include/python2.7/)
target_include_directories(CSCGasCollisionsTest PUBLIC /usr/include/root/)
target_include_directories(CSCGasCollisionsTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCGasCollisionsTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCGasCollisionsTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCGasCollisionsTest PUBLIC /usr/include/boost/)
target_include_directories(CSCGasCollisionsTest PUBLIC /usr/include/boost/regex/)

