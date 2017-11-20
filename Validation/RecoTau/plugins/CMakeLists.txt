add_library(ValidationRecoTauPlugin OBJECT 
  ZllArbitrator.cc
  Selectors.cc
  TrackFromPVSelector.cc
  dqmAuxFunctions.cc
  DQMHistPlotter.cc
  CollectionFromZLegProducer.cc
  DQMFileLoader.cc
  DQMHistNormalizer.cc
  ObjectViewCleaner.cc
  MuonFromPVSelector.cc
  DQMHistEffProducer.cc
  DQMSimpleFileSaver.cc
  ElectronFromPVSelector.cc
  IsoTracks.cc
  PVSorterBySumP.cc
)

target_include_directories(ValidationRecoTauPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ValidationRecoTauPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationRecoTauPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ValidationRecoTauPlugin PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationRecoTauPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationRecoTauPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationRecoTauPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ValidationRecoTauPlugin PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(ValidationRecoTauPlugin PUBLIC /usr/include/boost/)
target_include_directories(ValidationRecoTauPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationRecoTauPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationRecoTauPlugin PUBLIC /usr/include/root/)
target_include_directories(ValidationRecoTauPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(ValidationRecoTauPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationRecoTauPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(ValidationRecoTauPlugin PUBLIC /usr/include/boost/regex/)

