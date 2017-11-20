add_library(MagneticFieldVolumeGeometry OBJECT 
  src/MagVolume6Faces.cc
  src/MagVolume.cc
  src/MagCylinder.cc
  src/FourPointPlaneBounds.cc
  src/MagExceptions.cc
  src/MagVolumeOutsideValidity.cc
)

target_include_directories(MagneticFieldVolumeGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MagneticFieldVolumeGeometry PUBLIC /usr/include/root/)
target_include_directories(MagneticFieldVolumeGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MagneticFieldVolumeGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MagneticFieldVolumeGeometry PUBLIC /usr/include/boost/)
target_include_directories(MagneticFieldVolumeGeometry PUBLIC /usr/include/boost/regex/)

