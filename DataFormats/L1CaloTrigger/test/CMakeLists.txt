add_library(printRegionMap OBJECT 
  printRegionMap.cpp
)

target_include_directories(printRegionMap PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(printRegionMap PUBLIC /home/teemperor/cms/md5/)
target_include_directories(printRegionMap PUBLIC /usr/include/boost/filesystem/)
target_include_directories(printRegionMap PUBLIC /usr/include/boost/)
target_include_directories(printRegionMap PUBLIC /usr/include/root/)
target_include_directories(printRegionMap PUBLIC /usr/include/boost/regex/)

add_library(testL1CaloRegionDetId OBJECT 
  testL1CaloRegionDetId.cpp
)

target_include_directories(testL1CaloRegionDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testL1CaloRegionDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testL1CaloRegionDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testL1CaloRegionDetId PUBLIC /usr/include/boost/)
target_include_directories(testL1CaloRegionDetId PUBLIC /usr/include/root/)
target_include_directories(testL1CaloRegionDetId PUBLIC /usr/include/boost/regex/)

