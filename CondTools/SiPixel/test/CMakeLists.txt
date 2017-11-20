add_library(testCondToolsSiPixel OBJECT 
  SiPixelFakeGenErrorDBSourceReader.cc
  SiPixelLorentzAngleDB.cc
  SiPixelCondObjReader.cc
  SiPixelDynamicInefficiencyDB.cc
  SiPixelTemplateDBObjectReader.cc
  SiPixelCondObjBuilder.cc
  SiPixelCondObjOfflineReader.cc
  PixelPopConCalibChecker.cc
  SiPixel2DTemplateDBObjectUploader.cc
  SiPixelLorentzAngleReader.cc
  SiPixelFakeCPEGenericErrorParmSourceReader.cc
  SealModules.cc
  SiPixel2DTemplateDBObjectReader.cc
  SiPixelCondObjForHLTReader.cc
  SiPixelGenErrorDBObjectUploader.cc
  SiPixelFakeTemplateDBSourceReader.cc
  SiPixelBadModuleReader.cc
  SiPixelCalibConfigurationReadDb.cc
  SiPixelTemplateDBObjectUploader.cc
  SiPixelDynamicInefficiencyReader.cc
  SiPixelGenErrorDBObjectReader.cc
  SiPixelCondObjForHLTBuilder.cc
  SiPixelGainCalibrationReadDQMFile.cc
  SiPixelGainCalibrationRejectNoisyAndDead.cc
  SiPixelCondObjOfflineBuilder.cc
  SiPixelCondObjAllPayloadsReader.cc
  SiPixelCalibConfigurationObjectMaker.cc
  SiPixelCPEGenericErrorParmReader.cc
  SiPixelCPEGenericErrorParmUploader.cc
  SiPixelPerformanceSummaryReader.cc
  SiPixelBadModuleByHandBuilder.cc
  SiPixelPerformanceSummaryBuilder.cc
)

target_include_directories(testCondToolsSiPixel PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testCondToolsSiPixel PUBLIC /usr/include/python2.7/)
target_include_directories(testCondToolsSiPixel PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testCondToolsSiPixel PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCondToolsSiPixel PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCondToolsSiPixel PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testCondToolsSiPixel PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testCondToolsSiPixel PUBLIC /usr/include/boost/)
target_include_directories(testCondToolsSiPixel PUBLIC /usr/include/boost/python/)
target_include_directories(testCondToolsSiPixel PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCondToolsSiPixel PUBLIC /usr/include/root/)
target_include_directories(testCondToolsSiPixel PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testCondToolsSiPixel PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCondToolsSiPixel PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testCondToolsSiPixel PUBLIC /usr/include/boost/regex/)

