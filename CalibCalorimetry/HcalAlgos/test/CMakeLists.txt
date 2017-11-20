add_library(HcalShapeIntegrator OBJECT 
  HcalShapeIntegrator.cpp
)

target_include_directories(HcalShapeIntegrator PUBLIC /usr/include/boost/python/)
target_include_directories(HcalShapeIntegrator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HcalShapeIntegrator PUBLIC /usr/include/python2.7/)
target_include_directories(HcalShapeIntegrator PUBLIC /usr/include/root/)
target_include_directories(HcalShapeIntegrator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HcalShapeIntegrator PUBLIC /usr/include/boost/serialization/)
target_include_directories(HcalShapeIntegrator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HcalShapeIntegrator PUBLIC /usr/include/boost/)
target_include_directories(HcalShapeIntegrator PUBLIC /usr/include/boost/regex/)

add_library(HcalPulseContainmentTest OBJECT 
  HcalPulseContainmentTest.cpp
)

target_include_directories(HcalPulseContainmentTest PUBLIC /usr/include/boost/python/)
target_include_directories(HcalPulseContainmentTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HcalPulseContainmentTest PUBLIC /usr/include/python2.7/)
target_include_directories(HcalPulseContainmentTest PUBLIC /usr/include/root/)
target_include_directories(HcalPulseContainmentTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HcalPulseContainmentTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(HcalPulseContainmentTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HcalPulseContainmentTest PUBLIC /usr/include/boost/)
target_include_directories(HcalPulseContainmentTest PUBLIC /usr/include/boost/regex/)

add_library(MapTester OBJECT 
  MapTester.cc
)

target_include_directories(MapTester PUBLIC /usr/include/boost/python/)
target_include_directories(MapTester PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MapTester PUBLIC /usr/include/python2.7/)
target_include_directories(MapTester PUBLIC /usr/include/root/)
target_include_directories(MapTester PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MapTester PUBLIC /usr/include/boost/serialization/)
target_include_directories(MapTester PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MapTester PUBLIC /usr/include/boost/)
target_include_directories(MapTester PUBLIC /usr/include/boost/regex/)

