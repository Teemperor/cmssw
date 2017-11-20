add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CalibCalorimetryEcalCorrelatedNoiseAnalysisAlgossrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CalibCalorimetry/EcalCorrelatedNoiseAnalysisAlgos/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CalibCalorimetryEcalCorrelatedNoiseAnalysisAlgossrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CalibCalorimetry/EcalCorrelatedNoiseAnalysisAlgos/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CalibCalorimetry/EcalCorrelatedNoiseAnalysisAlgos/src/classes.h /home/teemperor/cms/cmssw/CalibCalorimetry/EcalCorrelatedNoiseAnalysisAlgos/src/classes_def.xml
  COMMENT "Generating ROOT dict CalibCalorimetryEcalCorrelatedNoiseAnalysisAlgossrcclassesh")

add_library(CalibCalorimetryEcalCorrelatedNoiseAnalysisAlgos OBJECT 
  src/TEcnaNumbering.cc
  src/TEcnaGui.cc
  src/TEcnaParEcal.cc
  src/TEcnaParHistos.cc
  src/TEcnaRun.cc
  src/TEcnaResultType.cc
  src/TEcnaWrite.cc
  src/TEcnaParCout.cc
  src/TEcnaRead.cc
  src/TEcnaRootFile.cc
  src/TEcnaNArrayD.cc
  src/TEcnaParPaths.cc
  src/TEcnaHeader.cc
  src/TEcnaHistos.cc
  src/TEcnaObject.cc
  ${CMAKE_BINARY_DIR}/CalibCalorimetryEcalCorrelatedNoiseAnalysisAlgossrcclassesh_rflx.cpp
)

target_include_directories(CalibCalorimetryEcalCorrelatedNoiseAnalysisAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibCalorimetryEcalCorrelatedNoiseAnalysisAlgos PUBLIC /usr/include/root/)

