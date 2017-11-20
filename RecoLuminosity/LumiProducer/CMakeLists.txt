add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoLuminosityLumiProducersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoLuminosity/LumiProducer/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoLuminosityLumiProducersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoLuminosity/LumiProducer/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoLuminosity/LumiProducer/src/classes.h /home/teemperor/cms/cmssw/RecoLuminosity/LumiProducer/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoLuminosityLumiProducersrcclassesh")

add_library(RecoLuminosityLumiProducer OBJECT 
  src/Exception.cc
  src/DBService.cc
  src/LumiCorrector.cc
  src/DBConfig.cc
  src/LumiCorrectionParam.cc
  src/RevisionDML.cc
  src/NormFunctor.cc
  src/ES_DIPLumiSummary.cc
  src/DIPLuminosityRcd.cc
  src/DataPipeFactory.cc
  src/ES_LumiCorrectionParam.cc
  src/idDealer.cc
  src/DIPLumiDetail.cc
  src/DIPLumiSummary.cc
  src/NormFunctorPluginFactory.cc
  src/ES_DIPLumiDetail.cc
  src/LumiCorrectionParamRcd.cc
  src/LumiNames.cc
  src/DataPipe.cc
  src/NormDML.cc
  ${CMAKE_BINARY_DIR}/RecoLuminosityLumiProducersrcclassesh_rflx.cpp
)

target_include_directories(RecoLuminosityLumiProducer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLuminosityLumiProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLuminosityLumiProducer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLuminosityLumiProducer PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(RecoLuminosityLumiProducer PUBLIC /usr/include/root/)
target_include_directories(RecoLuminosityLumiProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLuminosityLumiProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLuminosityLumiProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoLuminosityLumiProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoLuminosityLumiProducer PUBLIC /usr/include/boost/regex/)

