add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CalibrationHcalCalibAlgossrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Calibration/HcalCalibAlgos/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CalibrationHcalCalibAlgossrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Calibration/HcalCalibAlgos/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Calibration/HcalCalibAlgos/src/classes.h /home/teemperor/cms/cmssw/Calibration/HcalCalibAlgos/src/classes_def.xml
  COMMENT "Generating ROOT dict CalibrationHcalCalibAlgossrcclassesh")

add_library(CalibrationHcalCalibAlgos OBJECT 
  src/hcalCalibUtils.cc
  src/HcalConstantsXMLWriter.cc
  src/hcalCalib.cc
  ${CMAKE_BINARY_DIR}/CalibrationHcalCalibAlgossrcclassesh_rflx.cpp
)

target_include_directories(CalibrationHcalCalibAlgos PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /usr/include/boost/)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /usr/include/root/)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CalibrationHcalCalibAlgos PUBLIC /usr/include/boost/regex/)

