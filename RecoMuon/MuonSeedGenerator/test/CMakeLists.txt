add_library(MCMuonSeedGenerator2 OBJECT 
  MCSeedGenerator/MCMuonSeedGenerator.cc
)

target_include_directories(MCMuonSeedGenerator2 PUBLIC /usr/include/boost/python/)
target_include_directories(MCMuonSeedGenerator2 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MCMuonSeedGenerator2 PUBLIC /usr/include/python2.7/)
target_include_directories(MCMuonSeedGenerator2 PUBLIC /usr/include/root/)
target_include_directories(MCMuonSeedGenerator2 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MCMuonSeedGenerator2 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MCMuonSeedGenerator2 PUBLIC /usr/include/boost/serialization/)
target_include_directories(MCMuonSeedGenerator2 PUBLIC /usr/include/boost/)
target_include_directories(MCMuonSeedGenerator2 PUBLIC /usr/include/boost/regex/)

add_library(MuonSeedParametrization OBJECT 
  MuonSeedPTAnalysis/SegSelector.cc
  MuonSeedPTAnalysis/MuonSeedParaFillHisto.cc
  MuonSeedPTAnalysis/MuonSeeddPhiScale.cc
  MuonSeedPTAnalysis/MuonSeedParametrization.cc
)

target_include_directories(MuonSeedParametrization PUBLIC /usr/include/boost/python/)
target_include_directories(MuonSeedParametrization PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MuonSeedParametrization PUBLIC /usr/include/python2.7/)
target_include_directories(MuonSeedParametrization PUBLIC /usr/include/root/)
target_include_directories(MuonSeedParametrization PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MuonSeedParametrization PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MuonSeedParametrization PUBLIC /usr/include/boost/serialization/)
target_include_directories(MuonSeedParametrization PUBLIC /usr/include/boost/)
target_include_directories(MuonSeedParametrization PUBLIC /usr/include/boost/regex/)

add_library(MuonSeedValidator OBJECT 
  MuonSeedPTAnalysis/SegSelector.cc
  MuonSeedPTAnalysis/MuonSeedValidator.cc
)

target_include_directories(MuonSeedValidator PUBLIC /usr/include/boost/python/)
target_include_directories(MuonSeedValidator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MuonSeedValidator PUBLIC /usr/include/python2.7/)
target_include_directories(MuonSeedValidator PUBLIC /usr/include/root/)
target_include_directories(MuonSeedValidator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MuonSeedValidator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MuonSeedValidator PUBLIC /usr/include/boost/serialization/)
target_include_directories(MuonSeedValidator PUBLIC /usr/include/boost/)
target_include_directories(MuonSeedValidator PUBLIC /usr/include/boost/regex/)

