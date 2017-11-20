add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsEcalCorrectionssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/EcalCorrections/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsEcalCorrectionssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/EcalCorrections/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/EcalCorrections/src/classes.h /home/teemperor/cms/cmssw/CondFormats/EcalCorrections/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsEcalCorrectionssrcclassesh")

add_library(CondFormatsEcalCorrections OBJECT 
  src/EcalShowerContainmentCorrections.cc
  src/EcalGlobalShowerContainmentCorrectionsVsEta.cc
  src/T_EventSetup_EcalGlobalShowerContainmentCorrectionsVsEta.cc
  src/T_EventSetup_EcalShowerContainmentCorrections.cc
  ${CMAKE_BINARY_DIR}/CondFormatsEcalCorrectionssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsEcalCorrections PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsEcalCorrections PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsEcalCorrections PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsEcalCorrections PUBLIC /usr/include/root/)
target_include_directories(CondFormatsEcalCorrections PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsEcalCorrections PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsEcalCorrections PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsEcalCorrections PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsEcalCorrections PUBLIC /usr/include/boost/regex/)

