add_library(testParameterSet OBJECT 
  ps_t.cppunit.cc
)

target_include_directories(testParameterSet PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testParameterSet PUBLIC /usr/include/root/)
target_include_directories(testParameterSet PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testParameterSet PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testParameterSet PUBLIC /usr/include/boost/)
target_include_directories(testParameterSet PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreParameterSetDescription OBJECT 
  parameterSetDescription_t.cc
)

target_include_directories(TestFWCoreParameterSetDescription PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreParameterSetDescription PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreParameterSetDescription PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreParameterSetDescription PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreParameterSetDescription PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreParameterSetDescription PUBLIC /usr/include/boost/regex/)

add_library(TestFWCoreParameterSetDriver OBJECT 
  TestFWCoreParameterSetDriver.cpp
)

target_include_directories(TestFWCoreParameterSetDriver PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreParameterSetDriver PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreParameterSetDriver PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreParameterSetDriver PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreParameterSetDriver PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreParameterSetDriver PUBLIC /usr/include/boost/regex/)

