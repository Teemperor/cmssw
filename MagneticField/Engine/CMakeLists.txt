add_subdirectory(test)
add_library(MagneticFieldEngine OBJECT 
  src/MagneticField.cc
  src/ES_MagneticField.cc
)

target_include_directories(MagneticFieldEngine PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MagneticFieldEngine PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MagneticFieldEngine PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MagneticFieldEngine PUBLIC /usr/include/boost/)
target_include_directories(MagneticFieldEngine PUBLIC /usr/include/root/)
target_include_directories(MagneticFieldEngine PUBLIC /usr/include/boost/regex/)

