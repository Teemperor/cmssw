add_library(FireworksElectronsPlugins OBJECT 
  FWElectronLegoProxyBuilder.cc
  FWConvTrackHitsDetailView.cc
  FWPhotonDetailView.cc
  FWPhotonProxyBuilder.cc
  FWPhotonLegoProxyBuilder.cc
  FWElectronDetailView.cc
  FWElectronProxyBuilder.cc
  FWConversionProxyBuilder.cc
)

target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksElectronsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/boost/)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/root/)
target_include_directories(FireworksElectronsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksElectronsPlugins PUBLIC /usr/include/boost/regex/)

