add_subdirectory(plugins)
add_library(DQMServicesClientConfig OBJECT 
  src/FitSlicesYTool.cc
  src/QTestConfigure.cc
  src/QTestHandle.cc
  src/QTestStatusChecker.cc
  src/DQMParserBase.cc
  src/QTestParameterNames.cc
  src/QTestConfigurationParser.cc
)

target_include_directories(DQMServicesClientConfig PUBLIC /usr/include/boost/python/)
target_include_directories(DQMServicesClientConfig PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMServicesClientConfig PUBLIC /usr/include/python2.7/)
target_include_directories(DQMServicesClientConfig PUBLIC /usr/include/root/)
target_include_directories(DQMServicesClientConfig PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMServicesClientConfig PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMServicesClientConfig PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMServicesClientConfig PUBLIC /usr/include/boost/)
target_include_directories(DQMServicesClientConfig PUBLIC /usr/include/boost/regex/)

