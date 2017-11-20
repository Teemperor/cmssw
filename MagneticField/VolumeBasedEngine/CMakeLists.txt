add_library(MagneticFieldVolumeBasedEngine OBJECT 
  src/VolumeBasedMagneticField.cc
  src/MagGeometry.cc
)

target_include_directories(MagneticFieldVolumeBasedEngine PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MagneticFieldVolumeBasedEngine PUBLIC /usr/include/root/)
target_include_directories(MagneticFieldVolumeBasedEngine PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MagneticFieldVolumeBasedEngine PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MagneticFieldVolumeBasedEngine PUBLIC /usr/include/boost/)
target_include_directories(MagneticFieldVolumeBasedEngine PUBLIC /usr/include/boost/regex/)

