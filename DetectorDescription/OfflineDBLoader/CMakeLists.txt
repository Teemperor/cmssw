add_subdirectory(plugins)
add_library(DetectorDescriptionOfflineDBLoader OBJECT 
  src/GeometryInfoDump.cc
  src/DDCoreToDDXMLOutput.cc
)

target_include_directories(DetectorDescriptionOfflineDBLoader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionOfflineDBLoader PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionOfflineDBLoader PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionOfflineDBLoader PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionOfflineDBLoader PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionOfflineDBLoader PUBLIC /usr/include/boost/regex/)

