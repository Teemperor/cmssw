add_library(DQMPhysics OBJECT 
  src/ExoticaDQM.cc
  src/B2GDQM.cc
  src/EwkTauDQM.cc
  src/CentralityDQM.cc
  src/QcdHighPtDQM.cc
  src/plugins.cc
  src/BPhysicsOniaDQM.cc
  src/EwkDQM.cc
  src/HiggsDQM.cc
  src/EwkElecDQM.cc
  src/EwkMuDQM.cc
  src/TopDiLeptonDQM.cc
  src/EwkMuLumiMonitorDQM.cc
  src/TopDiLeptonOfflineDQM.cc
  src/QcdPhotonsDQM.cc
  src/SingleTopTChannelLeptonDQM_miniAOD.cc
  src/TopSingleLeptonDQM_miniAOD.cc
  src/CentralitypADQM.cc
  src/TopSingleLeptonDQM.cc
  src/TopDQMHelpers.cc
  src/QcdLowPtDQM.cc
  src/QcdUeDQM.cc
  src/SingleTopTChannelLeptonDQM.cc
)

target_include_directories(DQMPhysics PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMPhysics PUBLIC /usr/include/python2.7/)
target_include_directories(DQMPhysics PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMPhysics PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMPhysics PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMPhysics PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMPhysics PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMPhysics PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMPhysics PUBLIC /usr/include/boost/)
target_include_directories(DQMPhysics PUBLIC /usr/include/eigen3/)
target_include_directories(DQMPhysics PUBLIC /usr/include/boost/python/)
target_include_directories(DQMPhysics PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMPhysics PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(DQMPhysics PUBLIC /usr/include/root/)
target_include_directories(DQMPhysics PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMPhysics PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMPhysics PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMPhysics PUBLIC /usr/include/boost/regex/)

