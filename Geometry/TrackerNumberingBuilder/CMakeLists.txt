add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeometryTrackerNumberingBuilder OBJECT 
  src/TrackerMapDDDtoID.cc
  src/module.cc
  src/TrackerShapeToBounds.cc
  src/GeometricDet.cc
  src/GeometricDetExtra.cc
  src/CmsTrackerStringToEnum.cc
  src/CmsTrackerDebugNavigator.cc
)

target_include_directories(GeometryTrackerNumberingBuilder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryTrackerNumberingBuilder PUBLIC /usr/include/root/)
target_include_directories(GeometryTrackerNumberingBuilder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryTrackerNumberingBuilder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryTrackerNumberingBuilder PUBLIC /usr/include/boost/)
target_include_directories(GeometryTrackerNumberingBuilder PUBLIC /usr/include/boost/regex/)

