add_library(MagneticFieldLayers OBJECT 
  src/MagESector.cc
  src/MagBSector.cc
  src/MagBSlab.cc
  src/MagELayer.cc
  src/MagBRod.cc
  src/MagBLayer.cc
)

target_include_directories(MagneticFieldLayers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MagneticFieldLayers PUBLIC /usr/include/root/)
target_include_directories(MagneticFieldLayers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MagneticFieldLayers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MagneticFieldLayers PUBLIC /usr/include/boost/)
target_include_directories(MagneticFieldLayers PUBLIC /usr/include/boost/regex/)

