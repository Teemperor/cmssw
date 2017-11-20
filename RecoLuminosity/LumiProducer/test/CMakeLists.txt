add_library(PCCNTupler OBJECT 
  analysis/plugins/PCCNTupler.cc
)

target_include_directories(PCCNTupler PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PCCNTupler PUBLIC /usr/include/python2.7/)
target_include_directories(PCCNTupler PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(PCCNTupler PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PCCNTupler PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PCCNTupler PUBLIC /usr/include/boost/serialization/)
target_include_directories(PCCNTupler PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PCCNTupler PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(PCCNTupler PUBLIC /usr/include/boost/)
target_include_directories(PCCNTupler PUBLIC /usr/include/boost/python/)
target_include_directories(PCCNTupler PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PCCNTupler PUBLIC /usr/include/root/)
target_include_directories(PCCNTupler PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(PCCNTupler PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PCCNTupler PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(PCCNTupler PUBLIC /usr/include/boost/regex/)

add_library(TestLumiProd OBJECT 
  TestIntegration.cpp
)

target_include_directories(TestLumiProd PUBLIC /usr/include/boost/python/)
target_include_directories(TestLumiProd PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLumiProd PUBLIC /usr/include/python2.7/)
target_include_directories(TestLumiProd PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(TestLumiProd PUBLIC /usr/include/root/)
target_include_directories(TestLumiProd PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLumiProd PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLumiProd PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestLumiProd PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TestLumiProd PUBLIC /usr/include/boost/)
target_include_directories(TestLumiProd PUBLIC /usr/include/boost/regex/)

add_library(testWrite2LumiDB OBJECT 
  testWrite2LumiDB.cpp
)

target_include_directories(testWrite2LumiDB PUBLIC /usr/include/boost/python/)
target_include_directories(testWrite2LumiDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testWrite2LumiDB PUBLIC /usr/include/python2.7/)
target_include_directories(testWrite2LumiDB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(testWrite2LumiDB PUBLIC /usr/include/root/)
target_include_directories(testWrite2LumiDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testWrite2LumiDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testWrite2LumiDB PUBLIC /usr/include/boost/serialization/)
target_include_directories(testWrite2LumiDB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testWrite2LumiDB PUBLIC /usr/include/boost/)
target_include_directories(testWrite2LumiDB PUBLIC /usr/include/boost/regex/)

add_library(testWriteHLTConf2LumiDB OBJECT 
  testWriteHLTConf2LumiDB.cpp
)

target_include_directories(testWriteHLTConf2LumiDB PUBLIC /usr/include/boost/python/)
target_include_directories(testWriteHLTConf2LumiDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testWriteHLTConf2LumiDB PUBLIC /usr/include/python2.7/)
target_include_directories(testWriteHLTConf2LumiDB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(testWriteHLTConf2LumiDB PUBLIC /usr/include/root/)
target_include_directories(testWriteHLTConf2LumiDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testWriteHLTConf2LumiDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testWriteHLTConf2LumiDB PUBLIC /usr/include/boost/serialization/)
target_include_directories(testWriteHLTConf2LumiDB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testWriteHLTConf2LumiDB PUBLIC /usr/include/boost/)
target_include_directories(testWriteHLTConf2LumiDB PUBLIC /usr/include/boost/regex/)

add_library(standaloneScanLumiRaw OBJECT 
  standaloneScanLumiRaw.cpp
)

target_include_directories(standaloneScanLumiRaw PUBLIC /usr/include/boost/python/)
target_include_directories(standaloneScanLumiRaw PUBLIC /usr/include/boost/filesystem/)
target_include_directories(standaloneScanLumiRaw PUBLIC /usr/include/python2.7/)
target_include_directories(standaloneScanLumiRaw PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(standaloneScanLumiRaw PUBLIC /usr/include/root/)
target_include_directories(standaloneScanLumiRaw PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(standaloneScanLumiRaw PUBLIC /home/teemperor/cms/md5/)
target_include_directories(standaloneScanLumiRaw PUBLIC /usr/include/boost/serialization/)
target_include_directories(standaloneScanLumiRaw PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(standaloneScanLumiRaw PUBLIC /usr/include/boost/)
target_include_directories(standaloneScanLumiRaw PUBLIC /usr/include/boost/regex/)

add_library(parseLSstate OBJECT 
  parseLSstate.cpp
)

target_include_directories(parseLSstate PUBLIC /usr/include/boost/python/)
target_include_directories(parseLSstate PUBLIC /usr/include/boost/filesystem/)
target_include_directories(parseLSstate PUBLIC /usr/include/python2.7/)
target_include_directories(parseLSstate PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(parseLSstate PUBLIC /usr/include/root/)
target_include_directories(parseLSstate PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(parseLSstate PUBLIC /home/teemperor/cms/md5/)
target_include_directories(parseLSstate PUBLIC /usr/include/boost/serialization/)
target_include_directories(parseLSstate PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(parseLSstate PUBLIC /usr/include/boost/)
target_include_directories(parseLSstate PUBLIC /usr/include/boost/regex/)

add_library(testBoostRegex OBJECT 
  testBoostRegex.cpp
)

target_include_directories(testBoostRegex PUBLIC /usr/include/boost/python/)
target_include_directories(testBoostRegex PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testBoostRegex PUBLIC /usr/include/python2.7/)
target_include_directories(testBoostRegex PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(testBoostRegex PUBLIC /usr/include/root/)
target_include_directories(testBoostRegex PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testBoostRegex PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testBoostRegex PUBLIC /usr/include/boost/serialization/)
target_include_directories(testBoostRegex PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testBoostRegex PUBLIC /usr/include/boost/)
target_include_directories(testBoostRegex PUBLIC /usr/include/boost/regex/)

add_library(populateDummy2LumiDB OBJECT 
  validation/populateDummy2LumiDB.cpp
)

target_include_directories(populateDummy2LumiDB PUBLIC /usr/include/boost/python/)
target_include_directories(populateDummy2LumiDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(populateDummy2LumiDB PUBLIC /usr/include/python2.7/)
target_include_directories(populateDummy2LumiDB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(populateDummy2LumiDB PUBLIC /usr/include/root/)
target_include_directories(populateDummy2LumiDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(populateDummy2LumiDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(populateDummy2LumiDB PUBLIC /usr/include/boost/serialization/)
target_include_directories(populateDummy2LumiDB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(populateDummy2LumiDB PUBLIC /usr/include/boost/)
target_include_directories(populateDummy2LumiDB PUBLIC /usr/include/boost/regex/)

add_library(cmmdLoadLumiDB OBJECT 
  cmmdLoadLumiDB.cpp
)

target_include_directories(cmmdLoadLumiDB PUBLIC /usr/include/boost/python/)
target_include_directories(cmmdLoadLumiDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmmdLoadLumiDB PUBLIC /usr/include/python2.7/)
target_include_directories(cmmdLoadLumiDB PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(cmmdLoadLumiDB PUBLIC /usr/include/root/)
target_include_directories(cmmdLoadLumiDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmmdLoadLumiDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmmdLoadLumiDB PUBLIC /usr/include/boost/program_options/)
target_include_directories(cmmdLoadLumiDB PUBLIC /usr/include/boost/serialization/)
target_include_directories(cmmdLoadLumiDB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(cmmdLoadLumiDB PUBLIC /usr/include/boost/)
target_include_directories(cmmdLoadLumiDB PUBLIC /usr/include/boost/regex/)

add_library(testBoostXML OBJECT 
  testBoostXML.cpp
)

target_include_directories(testBoostXML PUBLIC /usr/include/boost/python/)
target_include_directories(testBoostXML PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testBoostXML PUBLIC /usr/include/python2.7/)
target_include_directories(testBoostXML PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(testBoostXML PUBLIC /usr/include/root/)
target_include_directories(testBoostXML PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testBoostXML PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testBoostXML PUBLIC /usr/include/boost/serialization/)
target_include_directories(testBoostXML PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testBoostXML PUBLIC /usr/include/boost/)
target_include_directories(testBoostXML PUBLIC /usr/include/boost/regex/)

add_library(TestLumiProducer OBJECT 
  TestLumiProducer.cc
)

target_include_directories(TestLumiProducer PUBLIC /usr/include/boost/python/)
target_include_directories(TestLumiProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLumiProducer PUBLIC /usr/include/python2.7/)
target_include_directories(TestLumiProducer PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(TestLumiProducer PUBLIC /usr/include/root/)
target_include_directories(TestLumiProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLumiProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLumiProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestLumiProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TestLumiProducer PUBLIC /usr/include/boost/)
target_include_directories(TestLumiProducer PUBLIC /usr/include/boost/regex/)

add_library(TestExpressLumiProducer OBJECT 
  TestExpressLumiProducer.cc
)

target_include_directories(TestExpressLumiProducer PUBLIC /usr/include/boost/python/)
target_include_directories(TestExpressLumiProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestExpressLumiProducer PUBLIC /usr/include/python2.7/)
target_include_directories(TestExpressLumiProducer PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(TestExpressLumiProducer PUBLIC /usr/include/root/)
target_include_directories(TestExpressLumiProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestExpressLumiProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestExpressLumiProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestExpressLumiProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TestExpressLumiProducer PUBLIC /usr/include/boost/)
target_include_directories(TestExpressLumiProducer PUBLIC /usr/include/boost/regex/)

add_library(TestLumiCorrectionSource OBJECT 
  TestLumiCorrectionSource.cc
)

target_include_directories(TestLumiCorrectionSource PUBLIC /usr/include/boost/python/)
target_include_directories(TestLumiCorrectionSource PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLumiCorrectionSource PUBLIC /usr/include/python2.7/)
target_include_directories(TestLumiCorrectionSource PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(TestLumiCorrectionSource PUBLIC /usr/include/root/)
target_include_directories(TestLumiCorrectionSource PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLumiCorrectionSource PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLumiCorrectionSource PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestLumiCorrectionSource PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TestLumiCorrectionSource PUBLIC /usr/include/boost/)
target_include_directories(TestLumiCorrectionSource PUBLIC /usr/include/boost/regex/)

add_library(TestDIPLumiProducer OBJECT 
  TestDIPLumiProducer.cc
)

target_include_directories(TestDIPLumiProducer PUBLIC /usr/include/boost/python/)
target_include_directories(TestDIPLumiProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestDIPLumiProducer PUBLIC /usr/include/python2.7/)
target_include_directories(TestDIPLumiProducer PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(TestDIPLumiProducer PUBLIC /usr/include/root/)
target_include_directories(TestDIPLumiProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestDIPLumiProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestDIPLumiProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestDIPLumiProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TestDIPLumiProducer PUBLIC /usr/include/boost/)
target_include_directories(TestDIPLumiProducer PUBLIC /usr/include/boost/regex/)

add_library(testEvtLoop OBJECT 
  testEvtLoop.cc
)

target_include_directories(testEvtLoop PUBLIC /usr/include/boost/python/)
target_include_directories(testEvtLoop PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testEvtLoop PUBLIC /usr/include/python2.7/)
target_include_directories(testEvtLoop PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(testEvtLoop PUBLIC /usr/include/root/)
target_include_directories(testEvtLoop PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testEvtLoop PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testEvtLoop PUBLIC /usr/include/boost/serialization/)
target_include_directories(testEvtLoop PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testEvtLoop PUBLIC /usr/include/boost/)
target_include_directories(testEvtLoop PUBLIC /usr/include/boost/regex/)

add_library(testSiteService OBJECT 
  testSiteService.cc
)

target_include_directories(testSiteService PUBLIC /usr/include/boost/python/)
target_include_directories(testSiteService PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSiteService PUBLIC /usr/include/python2.7/)
target_include_directories(testSiteService PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(testSiteService PUBLIC /usr/include/root/)
target_include_directories(testSiteService PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSiteService PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSiteService PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSiteService PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testSiteService PUBLIC /usr/include/boost/)
target_include_directories(testSiteService PUBLIC /usr/include/boost/regex/)

add_library(genLumiRaw OBJECT 
  genLumiRaw.cc
)

target_include_directories(genLumiRaw PUBLIC /usr/include/boost/python/)
target_include_directories(genLumiRaw PUBLIC /usr/include/boost/filesystem/)
target_include_directories(genLumiRaw PUBLIC /usr/include/python2.7/)
target_include_directories(genLumiRaw PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(genLumiRaw PUBLIC /usr/include/root/)
target_include_directories(genLumiRaw PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(genLumiRaw PUBLIC /home/teemperor/cms/md5/)
target_include_directories(genLumiRaw PUBLIC /usr/include/boost/serialization/)
target_include_directories(genLumiRaw PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(genLumiRaw PUBLIC /usr/include/boost/)
target_include_directories(genLumiRaw PUBLIC /usr/include/boost/regex/)

