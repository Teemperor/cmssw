add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimTrackerTrackTriggerAssociationsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimTracker/TrackTriggerAssociation/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimTrackerTrackTriggerAssociationsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimTracker/TrackTriggerAssociation/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimTracker/TrackTriggerAssociation/src/classes.h /home/teemperor/cms/cmssw/SimTracker/TrackTriggerAssociation/src/classes_def.xml
  COMMENT "Generating ROOT dict SimTrackerTrackTriggerAssociationsrcclassesh")

add_library(SimTrackerTrackTriggerAssociation OBJECT 
  src/TTTrackAssociationMap.cc
  ${CMAKE_BINARY_DIR}/SimTrackerTrackTriggerAssociationsrcclassesh_rflx.cpp
)

target_include_directories(SimTrackerTrackTriggerAssociation PUBLIC /usr/include/boost/python/)
target_include_directories(SimTrackerTrackTriggerAssociation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerTrackTriggerAssociation PUBLIC /usr/include/python2.7/)
target_include_directories(SimTrackerTrackTriggerAssociation PUBLIC /usr/include/root/)
target_include_directories(SimTrackerTrackTriggerAssociation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerTrackTriggerAssociation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerTrackTriggerAssociation PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimTrackerTrackTriggerAssociation PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerTrackTriggerAssociation PUBLIC /usr/include/boost/regex/)

