add_subdirectory(plugins)
add_library(RecoMuonTransientTrackingRecHit OBJECT 
  src/MuonTransientTrackingRecHitBuilder.cc
  src/MuonTransientTrackingRecHit.cc
  src/MuonTransientTrackingRecHitBreaker.cc
)

target_include_directories(RecoMuonTransientTrackingRecHit PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonTransientTrackingRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonTransientTrackingRecHit PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonTransientTrackingRecHit PUBLIC /usr/include/root/)
target_include_directories(RecoMuonTransientTrackingRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonTransientTrackingRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonTransientTrackingRecHit PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonTransientTrackingRecHit PUBLIC /usr/include/boost/regex/)

