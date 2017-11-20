add_subdirectory(plugins)
add_library(ValidationEventGenerator OBJECT 
  src/TauDecay_GenParticle.cc
  src/TauDecay.cc
  src/CaloCellManager.cc
  src/WeightManager.cc
  src/DQMHelper.cc
  src/HepMCValidationHelper.cc
  src/PdtPdgMini.cc
  src/CaloCellId.cc
  src/TauDecay_CMSSW.cc
)

target_include_directories(ValidationEventGenerator PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationEventGenerator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationEventGenerator PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationEventGenerator PUBLIC /usr/include/root/)
target_include_directories(ValidationEventGenerator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationEventGenerator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationEventGenerator PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationEventGenerator PUBLIC /usr/include/boost/)
target_include_directories(ValidationEventGenerator PUBLIC /usr/include/boost/regex/)

