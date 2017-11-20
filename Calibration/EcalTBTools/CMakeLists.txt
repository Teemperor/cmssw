add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CalibrationEcalTBToolssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Calibration/EcalTBTools/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CalibrationEcalTBToolssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Calibration/EcalTBTools/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Calibration/EcalTBTools/src/classes.h /home/teemperor/cms/cmssw/Calibration/EcalTBTools/src/classes_def.xml
  COMMENT "Generating ROOT dict CalibrationEcalTBToolssrcclassesh")

add_library(CalibrationEcalTBTools OBJECT 
  src/TB06RecoH2.cc
  src/TB06Tree.cc
  src/TB06Reco.cc
  src/TB06TreeH2.cc
  ${CMAKE_BINARY_DIR}/CalibrationEcalTBToolssrcclassesh_rflx.cpp
)

target_include_directories(CalibrationEcalTBTools PUBLIC /usr/include/boost/python/)
target_include_directories(CalibrationEcalTBTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibrationEcalTBTools PUBLIC /usr/include/python2.7/)
target_include_directories(CalibrationEcalTBTools PUBLIC /usr/include/root/)
target_include_directories(CalibrationEcalTBTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibrationEcalTBTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibrationEcalTBTools PUBLIC /usr/include/boost/)
target_include_directories(CalibrationEcalTBTools PUBLIC /usr/include/boost/regex/)

