add_library(JetMETCorrectionsModulesPlugins OBJECT 
  ChainedJetCorrectorProducer.cc
  SealModule.cc
  JetCorrectorProducers.cc
  CorrectedJetProducers.cc
  JetCorrectorDBReader.cc
  QGLikelihoodDBReader.cc
  METCorrectorDBReader.cc
  JetResolutionDemo.cc
  JetCorrectorDBWriter.cc
  QGLikelihoodDBWriter.cc
  JetResolutionDBWriter.cc
  JetCorrectorOnTheFly.cc
  METCorrectorDBWriter.cc
  QGLikelihoodSystematicsDBReader.cc
  FactorizedJetCorrectorDemo.cc
  JetResolutionDBReader.cc
  JetCorrectorDemo.cc
  QGLikelihoodSystematicsDBWriter.cc
)

target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /usr/include/boost/)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /usr/include/root/)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(JetMETCorrectionsModulesPlugins PUBLIC /usr/include/boost/regex/)

