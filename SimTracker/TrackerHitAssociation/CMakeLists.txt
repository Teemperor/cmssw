add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimTrackerTrackerHitAssociationsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimTracker/TrackerHitAssociation/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimTrackerTrackerHitAssociationsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimTracker/TrackerHitAssociation/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimTracker/TrackerHitAssociation/src/classes.h /home/teemperor/cms/cmssw/SimTracker/TrackerHitAssociation/src/classes_def.xml
  COMMENT "Generating ROOT dict SimTrackerTrackerHitAssociationsrcclassesh")

add_library(SimTrackerTrackerHitAssociation OBJECT 
  src/TrackerHitAssociator.cc
  src/ClusterTPAssociation.cc
  ${CMAKE_BINARY_DIR}/SimTrackerTrackerHitAssociationsrcclassesh_rflx.cpp
)

target_include_directories(SimTrackerTrackerHitAssociation PUBLIC /usr/include/boost/python/)
target_include_directories(SimTrackerTrackerHitAssociation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerTrackerHitAssociation PUBLIC /usr/include/python2.7/)
target_include_directories(SimTrackerTrackerHitAssociation PUBLIC /usr/include/root/)
target_include_directories(SimTrackerTrackerHitAssociation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerTrackerHitAssociation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerTrackerHitAssociation PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerTrackerHitAssociation PUBLIC /usr/include/boost/regex/)

