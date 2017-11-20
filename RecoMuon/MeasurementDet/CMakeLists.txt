add_library(RecoMuonMeasurementDet OBJECT 
  src/MuonDetLayerMeasurements.cc
)

target_include_directories(RecoMuonMeasurementDet PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonMeasurementDet PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonMeasurementDet PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonMeasurementDet PUBLIC /usr/include/root/)
target_include_directories(RecoMuonMeasurementDet PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonMeasurementDet PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonMeasurementDet PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonMeasurementDet PUBLIC /usr/include/boost/regex/)

