add_library(testFEDRawData OBJECT 
  FEDRawData_t.cpp
  FEDRawDataProduct_t.cc
)

target_include_directories(testFEDRawData PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testFEDRawData PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testFEDRawData PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testFEDRawData PUBLIC /usr/include/boost/)
target_include_directories(testFEDRawData PUBLIC /usr/include/root/)
target_include_directories(testFEDRawData PUBLIC /usr/include/boost/regex/)

add_library(testDumpFEDRawDataProduct OBJECT 
  DumpFEDRawDataProduct.cc
)

target_include_directories(testDumpFEDRawDataProduct PUBLIC /usr/include/boost/python/)
target_include_directories(testDumpFEDRawDataProduct PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDumpFEDRawDataProduct PUBLIC /usr/include/python2.7/)
target_include_directories(testDumpFEDRawDataProduct PUBLIC /usr/include/root/)
target_include_directories(testDumpFEDRawDataProduct PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDumpFEDRawDataProduct PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDumpFEDRawDataProduct PUBLIC /usr/include/boost/)
target_include_directories(testDumpFEDRawDataProduct PUBLIC /usr/include/boost/regex/)

