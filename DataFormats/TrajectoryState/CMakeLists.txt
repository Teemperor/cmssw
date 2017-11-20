add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsTrajectoryStatesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/TrajectoryState/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsTrajectoryStatesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/TrajectoryState/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/TrajectoryState/src/classes.h /home/teemperor/cms/cmssw/DataFormats/TrajectoryState/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsTrajectoryStatesrcclassesh")

add_library(DataFormatsTrajectoryState OBJECT 
  ${CMAKE_BINARY_DIR}/DataFormatsTrajectoryStatesrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsTrajectoryState PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsTrajectoryState PUBLIC /usr/include/root/)

