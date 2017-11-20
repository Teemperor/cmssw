add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsDQMObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/DQMObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsDQMObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/DQMObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/DQMObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/DQMObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsDQMObjectssrcclassesh")

add_library(CondFormatsDQMObjects OBJECT 
  src/T_EventSetup_DQMSummary.cc
  src/HDQMSummary.cc
  ${CMAKE_BINARY_DIR}/CondFormatsDQMObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsDQMObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsDQMObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsDQMObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsDQMObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsDQMObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsDQMObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsDQMObjects PUBLIC /usr/include/boost/regex/)

