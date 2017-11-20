add_library(SimG4CorePhysicsListsPlugins OBJECT 
  FTFPCMS_BERT.cc
  FTFPCMS_BERT_EML.cc
  module.cc
  QGSPCMS_FTFP_BERT_EML_New.cc
  QBBCCMS.cc
  FTFPCMS_BERT_EMM.cc
  FTFPCMS_BERT_HP_EML.cc
  QGSPCMS_FTFP_BERT_EMM.cc
  FTFPCMS_BERT_ATL_EMM.cc
  FTFPCMS_BERT_EMV.cc
  QGSPCMS_BERT_EML.cc
  FTFPCMS_BERT_XS_EML.cc
  DummyPhysics.cc
  FTFCMS_BIC.cc
  QGSPCMS_FTFP_BERT_EML95msc93.cc
  CMSModel.cc
  QGSPCMS_FTFP_BERT.cc
  FTFPCMS_BERT_EMY.cc
  QGSPCMS_FTFP_BERT_EML95.cc
  QGSPCMS_BERT_EML95.cc
  QGSPCMS_BERT_EMLSYNC.cc
  QGSPCMS_FTFP_BERT_EML.cc
  QGSPCMS_BERT_EMV.cc
  FTFPCMS_BERT_EML95.cc
  QGSPCMS_BERT_HP_EML.cc
  QGSPCMS_BERT.cc
)

target_include_directories(SimG4CorePhysicsListsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CorePhysicsListsPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CorePhysicsListsPlugins PUBLIC /usr/include/root/)
target_include_directories(SimG4CorePhysicsListsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CorePhysicsListsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CorePhysicsListsPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CorePhysicsListsPlugins PUBLIC /usr/include/boost/)
target_include_directories(SimG4CorePhysicsListsPlugins PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CorePhysicsListsPlugins PUBLIC /usr/include/boost/regex/)

