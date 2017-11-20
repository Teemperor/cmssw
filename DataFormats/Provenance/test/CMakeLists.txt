add_library(testDataFormatsProvenance OBJECT 
  testRunner.cpp
  eventid_t.cppunit.cc
  timestamp_t.cppunit.cc
  parametersetid_t.cppunit.cc
  indexIntoFile_t.cppunit.cc
  indexIntoFile1_t.cppunit.cc
  indexIntoFile2_t.cppunit.cc
  indexIntoFile3_t.cppunit.cc
  indexIntoFile4_t.cppunit.cc
  indexIntoFile5_t.cppunit.cc
  lumirange_t.cppunit.cc
  eventrange_t.cppunit.cc
)

target_include_directories(testDataFormatsProvenance PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDataFormatsProvenance PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDataFormatsProvenance PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDataFormatsProvenance PUBLIC /usr/include/boost/)
target_include_directories(testDataFormatsProvenance PUBLIC /usr/include/root/)
target_include_directories(testDataFormatsProvenance PUBLIC /usr/include/boost/regex/)

add_library(EntryDescription_t OBJECT 
  EntryDescription_t.cpp
)

target_include_directories(EntryDescription_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EntryDescription_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EntryDescription_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EntryDescription_t PUBLIC /usr/include/boost/)
target_include_directories(EntryDescription_t PUBLIC /usr/include/root/)
target_include_directories(EntryDescription_t PUBLIC /usr/include/boost/regex/)

add_library(testProductResolverIndexHelper OBJECT 
  testRunner.cpp
  productResolverIndexHelper_t.cppunit.cc
)

target_include_directories(testProductResolverIndexHelper PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testProductResolverIndexHelper PUBLIC /usr/include/root/)
target_include_directories(testProductResolverIndexHelper PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testProductResolverIndexHelper PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testProductResolverIndexHelper PUBLIC /usr/include/boost/)
target_include_directories(testProductResolverIndexHelper PUBLIC /usr/include/boost/regex/)

add_library(productResolverIndexHelperTest OBJECT 
  productResolverIndexHelperTest.cc
)

target_include_directories(productResolverIndexHelperTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(productResolverIndexHelperTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(productResolverIndexHelperTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(productResolverIndexHelperTest PUBLIC /usr/include/boost/)
target_include_directories(productResolverIndexHelperTest PUBLIC /usr/include/root/)
target_include_directories(productResolverIndexHelperTest PUBLIC /usr/include/boost/regex/)

