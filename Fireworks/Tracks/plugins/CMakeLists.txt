add_library(FireworksTracksPlugins OBJECT 
  FWBeamSpotProxyBuilder.cc
  FWSiStripDigiProxyBuilder.cc
  FWSiPixelDigiProxyBuilder.cc
  FWTrajectorySeedProxyBuilder.cc
  FWTracksModulesProxyBuilder.cc
  FWSiStripClusterProxyBuilder.cc
  FWSiPixelClusterProxyBuilder.cc
  FWTrackResidualDetailView.cc
  FWTrackProxyBuilder.cc
  FWTrackECALDetailView.cc
  FWTrackTrackingRecHitProxyBuilder.cc
  FWTrackHitsDetailView.cc
  FWTracksRecHitsProxyBuilder.cc
  FWSiPixelClusterDetProxyBuilder.cc
  FWBeamSpotOnlineProxyBuilder.cc
  FWItemTrackAccessors.cc
)

target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksTracksPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/boost/)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/root/)
target_include_directories(FireworksTracksPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksTracksPlugins PUBLIC /usr/include/boost/regex/)

