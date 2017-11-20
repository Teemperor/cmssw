add_subdirectory(test)
add_subdirectory(plugins)
add_library(AlignmentMuonAlignmentAlgorithms OBJECT 
  src/MuonDT2ChamberResidual.cc
  src/MuonResidualsPositionFitter.cc
  src/MuonResidualsBfieldAngleFitter.cc
  src/MuonResiduals6DOFFitter.cc
  src/DTMuonLocalAlignment.cc
  src/MuonTrackCSCChamberResidual.cc
  src/MuonResidualsFromTrack.cc
  src/MuonTrackDT13ChamberResidual.cc
  src/MuonCSCChamberResidual.cc
  src/DTMuonMillepede.cc
  src/MuonHitsChamberResidual.cc
  src/MuonDT13ChamberResidual.cc
  src/DTMuonSLToSL.cc
  src/MuonResiduals5DOFFitter.cc
  src/ReadPGInfo.cc
  src/MuonResiduals1DOFFitter.cc
  src/MuonResidualsFitter.cc
  src/MuonTrackDT2ChamberResidual.cc
  src/MuonChamberResidual.cc
  src/SegmentToTrackAssociator.cc
  src/MuonResidualsAngleFitter.cc
  src/MuonResiduals6DOFrphiFitter.cc
)

target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /usr/include/boost/)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /usr/include/root/)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentMuonAlignmentAlgorithms PUBLIC /usr/include/boost/regex/)

