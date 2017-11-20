add_subdirectory(test)
add_subdirectory(plugins)
add_library(MagneticFieldGeomBuilder OBJECT 
  src/MagGeoBuilderFromDDD.cc
  src/eSector.cc
  src/bLayer.cc
  src/bSlab.cc
  src/bRod.cc
  src/bSector.cc
  src/volumeHandle.cc
  src/eLayer.cc
)

target_include_directories(MagneticFieldGeomBuilder PUBLIC /usr/include/boost/python/)
target_include_directories(MagneticFieldGeomBuilder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MagneticFieldGeomBuilder PUBLIC /usr/include/python2.7/)
target_include_directories(MagneticFieldGeomBuilder PUBLIC /usr/include/root/)
target_include_directories(MagneticFieldGeomBuilder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MagneticFieldGeomBuilder PUBLIC /usr/include/boost/serialization/)
target_include_directories(MagneticFieldGeomBuilder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MagneticFieldGeomBuilder PUBLIC /usr/include/boost/)
target_include_directories(MagneticFieldGeomBuilder PUBLIC /usr/include/boost/regex/)

