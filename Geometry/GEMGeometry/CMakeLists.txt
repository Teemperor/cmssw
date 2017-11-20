add_subdirectory(test)
add_library(GeometryGEMGeometry OBJECT 
  src/ME0EtaPartition.cc
  src/GEMEtaPartition.cc
  src/GEMRegion.cc
  src/GEMEtaPartitionSpecs.cc
  src/GEMSuperChamber.cc
  src/GEMGeometry.cc
  src/ME0Layer.cc
  src/GEMRing.cc
  src/ES_ME0Geometry.cc
  src/ME0Geometry.cc
  src/ME0Chamber.cc
  src/GEMStation.cc
  src/GEMChamber.cc
  src/ME0EtaPartitionSpecs.cc
  src/ES_GEMGeometry.cc
)

target_include_directories(GeometryGEMGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryGEMGeometry PUBLIC /usr/include/root/)
target_include_directories(GeometryGEMGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryGEMGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryGEMGeometry PUBLIC /usr/include/boost/)
target_include_directories(GeometryGEMGeometry PUBLIC /usr/include/boost/regex/)

