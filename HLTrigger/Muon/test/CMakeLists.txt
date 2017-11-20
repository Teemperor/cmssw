add_library(HLTMuonRateAnalyzer OBJECT 
  HLTMuonRateAnalyzer.cc
)

target_include_directories(HLTMuonRateAnalyzer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /usr/include/root/)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTMuonRateAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(HLTMuonRateAnalyzerWithWeight OBJECT 
  HLTMuonRateAnalyzerWithWeight.cc
)

target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /usr/include/python2.7/)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /usr/include/boost/)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /usr/include/boost/python/)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /usr/include/root/)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTMuonRateAnalyzerWithWeight PUBLIC /usr/include/boost/regex/)

add_library(MuEnrichType1Filter OBJECT 
  MuEnrichType1Filter.cc
)

target_include_directories(MuEnrichType1Filter PUBLIC /usr/include/boost/iostreams/)
target_include_directories(MuEnrichType1Filter PUBLIC /usr/include/python2.7/)
target_include_directories(MuEnrichType1Filter PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(MuEnrichType1Filter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MuEnrichType1Filter PUBLIC /usr/include/boost/serialization/)
target_include_directories(MuEnrichType1Filter PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(MuEnrichType1Filter PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(MuEnrichType1Filter PUBLIC /usr/include/boost/)
target_include_directories(MuEnrichType1Filter PUBLIC /usr/include/boost/python/)
target_include_directories(MuEnrichType1Filter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MuEnrichType1Filter PUBLIC /usr/include/root/)
target_include_directories(MuEnrichType1Filter PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(MuEnrichType1Filter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MuEnrichType1Filter PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(MuEnrichType1Filter PUBLIC /usr/include/boost/regex/)

add_library(MuEnrichRenormalizer OBJECT 
  MuEnrichRenormalizer.cc
)

target_include_directories(MuEnrichRenormalizer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(MuEnrichRenormalizer PUBLIC /usr/include/python2.7/)
target_include_directories(MuEnrichRenormalizer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(MuEnrichRenormalizer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MuEnrichRenormalizer PUBLIC /usr/include/boost/serialization/)
target_include_directories(MuEnrichRenormalizer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(MuEnrichRenormalizer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(MuEnrichRenormalizer PUBLIC /usr/include/boost/)
target_include_directories(MuEnrichRenormalizer PUBLIC /usr/include/boost/python/)
target_include_directories(MuEnrichRenormalizer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MuEnrichRenormalizer PUBLIC /usr/include/root/)
target_include_directories(MuEnrichRenormalizer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(MuEnrichRenormalizer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MuEnrichRenormalizer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(MuEnrichRenormalizer PUBLIC /usr/include/boost/regex/)

add_library(HLTMuonTurnOnAnalyzer OBJECT 
  HLTMuonTurnOnAnalyzer.cc
)

target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /usr/include/root/)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTMuonTurnOnAnalyzer PUBLIC /usr/include/boost/regex/)

