add_subdirectory(test)
add_library(DetectorDescriptionBase OBJECT 
  src/DDReadMapType.cc
  src/DDTypes.cc
)

target_include_directories(DetectorDescriptionBase PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionBase PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionBase PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionBase PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionBase PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionBase PUBLIC /usr/include/boost/regex/)

