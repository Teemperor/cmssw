add_subdirectory(bin)
add_subdirectory(test)
add_library(FWCorePythonParameterSet OBJECT 
  src/MakeParameterSets.cc
  src/PythonProcessDesc.cc
  src/pythonFileToConfigure.cc
  src/initializeModule.cc
  src/PythonParameterSet.cc
  src/PythonWrapper.cc
)

target_include_directories(FWCorePythonParameterSet PUBLIC /usr/include/boost/python/)
target_include_directories(FWCorePythonParameterSet PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCorePythonParameterSet PUBLIC /usr/include/python2.7/)
target_include_directories(FWCorePythonParameterSet PUBLIC /usr/include/root/)
target_include_directories(FWCorePythonParameterSet PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCorePythonParameterSet PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCorePythonParameterSet PUBLIC /usr/include/boost/)
target_include_directories(FWCorePythonParameterSet PUBLIC /usr/include/boost/regex/)

