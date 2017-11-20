add_library(HiJetAlgosPlugins OBJECT 
  HiFJGridEmptyAreaCalculator.cc
  VoronoiAlgorithm.cc
  plugins.cc
  VoronoiBackgroundProducer.cc
  UETableProducer.cc
  HiL1Subtractor.cc
  HiFJRhoProducer.cc
  bpmpd-2.11.f
)

target_include_directories(HiJetAlgosPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HiJetAlgosPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(HiJetAlgosPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HiJetAlgosPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HiJetAlgosPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(HiJetAlgosPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HiJetAlgosPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HiJetAlgosPlugins PUBLIC /usr/include/boost/)
target_include_directories(HiJetAlgosPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(HiJetAlgosPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HiJetAlgosPlugins PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(HiJetAlgosPlugins PUBLIC /usr/include/root/)
target_include_directories(HiJetAlgosPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HiJetAlgosPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HiJetAlgosPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HiJetAlgosPlugins PUBLIC /usr/include/boost/regex/)

