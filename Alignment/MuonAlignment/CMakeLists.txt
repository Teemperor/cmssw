add_subdirectory(test)
add_subdirectory(plugins)
add_library(AlignmentMuonAlignment OBJECT 
  src/AlignableCSCRing.cc
  src/MuonAlignmentInputDB.cc
  src/MuonAlignmentOutputXML.cc
  src/MuonAlignmentInputSurveyDB.cc
  src/AlignableDTSuperLayer.cc
  src/AlignableDTChamber.cc
  src/AlignableCSCEndcap.cc
  src/AlignableDTWheel.cc
  src/MuonAlignmentInputXML.cc
  src/AlignableDTStation.cc
  src/AlignableMuon.cc
  src/AlignableCSCChamber.cc
  src/MuonAlignmentInputMethod.cc
  src/MuonAlignment.cc
  src/MuonScenarioBuilder.cc
  src/AlignableCSCStation.cc
  src/AlignableDTBarrel.cc
)

target_include_directories(AlignmentMuonAlignment PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentMuonAlignment PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentMuonAlignment PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentMuonAlignment PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentMuonAlignment PUBLIC /usr/include/boost/)
target_include_directories(AlignmentMuonAlignment PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentMuonAlignment PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentMuonAlignment PUBLIC /usr/include/root/)
target_include_directories(AlignmentMuonAlignment PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentMuonAlignment PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentMuonAlignment PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentMuonAlignment PUBLIC /usr/include/boost/regex/)

