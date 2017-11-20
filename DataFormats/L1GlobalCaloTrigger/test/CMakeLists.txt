add_library(testL1GlobalCaloRegionDetId OBJECT 
  testL1GlobalCaloRegionDetId.cpp
)

target_include_directories(testL1GlobalCaloRegionDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testL1GlobalCaloRegionDetId PUBLIC /usr/include/root/)
target_include_directories(testL1GlobalCaloRegionDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testL1GlobalCaloRegionDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testL1GlobalCaloRegionDetId PUBLIC /usr/include/boost/)
target_include_directories(testL1GlobalCaloRegionDetId PUBLIC /usr/include/boost/regex/)

add_library(testGctDataFormats OBJECT 
  testGctDataFormats.cpp
)

target_include_directories(testGctDataFormats PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGctDataFormats PUBLIC /usr/include/root/)
target_include_directories(testGctDataFormats PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGctDataFormats PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGctDataFormats PUBLIC /usr/include/boost/)
target_include_directories(testGctDataFormats PUBLIC /usr/include/boost/regex/)

add_library(testL1GctHtMiss OBJECT 
  testL1GctHtMiss.cpp
)

target_include_directories(testL1GctHtMiss PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testL1GctHtMiss PUBLIC /usr/include/root/)
target_include_directories(testL1GctHtMiss PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testL1GctHtMiss PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testL1GctHtMiss PUBLIC /usr/include/boost/)
target_include_directories(testL1GctHtMiss PUBLIC /usr/include/boost/regex/)

add_library(testL1GctInternHtMiss OBJECT 
  testL1GctInternHtMiss.cpp
)

target_include_directories(testL1GctInternHtMiss PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testL1GctInternHtMiss PUBLIC /usr/include/root/)
target_include_directories(testL1GctInternHtMiss PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testL1GctInternHtMiss PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testL1GctInternHtMiss PUBLIC /usr/include/boost/)
target_include_directories(testL1GctInternHtMiss PUBLIC /usr/include/boost/regex/)

