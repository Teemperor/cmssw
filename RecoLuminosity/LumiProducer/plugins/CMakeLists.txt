add_library(LumiServicesPlugins OBJECT 
  Module.cc
)

target_include_directories(LumiServicesPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(LumiServicesPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(LumiServicesPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(LumiServicesPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(LumiServicesPlugins PUBLIC /usr/include/root/)
target_include_directories(LumiServicesPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(LumiServicesPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(LumiServicesPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(LumiServicesPlugins PUBLIC /usr/include/boost/)
target_include_directories(LumiServicesPlugins PUBLIC /usr/include/boost/regex/)

add_library(RecoLuminosityLumiCalculator OBJECT 
  LumiCalculator.cc
)

target_include_directories(RecoLuminosityLumiCalculator PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /usr/include/boost/)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /usr/include/root/)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoLuminosityLumiCalculator PUBLIC /usr/include/boost/regex/)

add_library(HLTConfDummy2DB OBJECT 
  HLTConfDummy2DB.cc
)

target_include_directories(HLTConfDummy2DB PUBLIC /usr/include/boost/python/)
target_include_directories(HLTConfDummy2DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTConfDummy2DB PUBLIC /usr/include/python2.7/)
target_include_directories(HLTConfDummy2DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(HLTConfDummy2DB PUBLIC /usr/include/root/)
target_include_directories(HLTConfDummy2DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTConfDummy2DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTConfDummy2DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTConfDummy2DB PUBLIC /usr/include/boost/)
target_include_directories(HLTConfDummy2DB PUBLIC /usr/include/boost/regex/)

add_library(HLTConf2DB OBJECT 
  HLTConf2DB.cc
)

target_include_directories(HLTConf2DB PUBLIC /usr/include/boost/python/)
target_include_directories(HLTConf2DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTConf2DB PUBLIC /usr/include/python2.7/)
target_include_directories(HLTConf2DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(HLTConf2DB PUBLIC /usr/include/root/)
target_include_directories(HLTConf2DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTConf2DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTConf2DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTConf2DB PUBLIC /usr/include/boost/)
target_include_directories(HLTConf2DB PUBLIC /usr/include/boost/regex/)

add_library(HLTDummy2DB OBJECT 
  HLTDummy2DB.cc
)

target_include_directories(HLTDummy2DB PUBLIC /usr/include/boost/python/)
target_include_directories(HLTDummy2DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTDummy2DB PUBLIC /usr/include/python2.7/)
target_include_directories(HLTDummy2DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(HLTDummy2DB PUBLIC /usr/include/root/)
target_include_directories(HLTDummy2DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTDummy2DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTDummy2DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTDummy2DB PUBLIC /usr/include/boost/)
target_include_directories(HLTDummy2DB PUBLIC /usr/include/boost/regex/)

add_library(HLTV32DB OBJECT 
  HLTV32DB.cc
)

target_include_directories(HLTV32DB PUBLIC /usr/include/boost/python/)
target_include_directories(HLTV32DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTV32DB PUBLIC /usr/include/python2.7/)
target_include_directories(HLTV32DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(HLTV32DB PUBLIC /usr/include/root/)
target_include_directories(HLTV32DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTV32DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTV32DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTV32DB PUBLIC /usr/include/boost/)
target_include_directories(HLTV32DB PUBLIC /usr/include/boost/regex/)

add_library(LumiDummy2DB OBJECT 
  LumiDummy2DB.cc
)

target_include_directories(LumiDummy2DB PUBLIC /usr/include/boost/python/)
target_include_directories(LumiDummy2DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(LumiDummy2DB PUBLIC /usr/include/python2.7/)
target_include_directories(LumiDummy2DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(LumiDummy2DB PUBLIC /usr/include/root/)
target_include_directories(LumiDummy2DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(LumiDummy2DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(LumiDummy2DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(LumiDummy2DB PUBLIC /usr/include/boost/)
target_include_directories(LumiDummy2DB PUBLIC /usr/include/boost/regex/)

add_library(Lumi2DB OBJECT 
  Lumi2DB.cc
)

target_include_directories(Lumi2DB PUBLIC /usr/include/boost/python/)
target_include_directories(Lumi2DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Lumi2DB PUBLIC /usr/include/python2.7/)
target_include_directories(Lumi2DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(Lumi2DB PUBLIC /usr/include/root/)
target_include_directories(Lumi2DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Lumi2DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Lumi2DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(Lumi2DB PUBLIC /usr/include/boost/)
target_include_directories(Lumi2DB PUBLIC /usr/include/boost/regex/)

add_library(CMSRunSummaryDummy2DB OBJECT 
  CMSRunSummaryDummy2DB.cc
)

target_include_directories(CMSRunSummaryDummy2DB PUBLIC /usr/include/boost/python/)
target_include_directories(CMSRunSummaryDummy2DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CMSRunSummaryDummy2DB PUBLIC /usr/include/python2.7/)
target_include_directories(CMSRunSummaryDummy2DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CMSRunSummaryDummy2DB PUBLIC /usr/include/root/)
target_include_directories(CMSRunSummaryDummy2DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CMSRunSummaryDummy2DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CMSRunSummaryDummy2DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CMSRunSummaryDummy2DB PUBLIC /usr/include/boost/)
target_include_directories(CMSRunSummaryDummy2DB PUBLIC /usr/include/boost/regex/)

add_library(CMSRunSummary2DB OBJECT 
  CMSRunSummary2DB.cc
)

target_include_directories(CMSRunSummary2DB PUBLIC /usr/include/boost/python/)
target_include_directories(CMSRunSummary2DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CMSRunSummary2DB PUBLIC /usr/include/python2.7/)
target_include_directories(CMSRunSummary2DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CMSRunSummary2DB PUBLIC /usr/include/root/)
target_include_directories(CMSRunSummary2DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CMSRunSummary2DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CMSRunSummary2DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CMSRunSummary2DB PUBLIC /usr/include/boost/)
target_include_directories(CMSRunSummary2DB PUBLIC /usr/include/boost/regex/)

add_library(TRGDummy2DB OBJECT 
  TRGDummy2DB.cc
)

target_include_directories(TRGDummy2DB PUBLIC /usr/include/boost/python/)
target_include_directories(TRGDummy2DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TRGDummy2DB PUBLIC /usr/include/python2.7/)
target_include_directories(TRGDummy2DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(TRGDummy2DB PUBLIC /usr/include/root/)
target_include_directories(TRGDummy2DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TRGDummy2DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TRGDummy2DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TRGDummy2DB PUBLIC /usr/include/boost/)
target_include_directories(TRGDummy2DB PUBLIC /usr/include/boost/regex/)

add_library(TRGScalers2DB OBJECT 
  TRGScalers2DB.cc
)

target_include_directories(TRGScalers2DB PUBLIC /usr/include/boost/python/)
target_include_directories(TRGScalers2DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TRGScalers2DB PUBLIC /usr/include/python2.7/)
target_include_directories(TRGScalers2DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(TRGScalers2DB PUBLIC /usr/include/root/)
target_include_directories(TRGScalers2DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TRGScalers2DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TRGScalers2DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TRGScalers2DB PUBLIC /usr/include/boost/)
target_include_directories(TRGScalers2DB PUBLIC /usr/include/boost/regex/)

add_library(TRGWBM2DB OBJECT 
  TRGWBM2DB.cc
)

target_include_directories(TRGWBM2DB PUBLIC /usr/include/boost/python/)
target_include_directories(TRGWBM2DB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TRGWBM2DB PUBLIC /usr/include/python2.7/)
target_include_directories(TRGWBM2DB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(TRGWBM2DB PUBLIC /usr/include/root/)
target_include_directories(TRGWBM2DB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TRGWBM2DB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TRGWBM2DB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TRGWBM2DB PUBLIC /usr/include/boost/)
target_include_directories(TRGWBM2DB PUBLIC /usr/include/boost/regex/)

add_library(LumiProducer OBJECT 
  LumiProducer.cc
)

target_include_directories(LumiProducer PUBLIC /usr/include/boost/python/)
target_include_directories(LumiProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(LumiProducer PUBLIC /usr/include/python2.7/)
target_include_directories(LumiProducer PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(LumiProducer PUBLIC /usr/include/root/)
target_include_directories(LumiProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(LumiProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(LumiProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(LumiProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(LumiProducer PUBLIC /usr/include/boost/)
target_include_directories(LumiProducer PUBLIC /usr/include/boost/regex/)

add_library(BunchSpacingProducer OBJECT 
  BunchSpacingProducer.cc
)

target_include_directories(BunchSpacingProducer PUBLIC /usr/include/boost/python/)
target_include_directories(BunchSpacingProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(BunchSpacingProducer PUBLIC /usr/include/python2.7/)
target_include_directories(BunchSpacingProducer PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(BunchSpacingProducer PUBLIC /usr/include/root/)
target_include_directories(BunchSpacingProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(BunchSpacingProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(BunchSpacingProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(BunchSpacingProducer PUBLIC /usr/include/boost/)
target_include_directories(BunchSpacingProducer PUBLIC /usr/include/boost/regex/)

add_library(ExpressLumiProducer OBJECT 
  ExpressLumiProducer.cc
)

target_include_directories(ExpressLumiProducer PUBLIC /usr/include/boost/python/)
target_include_directories(ExpressLumiProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ExpressLumiProducer PUBLIC /usr/include/python2.7/)
target_include_directories(ExpressLumiProducer PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(ExpressLumiProducer PUBLIC /usr/include/root/)
target_include_directories(ExpressLumiProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ExpressLumiProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ExpressLumiProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(ExpressLumiProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(ExpressLumiProducer PUBLIC /usr/include/boost/)
target_include_directories(ExpressLumiProducer PUBLIC /usr/include/boost/regex/)

add_library(DIPLumiProducer OBJECT 
  DIPLumiProducer.cc
)

target_include_directories(DIPLumiProducer PUBLIC /usr/include/boost/python/)
target_include_directories(DIPLumiProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DIPLumiProducer PUBLIC /usr/include/python2.7/)
target_include_directories(DIPLumiProducer PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DIPLumiProducer PUBLIC /usr/include/root/)
target_include_directories(DIPLumiProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DIPLumiProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DIPLumiProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DIPLumiProducer PUBLIC /usr/include/boost/)
target_include_directories(DIPLumiProducer PUBLIC /usr/include/boost/regex/)

add_library(LumiCorrectionSource OBJECT 
  LumiCorrectionSource.cc
)

target_include_directories(LumiCorrectionSource PUBLIC /usr/include/boost/python/)
target_include_directories(LumiCorrectionSource PUBLIC /usr/include/boost/filesystem/)
target_include_directories(LumiCorrectionSource PUBLIC /usr/include/python2.7/)
target_include_directories(LumiCorrectionSource PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(LumiCorrectionSource PUBLIC /usr/include/root/)
target_include_directories(LumiCorrectionSource PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(LumiCorrectionSource PUBLIC /home/teemperor/cms/md5/)
target_include_directories(LumiCorrectionSource PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(LumiCorrectionSource PUBLIC /usr/include/boost/)
target_include_directories(LumiCorrectionSource PUBLIC /usr/include/boost/regex/)

add_library(RecoLuminosityLumiProducerfPoly OBJECT 
  fPoly.cc
)

target_include_directories(RecoLuminosityLumiProducerfPoly PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLuminosityLumiProducerfPoly PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLuminosityLumiProducerfPoly PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLuminosityLumiProducerfPoly PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(RecoLuminosityLumiProducerfPoly PUBLIC /usr/include/root/)
target_include_directories(RecoLuminosityLumiProducerfPoly PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLuminosityLumiProducerfPoly PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLuminosityLumiProducerfPoly PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoLuminosityLumiProducerfPoly PUBLIC /usr/include/boost/)
target_include_directories(RecoLuminosityLumiProducerfPoly PUBLIC /usr/include/boost/regex/)

