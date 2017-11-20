add_library(EventFilterSiStripChannelChargeFilter OBJECT 
  src/SealModules.cc
  src/TrackMTCCFilter.cc
  src/TECClusterFilter.cc
  src/ClusterMTCCFilter.cc
  src/MTCCHLTrigger.cc
)

target_include_directories(EventFilterSiStripChannelChargeFilter PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterSiStripChannelChargeFilter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterSiStripChannelChargeFilter PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterSiStripChannelChargeFilter PUBLIC /usr/include/root/)
target_include_directories(EventFilterSiStripChannelChargeFilter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterSiStripChannelChargeFilter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterSiStripChannelChargeFilter PUBLIC /usr/include/boost/)
target_include_directories(EventFilterSiStripChannelChargeFilter PUBLIC /usr/include/boost/regex/)

