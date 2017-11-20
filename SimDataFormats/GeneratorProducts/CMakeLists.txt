add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsGeneratorProductssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/GeneratorProducts/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsGeneratorProductssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/GeneratorProducts/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/GeneratorProducts/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/GeneratorProducts/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsGeneratorProductssrcclassesh")

add_library(SimDataFormatsGeneratorProducts OBJECT 
  src/LHEEventProduct.cc
  src/LHEXMLStringProduct.cc
  src/GenEventInfoProduct.cc
  src/GenLumiInfoProduct.cc
  src/LHERunInfoProduct.cc
  src/GenLumiInfoHeader.cc
  src/GenFilterInfo.cc
  src/GenRunInfoProduct.cc
  src/HepMCProduct.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsGeneratorProductssrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsGeneratorProducts PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsGeneratorProducts PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsGeneratorProducts PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsGeneratorProducts PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsGeneratorProducts PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsGeneratorProducts PUBLIC /usr/include/boost/regex/)

