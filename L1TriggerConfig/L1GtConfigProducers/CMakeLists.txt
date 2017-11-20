add_library(L1TriggerConfigL1GtConfigProducers OBJECT 
  src/L1GtTriggerMaskAlgoTrigConfigOnlineProd.cc
  src/L1GtTriggerMaskVetoTechTrigTrivialProducer.cc
  src/L1GtPsbSetupTrivialProducer.cc
  src/SealModule.cc
  src/L1GtTriggerMaskAlgoTrigTrivialProducer.cc
  src/L1GtTriggerMaskVetoAlgoTrigTrivialProducer.cc
  src/L1GtStableParametersTester.cc
  src/L1GtPrescaleFactorsAndMasksTester.cc
  src/L1GtVhdlDefinitions.cc
  src/L1GtTriggerMenuXmlProducer.cc
  src/L1GtTscObjectKeysOnlineProd.cc
  src/L1GtVhdlWriterBitManager.cc
  src/L1GtTriggerMenuXmlParser.cc
  src/L1GtVhdlWriter.cc
  src/L1GtPrescaleFactorsTechTrigConfigOnlineProd.cc
  src/L1GtStableParametersTrivialProducer.cc
  src/L1GtVmeWriterCore.cc
  src/L1GtPsbSetupConfigOnlineProd.cc
  src/L1GtPsbSetupTester.cc
  src/L1GtParametersTester.cc
  src/L1GtTriggerMenuConfigOnlineProd.cc
  src/L1GtTriggerMaskTechTrigTrivialProducer.cc
  src/L1GtPrescaleFactorsTechTrigTrivialProducer.cc
  src/L1GtVhdlTemplateFile.cc
  src/L1GtVhdlWriterCore.cc
  src/L1GtTriggerMaskTechTrigConfigOnlineProd.cc
  src/L1GtXmlParserTags.cc
  src/L1GtRsObjectKeysOnlineProd.cc
  src/L1GtTriggerMenuTester.cc
  src/L1GtParametersTrivialProducer.cc
  src/L1GtPrescaleFactorsAlgoTrigConfigOnlineProd.cc
  src/L1GtBoardMapsTester.cc
  src/L1GtBoardMapsTrivialProducer.cc
  src/L1GtTriggerMaskVetoTechTrigConfigOnlineProd.cc
  src/L1GtParametersConfigOnlineProd.cc
  src/L1GtPrescaleFactorsAlgoTrigTrivialProducer.cc
)

target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigL1GtConfigProducers PUBLIC /usr/include/boost/regex/)

