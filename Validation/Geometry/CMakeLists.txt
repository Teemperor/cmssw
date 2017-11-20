add_library(ValidationGeometry OBJECT 
  src/MaterialBudgetTrackerHistos.cc
  src/MaterialBudgetCategorizer.cc
  src/module.cc
  src/MaterialBudgetHistos.cc
  src/MaterialBudgetEcalHistos.cc
  src/MaterialBudgetHcalHistos.cc
  src/MaterialBudgetTree.cc
  src/MaterialBudgetFormat.cc
  src/MaterialBudgetHcal.cc
  src/MaterialBudgetForward.cc
  src/TestHistoMgr.cc
  src/MaterialBudgetTxt.cc
  src/MaterialBudgetAction.cc
  src/MaterialBudgetData.cc
  src/MaterialBudget.cc
  src/MaterialBudgetCastorHistos.cc
)

target_include_directories(ValidationGeometry PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ValidationGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationGeometry PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ValidationGeometry PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationGeometry PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationGeometry PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ValidationGeometry PUBLIC /usr/include/boost/)
target_include_directories(ValidationGeometry PUBLIC /usr/include/Geant4/)
target_include_directories(ValidationGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationGeometry PUBLIC /usr/include/root/)
target_include_directories(ValidationGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationGeometry PUBLIC /usr/include/boost/regex/)

