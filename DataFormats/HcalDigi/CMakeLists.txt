add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHcalDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/HcalDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHcalDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/HcalDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/HcalDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/HcalDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHcalDigisrcclassesh")

add_library(DataFormatsHcalDigi OBJECT 
  src/HODataFrame.cc
  src/HcalLaserDigi.cc
  src/HFDataFrame.cc
  src/HcalQIESample.cc
  src/QIE11DataFrame.cc
  src/HcalTTPDigi.cc
  src/CastorTriggerPrimitiveDigi.cc
  src/HcalUMNioDigi.cc
  src/QIE10DataFrame.cc
  src/HcalCalibDataFrame.cc
  src/HcalTriggerPrimitiveDigi.cc
  src/HcalUnpackerReport.cc
  src/HcalHistogramDigi.cc
  src/CastorDataFrame.cc
  src/ZDCDataFrame.cc
  src/HOTriggerPrimitiveDigi.cc
  src/HcalTriggerPrimitiveSample.cc
  src/HBHEDataFrame.cc
  ${CMAKE_BINARY_DIR}/DataFormatsHcalDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHcalDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHcalDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHcalDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHcalDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHcalDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHcalDigi PUBLIC /usr/include/boost/regex/)

