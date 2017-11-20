add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoMuonDetLayers OBJECT 
  src/MuDetRing.cc
  src/MuonRPCDetLayerGeometryBuilder.cc
  src/MuDetRod.cc
  src/MuonGEMDetLayerGeometryBuilder.cc
  src/MuonCSCDetLayerGeometryBuilder.cc
  src/MuonDTDetLayerGeometryBuilder.cc
  src/MuRodBarrelLayer.cc
  src/MuRingForwardLayer.cc
  src/ES_MuonDetLayerGeometry.cc
  src/MuonME0DetLayerGeometryBuilder.cc
  src/MuRingForwardDoubleLayer.cc
  src/MuonDetLayerGeometry.cc
)

target_include_directories(RecoMuonDetLayers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonDetLayers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonDetLayers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonDetLayers PUBLIC /usr/include/root/)
target_include_directories(RecoMuonDetLayers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonDetLayers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonDetLayers PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonDetLayers PUBLIC /usr/include/boost/regex/)

