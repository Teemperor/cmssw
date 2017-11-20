add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FireworksEvesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Fireworks/Eve/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FireworksEvesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Fireworks/Eve/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Fireworks/Eve/src/classes.h /home/teemperor/cms/cmssw/Fireworks/Eve/src/classes_def.xml
  COMMENT "Generating ROOT dict FireworksEvesrcclassesh")

add_library(FireworksEve OBJECT 
  src/EveService.cc
  ${CMAKE_BINARY_DIR}/FireworksEvesrcclassesh_rflx.cpp
)

target_include_directories(FireworksEve PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksEve PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksEve PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksEve PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(FireworksEve PUBLIC /usr/include/root/)
target_include_directories(FireworksEve PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksEve PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksEve PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksEve PUBLIC /usr/include/boost/)
target_include_directories(FireworksEve PUBLIC /usr/include/boost/regex/)

