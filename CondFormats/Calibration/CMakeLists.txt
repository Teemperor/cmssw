add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsCalibrationsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/Calibration/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsCalibrationsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/Calibration/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/Calibration/src/classes.h /home/teemperor/cms/cmssw/CondFormats/Calibration/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsCalibrationsrcclassesh")

add_library(CondFormatsCalibration OBJECT 
  src/mySiStripNoises.cc
  src/BlobNoises.cc
  src/T_EventSetup_Pedestals.cc
  src/Pedestals.cc
  src/mypt.cc
  src/BlobPedestals.cc
  src/BlobComplex.cc
  src/T_EventSetup_mySiStripNoises.cc
  src/T_EventSetup_Efficiency.cc
  src/big.cc
  ${CMAKE_BINARY_DIR}/CondFormatsCalibrationsrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsCalibration PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsCalibration PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsCalibration PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsCalibration PUBLIC /usr/include/root/)
target_include_directories(CondFormatsCalibration PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsCalibration PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsCalibration PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsCalibration PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsCalibration PUBLIC /usr/include/boost/regex/)

