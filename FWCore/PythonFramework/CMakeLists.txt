add_subdirectory(test)
add_library(FWCorePythonFramework OBJECT 
  src/PythonModule.cc
  src/PythonEventProcessor.cc
)

target_include_directories(FWCorePythonFramework PUBLIC /usr/include/boost/python/)
target_include_directories(FWCorePythonFramework PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCorePythonFramework PUBLIC /usr/include/python2.7/)
target_include_directories(FWCorePythonFramework PUBLIC /usr/include/root/)
target_include_directories(FWCorePythonFramework PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCorePythonFramework PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCorePythonFramework PUBLIC /usr/include/boost/)
target_include_directories(FWCorePythonFramework PUBLIC /usr/include/boost/regex/)

