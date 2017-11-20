add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FWCoreMessageLoggersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/FWCore/MessageLogger/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FWCoreMessageLoggersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/FWCore/MessageLogger/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/FWCore/MessageLogger/src/classes.h /home/teemperor/cms/cmssw/FWCore/MessageLogger/src/classes_def.xml
  COMMENT "Generating ROOT dict FWCoreMessageLoggersrcclassesh")

add_library(FWCoreMessageLogger OBJECT 
  src/ErrorObj.cc
  src/MessageDrop.cc
  src/ELstring.cc
  src/MessageLogger.cc
  src/MessageLoggerQ.cc
  src/ELseverityLevel.cc
  src/ELmap.cc
  src/SilentMLscribe.cc
  src/ELextendedID.cc
  src/ExceptionMessages.cc
  src/MessageSender.cc
  src/AbstractMLscribe.cc
  src/JobReport.cc
  ${CMAKE_BINARY_DIR}/FWCoreMessageLoggersrcclassesh_rflx.cpp
)

target_include_directories(FWCoreMessageLogger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreMessageLogger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreMessageLogger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreMessageLogger PUBLIC /usr/include/boost/)
target_include_directories(FWCoreMessageLogger PUBLIC /usr/include/root/)
target_include_directories(FWCoreMessageLogger PUBLIC /usr/include/boost/regex/)

