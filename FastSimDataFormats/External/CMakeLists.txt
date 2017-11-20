add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FastSimDataFormatsExternalsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/FastSimDataFormats/External/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FastSimDataFormatsExternalsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/FastSimDataFormats/External/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/FastSimDataFormats/External/src/classes.h /home/teemperor/cms/cmssw/FastSimDataFormats/External/src/classes_def.xml
  COMMENT "Generating ROOT dict FastSimDataFormatsExternalsrcclassesh")

add_library(FastSimDataFormatsExternal OBJECT 
  src/FastL1BitInfo.cc
  src/FastTrackerCluster.cc
  ${CMAKE_BINARY_DIR}/FastSimDataFormatsExternalsrcclassesh_rflx.cpp
)

target_include_directories(FastSimDataFormatsExternal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimDataFormatsExternal PUBLIC /usr/include/root/)
target_include_directories(FastSimDataFormatsExternal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimDataFormatsExternal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimDataFormatsExternal PUBLIC /usr/include/boost/)
target_include_directories(FastSimDataFormatsExternal PUBLIC /usr/include/boost/regex/)

