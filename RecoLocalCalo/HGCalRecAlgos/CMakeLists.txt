add_library(RecoLocalCaloHGCalRecAlgos OBJECT 
  src/HGCalImagingAlgo.cc
  src/HGCalDepthPreClusterer.cc
  src/RecHitTools.cc
  src/ClusterTools.cc
)

target_include_directories(RecoLocalCaloHGCalRecAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalCaloHGCalRecAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalCaloHGCalRecAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalCaloHGCalRecAlgos PUBLIC /usr/include/root/)
target_include_directories(RecoLocalCaloHGCalRecAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalCaloHGCalRecAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalCaloHGCalRecAlgos PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalCaloHGCalRecAlgos PUBLIC /usr/include/boost/regex/)

