add_library(RecoHIHiTrackingPlugins OBJECT 
  HIBestVertexProducer.cc
  HIPixelTrackFilterProducer.cc
  HIPixelClusterVtxProducer.cc
  modules.cc
  HIBestVertexSelector.cc
  HIProtoTrackSelector.cc
  HIMultiTrackSelector.cc
  HIProtoTrackFilterProducer.cc
  HIPixelMedianVtxProducer.cc
)

target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoHIHiTrackingPlugins PUBLIC /usr/include/boost/regex/)

