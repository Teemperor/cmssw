add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsEgammaCandidatessrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/EgammaCandidates/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsEgammaCandidatessrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/EgammaCandidates/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/EgammaCandidates/src/classes.h /home/teemperor/cms/cmssw/DataFormats/EgammaCandidates/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsEgammaCandidatessrcclassesh")

add_library(DataFormatsEgammaCandidates OBJECT 
  src/GsfElectron.cc
  src/SiStripElectron.cc
  src/Conversion.cc
  src/Photon.cc
  src/Electron.cc
  src/GsfElectronCore.cc
  ${CMAKE_BINARY_DIR}/DataFormatsEgammaCandidatessrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsEgammaCandidates PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsEgammaCandidates PUBLIC /usr/include/root/)
target_include_directories(DataFormatsEgammaCandidates PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsEgammaCandidates PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsEgammaCandidates PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsEgammaCandidates PUBLIC /usr/include/boost/regex/)

