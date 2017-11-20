add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoTrackerMeasurementDetsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoTracker/MeasurementDet/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoTrackerMeasurementDetsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoTracker/MeasurementDet/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoTracker/MeasurementDet/src/classes.h /home/teemperor/cms/cmssw/RecoTracker/MeasurementDet/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoTrackerMeasurementDetsrcclassesh")

add_library(RecoTrackerMeasurementDet OBJECT 
  src/MeasurementTrackerEvent.cc
  src/TkMeasurementDetSet.cc
  src/MeasurementTracker.cc
  src/StartingLayerFinder.cc
  src/LayerCollector.cc
  ${CMAKE_BINARY_DIR}/RecoTrackerMeasurementDetsrcclassesh_rflx.cpp
)

target_include_directories(RecoTrackerMeasurementDet PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerMeasurementDet PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerMeasurementDet PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerMeasurementDet PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerMeasurementDet PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerMeasurementDet PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerMeasurementDet PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerMeasurementDet PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerMeasurementDet PUBLIC /usr/include/boost/regex/)

