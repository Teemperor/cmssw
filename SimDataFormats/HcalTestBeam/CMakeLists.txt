add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsHcalTestBeamsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/HcalTestBeam/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsHcalTestBeamsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/HcalTestBeam/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/HcalTestBeam/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/HcalTestBeam/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsHcalTestBeamsrcclassesh")

add_library(SimDataFormatsHcalTestBeam OBJECT 
  src/HcalTestBeamNumbering.cc
  src/PHcalTB06Info.cc
  src/PHcalTB04Info.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsHcalTestBeamsrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsHcalTestBeam PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsHcalTestBeam PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsHcalTestBeam PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsHcalTestBeam PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsHcalTestBeam PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsHcalTestBeam PUBLIC /usr/include/boost/regex/)

