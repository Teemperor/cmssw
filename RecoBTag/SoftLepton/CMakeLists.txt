add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoBTagSoftLepton OBJECT 
  src/LeptonTaggerByPt.cc
  src/LeptonTaggerByIP.cc
  src/MuonTagger.cc
  src/ElectronTagger.cc
  src/LeptonSelector.cc
  src/MuonTaggerNoIP.cc
  src/LeptonTaggerDistance.cc
  src/MuonTaggerNoIPMLP.cc
)

target_include_directories(RecoBTagSoftLepton PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoBTagSoftLepton PUBLIC /usr/include/python2.7/)
target_include_directories(RecoBTagSoftLepton PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoBTagSoftLepton PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoBTagSoftLepton PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoBTagSoftLepton PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoBTagSoftLepton PUBLIC /usr/include/boost/)
target_include_directories(RecoBTagSoftLepton PUBLIC /usr/include/boost/python/)
target_include_directories(RecoBTagSoftLepton PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoBTagSoftLepton PUBLIC /usr/include/root/)
target_include_directories(RecoBTagSoftLepton PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoBTagSoftLepton PUBLIC /usr/include/boost/regex/)

