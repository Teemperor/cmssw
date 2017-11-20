add_subdirectory(test)
add_library(RecoLocalTrackerSubCollectionProducers OBJECT 
  src/TopBottomClusterInfoProducer.cc
  src/PixelClusterSelectorTopBottom.cc
  src/ClusterMultiplicityFilter.cc
  src/ClusterChargeMasker.cc
  src/JetCoreClusterSplitter.cc
  src/StripClusterSelectorTopBottom.cc
  src/SealModules.cc
  src/TrackClusterRemoverPhase2.cc
  src/SeedClusterRemoverPhase2.cc
  src/ClusterSummaryProducer.cc
  src/ClusterVariables.cc
  src/SeedClusterRemover.cc
  src/HITrackClusterRemover.cc
  src/TrackClusterSplitter.cc
  src/HLTTrackClusterRemoverNew.cc
  src/TrackClusterRemover.cc
)

target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /usr/include/root/)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalTrackerSubCollectionProducers PUBLIC /usr/include/boost/regex/)

