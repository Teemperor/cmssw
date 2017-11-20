add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondToolsBTausrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondTools/BTau/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondToolsBTausrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondTools/BTau/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondTools/BTau/src/classes.h /home/teemperor/cms/cmssw/CondTools/BTau/src/classes_def.xml
  COMMENT "Generating ROOT dict CondToolsBTausrcclassesh")

add_library(CondToolsBTau OBJECT 
  src/BTagCalibrationReader.cc
  ${CMAKE_BINARY_DIR}/CondToolsBTausrcclassesh_rflx.cpp
)

target_include_directories(CondToolsBTau PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsBTau PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CondToolsBTau PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsBTau PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsBTau PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CondToolsBTau PUBLIC /usr/include/root/)
target_include_directories(CondToolsBTau PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsBTau PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsBTau PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsBTau PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CondToolsBTau PUBLIC /usr/include/boost/)
target_include_directories(CondToolsBTau PUBLIC /usr/include/boost/regex/)

