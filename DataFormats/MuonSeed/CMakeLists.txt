add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsMuonSeedsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/MuonSeed/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsMuonSeedsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/MuonSeed/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/MuonSeed/src/classes.h /home/teemperor/cms/cmssw/DataFormats/MuonSeed/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsMuonSeedsrcclassesh")

add_library(DataFormatsMuonSeed OBJECT 
  src/L2MuonTrajectorySeed.cc
  ${CMAKE_BINARY_DIR}/DataFormatsMuonSeedsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsMuonSeed PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsMuonSeed PUBLIC /usr/include/root/)
target_include_directories(DataFormatsMuonSeed PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsMuonSeed PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsMuonSeed PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsMuonSeed PUBLIC /usr/include/boost/regex/)

