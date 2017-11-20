add_library(HeavyFlavorAnalysisOnia2MuMu OBJECT 
  src/OniaAddV0TracksProducer.cc
  src/OniaPhotonConversionProducer.cc
  src/Onia2MuMuPAT.cc
  src/OniaVtxReProducer.cc
)

target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /usr/include/python2.7/)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /usr/include/boost/serialization/)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /usr/include/boost/)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /usr/include/boost/python/)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /usr/include/root/)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HeavyFlavorAnalysisOnia2MuMu PUBLIC /usr/include/boost/regex/)

