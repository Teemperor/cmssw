add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoMuonMuonIdentificationsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoMuon/MuonIdentification/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoMuonMuonIdentificationsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoMuon/MuonIdentification/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoMuon/MuonIdentification/src/classes.h /home/teemperor/cms/cmssw/RecoMuon/MuonIdentification/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoMuonMuonIdentificationsrcclassesh")

add_library(RecoMuonMuonIdentification OBJECT 
  src/MuonIdTruthInfo.cc
  src/MuonCosmicsId.cc
  src/MuonTimingFiller.cc
  src/CSCTimingExtractor.cc
  src/MuonMesh.cc
  src/MuonCaloCompatibility.cc
  src/MuonShowerInformationFiller.cc
  src/MuonHOAcceptance.cc
  src/MuonCosmicCompatibilityFiller.cc
  src/DTTimingExtractor.cc
  src/MuonKinkFinder.cc
  ${CMAKE_BINARY_DIR}/RecoMuonMuonIdentificationsrcclassesh_rflx.cpp
)

target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/include/eigen3/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/include/root/)
target_include_directories(RecoMuonMuonIdentification PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoMuonMuonIdentification PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonMuonIdentification PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoMuonMuonIdentification PUBLIC /usr/include/boost/regex/)

