add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/TrackingToolsTrajectoryStatesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/TrackingTools/TrajectoryState/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/TrackingToolsTrajectoryStatesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/TrackingTools/TrajectoryState/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/TrackingTools/TrajectoryState/src/classes.h /home/teemperor/cms/cmssw/TrackingTools/TrajectoryState/src/classes_def.xml
  COMMENT "Generating ROOT dict TrackingToolsTrajectoryStatesrcclassesh")

add_library(TrackingToolsTrajectoryState OBJECT 
  src/TrajectoryStateTransform.cc
  src/FreeTrajectoryState.cc
  src/PerigeeConversions.cc
  src/TrajectoryStateOnSurfacePrint.cc
  src/BasicTrajectoryState.cc
  src/TrajectoryStateClosestToBeamLine.cc
  src/TrajectoryStateClosestToPoint.cc
  src/TrajectoryStateOnSurface.cc
  src/FreeTrajectoryStatePrint.cc
  src/TrajectoryStateAccessor.cc
  ${CMAKE_BINARY_DIR}/TrackingToolsTrajectoryStatesrcclassesh_rflx.cpp
)

target_include_directories(TrackingToolsTrajectoryState PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsTrajectoryState PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsTrajectoryState PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsTrajectoryState PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsTrajectoryState PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsTrajectoryState PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/TrajectoryStateTransform.cc
  src/FreeTrajectoryState.cc
  src/PerigeeConversions.cc
  src/TrajectoryStateOnSurfacePrint.cc
  src/BasicTrajectoryState.cc
  src/TrajectoryStateClosestToBeamLine.cc
  src/TrajectoryStateClosestToPoint.cc
  src/TrajectoryStateOnSurface.cc
  src/FreeTrajectoryStatePrint.cc
  src/TrajectoryStateAccessor.cc
  ${CMAKE_BINARY_DIR}/TrackingToolsTrajectoryStatesrcclassesh_rflx.cpp
PROPERTIES COMPILE_FLAGS "-Ofast")

