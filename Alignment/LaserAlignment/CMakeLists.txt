add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/AlignmentLaserAlignmentsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Alignment/LaserAlignment/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/AlignmentLaserAlignmentsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Alignment/LaserAlignment/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Alignment/LaserAlignment/src/classes.h /home/teemperor/cms/cmssw/Alignment/LaserAlignment/src/classes_def.xml
  COMMENT "Generating ROOT dict AlignmentLaserAlignmentsrcclassesh")

add_library(AlignmentLaserAlignment OBJECT 
  src/LASGlobalData.cc
  src/LASAlignmentTubeAlgorithm.cc
  src/LASModuleProfile.cc
  src/LASBarrelAlgorithm.cc
  src/LASEndcapAlignmentParameterSet.cc
  src/LASProfileJudge.cc
  src/LASCoordinateSet.cc
  src/LASGeometryUpdater.cc
  src/LASBarrelAlignmentParameterSet.cc
  src/LASConstants.cc
  src/LASEndcapAlgorithm.cc
  src/LASPeakFinder.cc
  src/LASGlobalLoop.cc
  ${CMAKE_BINARY_DIR}/AlignmentLaserAlignmentsrcclassesh_rflx.cpp
)

target_include_directories(AlignmentLaserAlignment PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentLaserAlignment PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentLaserAlignment PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentLaserAlignment PUBLIC /usr/include/root/)
target_include_directories(AlignmentLaserAlignment PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentLaserAlignment PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentLaserAlignment PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentLaserAlignment PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentLaserAlignment PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentLaserAlignment PUBLIC /usr/include/boost/)
target_include_directories(AlignmentLaserAlignment PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentLaserAlignment PUBLIC /usr/include/boost/regex/)

