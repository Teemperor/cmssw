add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsMuonRecosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/MuonReco/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsMuonRecosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/MuonReco/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/MuonReco/src/classes.h /home/teemperor/cms/cmssw/DataFormats/MuonReco/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsMuonRecosrcclassesh")

add_library(DataFormatsMuonReco OBJECT 
  src/ME0Muon.cc
  src/MuonCocktails.cc
  src/CaloMuon.cc
  src/DYTInfo.cc
  src/MuonSelectors.cc
  src/Muon.cc
  src/MuonChamberMatch.cc
  src/EmulatedME0Segment.cc
  src/MuonTimeExtra.cc
  ${CMAKE_BINARY_DIR}/DataFormatsMuonRecosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsMuonReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsMuonReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsMuonReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsMuonReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsMuonReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsMuonReco PUBLIC /usr/include/boost/regex/)

