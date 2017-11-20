add_library(RecoLocalCaloCastor OBJECT 
  src/CastorInvalidDataFilter.cc
  src/CastorCellProducer.cc
  src/CastorTowerProducer.cc
  src/RecHitCorrector.cc
  src/CastorClusterProducer.cc
)

target_include_directories(RecoLocalCaloCastor PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalCaloCastor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalCaloCastor PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalCaloCastor PUBLIC /usr/include/root/)
target_include_directories(RecoLocalCaloCastor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalCaloCastor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalCaloCastor PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalCaloCastor PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalCaloCastor PUBLIC /usr/include/boost/regex/)

