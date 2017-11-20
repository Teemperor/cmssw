add_library(edmConfigHash OBJECT 
  edmConfigHash.cpp
)

target_include_directories(edmConfigHash PUBLIC /usr/include/boost/python/)
target_include_directories(edmConfigHash PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmConfigHash PUBLIC /usr/include/python2.7/)
target_include_directories(edmConfigHash PUBLIC /usr/include/root/)
target_include_directories(edmConfigHash PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmConfigHash PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmConfigHash PUBLIC /usr/include/boost/)
target_include_directories(edmConfigHash PUBLIC /usr/include/boost/regex/)

add_library(edmParameterSetDump OBJECT 
  edmParameterSetDump.cpp
)

target_include_directories(edmParameterSetDump PUBLIC /usr/include/boost/python/)
target_include_directories(edmParameterSetDump PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmParameterSetDump PUBLIC /usr/include/python2.7/)
target_include_directories(edmParameterSetDump PUBLIC /usr/include/root/)
target_include_directories(edmParameterSetDump PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmParameterSetDump PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmParameterSetDump PUBLIC /usr/include/boost/)
target_include_directories(edmParameterSetDump PUBLIC /usr/include/boost/regex/)

