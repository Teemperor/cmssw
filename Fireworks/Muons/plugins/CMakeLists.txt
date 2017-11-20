add_library(FireworksMuonsPlugins OBJECT 
  FWMuonRhoPhiProxyBuilder.cc
  FWDTDigiProxyBuilder.cc
  FWMuonProxyBuilder.cc
  FWMuonLegoProxyBuilder.cc
  FWRPCDigiProxyBuilder.cc
  FWGEMDigiProxyBuilder.cc
  FWCSCWireDigiProxyBuilder.cc
  FWGEMSegmentProxyBuilder.cc
  FWDTRecHitProxyBuilder.cc
  FWME0RecHitProxyBuilder.cc
  FWMuonGlimpseProxyBuilder.cc
  FWCSCRecHitProxyBuilder.cc
  FWRPCRecHitProxyBuilder.cc
  FWCSCSegmentProxyBuilder.cc
  FWGEMRecHitProxyBuilder.cc
  FWMuonDetailView.cc
  FWDTSegmentProxyBuilder.cc
  FWME0SegmentProxyBuilder.cc
  FWItemMuonAccessors.cc
  FWME0DigiProxyBuilder.cc
  FWCSCStripDigiProxyBuilder.cc
)

target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksMuonsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/boost/)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/root/)
target_include_directories(FireworksMuonsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksMuonsPlugins PUBLIC /usr/include/boost/regex/)

