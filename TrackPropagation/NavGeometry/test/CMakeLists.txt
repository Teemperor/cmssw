add_library(testTrackPropagationNavGeometry OBJECT 
  stubs/HelixPropagationTestGenerator.cc
  stubs/UniformMomentumGenerator.cc
  stubs/PropagationTestGenerator.cc
  stubs/RandomPlaneGeneratorByAxis.cc
  stubs/PropagatorTestTree.cc
)

target_include_directories(testTrackPropagationNavGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(testTrackPropagationNavGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testTrackPropagationNavGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(testTrackPropagationNavGeometry PUBLIC /usr/include/root/)
target_include_directories(testTrackPropagationNavGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testTrackPropagationNavGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testTrackPropagationNavGeometry PUBLIC /usr/include/boost/)
target_include_directories(testTrackPropagationNavGeometry PUBLIC /usr/include/boost/regex/)

add_library(SingleVolumeTest OBJECT 
  SingleVolumeTest.cpp
)

target_include_directories(SingleVolumeTest PUBLIC /usr/include/boost/python/)
target_include_directories(SingleVolumeTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SingleVolumeTest PUBLIC /usr/include/python2.7/)
target_include_directories(SingleVolumeTest PUBLIC /usr/include/root/)
target_include_directories(SingleVolumeTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SingleVolumeTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SingleVolumeTest PUBLIC /usr/include/boost/)
target_include_directories(SingleVolumeTest PUBLIC /usr/include/boost/regex/)

add_library(DoubleVolumeTest OBJECT 
  DoubleVolumeTest.cpp
)

target_include_directories(DoubleVolumeTest PUBLIC /usr/include/boost/python/)
target_include_directories(DoubleVolumeTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DoubleVolumeTest PUBLIC /usr/include/python2.7/)
target_include_directories(DoubleVolumeTest PUBLIC /usr/include/root/)
target_include_directories(DoubleVolumeTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DoubleVolumeTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DoubleVolumeTest PUBLIC /usr/include/boost/)
target_include_directories(DoubleVolumeTest PUBLIC /usr/include/boost/regex/)

