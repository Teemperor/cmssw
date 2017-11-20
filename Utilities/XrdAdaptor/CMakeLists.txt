add_subdirectory(plugins)
add_library(UtilitiesXrdAdaptor OBJECT 
  src/QualityMetric.cc
  src/XrdSource.cc
  src/XrdRequest.cc
  src/XrdStatistics.cc
  src/XrdFile.cc
  src/XrdRequestManager.cc
)

target_include_directories(UtilitiesXrdAdaptor PUBLIC /usr/include/boost/python/)
target_include_directories(UtilitiesXrdAdaptor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(UtilitiesXrdAdaptor PUBLIC /usr/include/python2.7/)
target_include_directories(UtilitiesXrdAdaptor PUBLIC /usr/include/root/)
target_include_directories(UtilitiesXrdAdaptor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(UtilitiesXrdAdaptor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(UtilitiesXrdAdaptor PUBLIC /usr/include/boost/)
target_include_directories(UtilitiesXrdAdaptor PUBLIC /usr/include/boost/regex/)
target_compile_definitions(UtilitiesXrdAdaptor PUBLIC -D_FILE_OFFSET_BITS=64)

