add_subdirectory(plugins)
add_library(ValidationMuonRPCGeometry OBJECT 
  src/Constants.cc
  src/PTStatistics.cc
)

target_include_directories(ValidationMuonRPCGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationMuonRPCGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationMuonRPCGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationMuonRPCGeometry PUBLIC /usr/include/root/)
target_include_directories(ValidationMuonRPCGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationMuonRPCGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationMuonRPCGeometry PUBLIC /usr/include/boost/)
target_include_directories(ValidationMuonRPCGeometry PUBLIC /usr/include/boost/regex/)

