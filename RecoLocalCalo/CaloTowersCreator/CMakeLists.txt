add_library(RecoLocalCaloCaloTowersCreator OBJECT 
  src/CaloTowersReCreator.cc
  src/SealModule.cc
  src/HcalMaterials.cc
  src/CaloTowerCandidateCreator.cc
  src/CaloTowersCreationAlgo.cc
  src/CaloTowersMerger.cc
  src/CaloTowersCreator.cc
)

target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/include/eigen3/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/include/root/)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoLocalCaloCaloTowersCreator PUBLIC /usr/include/boost/regex/)

