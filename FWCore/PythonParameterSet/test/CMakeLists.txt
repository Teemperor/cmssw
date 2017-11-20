add_library(testPythonParameterSet OBJECT 
  processbuilder_t.cppunit.cpp
  makeprocess_t.cppunit.cc
  makepset_t.cppunit.cc
  readpsetsfrom_t.cppunit.cc
)

target_include_directories(testPythonParameterSet PUBLIC /usr/include/boost/python/)
target_include_directories(testPythonParameterSet PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testPythonParameterSet PUBLIC /usr/include/python2.7/)
target_include_directories(testPythonParameterSet PUBLIC /usr/include/root/)
target_include_directories(testPythonParameterSet PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testPythonParameterSet PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testPythonParameterSet PUBLIC /usr/include/boost/)
target_include_directories(testPythonParameterSet PUBLIC /usr/include/boost/regex/)

