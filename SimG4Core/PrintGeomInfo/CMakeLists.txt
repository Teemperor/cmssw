add_library(SimG4CorePrintGeomInfo OBJECT 
  src/PrintGeomInfoAction.cc
  src/module.cc
  src/PrintMaterialBudgetInfo.cc
  src/PrintGeomSummary.cc
  src/PrintSensitive.cc
)

target_include_directories(SimG4CorePrintGeomInfo PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CorePrintGeomInfo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CorePrintGeomInfo PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CorePrintGeomInfo PUBLIC /usr/include/root/)
target_include_directories(SimG4CorePrintGeomInfo PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CorePrintGeomInfo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CorePrintGeomInfo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CorePrintGeomInfo PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CorePrintGeomInfo PUBLIC /usr/include/boost/)
target_include_directories(SimG4CorePrintGeomInfo PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CorePrintGeomInfo PUBLIC /usr/include/boost/regex/)

