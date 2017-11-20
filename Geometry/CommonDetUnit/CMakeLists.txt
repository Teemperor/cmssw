add_subdirectory(test)
add_library(GeometryCommonDetUnit OBJECT 
  src/GlobalTrackingGeometry.cc
  src/GeomDet.cc
  src/GluedGeomDet.cc
  src/ES_TrackingGeometry.cc
  src/MuonGeomDet.cc
  src/TrackerGeomDet.cc
  src/GeomDetType.cc
  src/GeomDetEnumerators.cc
)

target_include_directories(GeometryCommonDetUnit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryCommonDetUnit PUBLIC /usr/include/root/)
target_include_directories(GeometryCommonDetUnit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryCommonDetUnit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryCommonDetUnit PUBLIC /usr/include/boost/)
target_include_directories(GeometryCommonDetUnit PUBLIC /usr/include/boost/regex/)

