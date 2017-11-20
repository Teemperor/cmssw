add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CalibCalorimetryEcalLaserAnalyzersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CalibCalorimetry/EcalLaserAnalyzer/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CalibCalorimetryEcalLaserAnalyzersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CalibCalorimetry/EcalLaserAnalyzer/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CalibCalorimetry/EcalLaserAnalyzer/src/classes.h /home/teemperor/cms/cmssw/CalibCalorimetry/EcalLaserAnalyzer/src/classes_def.xml
  COMMENT "Generating ROOT dict CalibCalorimetryEcalLaserAnalyzersrcclassesh")

add_library(CalibCalorimetryEcalLaserAnalyzer OBJECT 
  src/TMarkov.cc
  src/TShapeAnalysis.cc
  src/MEEBGeom.cc
  src/TPNCor.cc
  src/TMem.cc
  src/TPN.cc
  src/MEEEGeom.cc
  src/PulseFitWithFunction.cc
  src/TAPDPulse.cc
  src/TMTQ.cc
  src/TMom.cc
  src/TSFit.cc
  src/MELaserPrim.cc
  src/TPNFit.cc
  src/PulseFitWithShape.cc
  src/TAPD.cc
  src/MEGeom.cc
  src/MEChannel.cc
  src/TMatacq.cc
  src/TFParams.cc
  src/TPNPulse.cc
  src/ME.cc
  ${CMAKE_BINARY_DIR}/CalibCalorimetryEcalLaserAnalyzersrcclassesh_rflx.cpp
)

target_include_directories(CalibCalorimetryEcalLaserAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibCalorimetryEcalLaserAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CalibCalorimetryEcalLaserAnalyzer PUBLIC /usr/include/boost/regex/)

