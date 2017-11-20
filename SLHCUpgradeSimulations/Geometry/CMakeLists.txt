add_library(SLHCUpgradeSimulationsGeometry OBJECT 
  src/DDPixBarLayerUpgradeAlgoCoverage.cc
  src/module.cc
  src/DDPixBarStackLinearGap.cc
  src/PrintGeomMatInfo.cc
  src/DDPixBarStackTrigLayerAlgo.cc
  src/DDPixBarStackLayerAlgo.cc
  src/DDPixBarStackLinear.cc
  src/DDPixBarTPGStackLayerAlgo.cc
)

target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /usr/include/root/)
target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /usr/include/boost/)
target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /usr/include/Geant4/)
target_include_directories(SLHCUpgradeSimulationsGeometry PUBLIC /usr/include/boost/regex/)

