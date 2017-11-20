add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsLuminositysrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Luminosity/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsLuminositysrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Luminosity/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Luminosity/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Luminosity/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsLuminositysrcclassesh")

add_library(DataFormatsLuminosity OBJECT 
  src/LumiSummary.cc
  src/LumiDetails.cc
  src/LumiInfoRunHeader.cc
  src/BeamCurrentInfo.cc
  src/LumiInfo.cc
  src/LumiSummaryRunHeader.cc
  ${CMAKE_BINARY_DIR}/DataFormatsLuminositysrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsLuminosity PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsLuminosity PUBLIC /usr/include/root/)
target_include_directories(DataFormatsLuminosity PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsLuminosity PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsLuminosity PUBLIC /usr/include/boost/serialization/)
target_include_directories(DataFormatsLuminosity PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsLuminosity PUBLIC /usr/include/boost/regex/)

