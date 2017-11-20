add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHcalCalibObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/HcalCalibObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHcalCalibObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/HcalCalibObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/HcalCalibObjects/src/classes.h /home/teemperor/cms/cmssw/DataFormats/HcalCalibObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHcalCalibObjectssrcclassesh")

add_library(DataFormatsHcalCalibObjects OBJECT 
  src/HFRecalibration.cc
  ${CMAKE_BINARY_DIR}/DataFormatsHcalCalibObjectssrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHcalCalibObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHcalCalibObjects PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHcalCalibObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHcalCalibObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHcalCalibObjects PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHcalCalibObjects PUBLIC /usr/include/boost/regex/)

