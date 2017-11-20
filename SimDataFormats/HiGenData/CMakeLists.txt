add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsHiGenDatasrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/HiGenData/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsHiGenDatasrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/HiGenData/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/HiGenData/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/HiGenData/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsHiGenDatasrcclassesh")

add_library(SimDataFormatsHiGenData OBJECT 
  src/GenHIEvent.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsHiGenDatasrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsHiGenData PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsHiGenData PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsHiGenData PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsHiGenData PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsHiGenData PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsHiGenData PUBLIC /usr/include/boost/regex/)

