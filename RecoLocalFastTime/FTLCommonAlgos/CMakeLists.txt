add_subdirectory(plugins)
add_library(RecoLocalFastTimeFTLCommonAlgos OBJECT 
  src/FTLUncalibratedRecHitAlgoBase.cc
  src/RecHitTools.cc
  src/FTLRecHitAlgoBase.cc
)

target_include_directories(RecoLocalFastTimeFTLCommonAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalFastTimeFTLCommonAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalFastTimeFTLCommonAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalFastTimeFTLCommonAlgos PUBLIC /usr/include/root/)
target_include_directories(RecoLocalFastTimeFTLCommonAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalFastTimeFTLCommonAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalFastTimeFTLCommonAlgos PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalFastTimeFTLCommonAlgos PUBLIC /usr/include/boost/regex/)

