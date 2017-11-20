add_subdirectory(plugins)
add_library(RecoVertexPrimaryVertexProducer OBJECT 
  src/TrackFilterForPVFinding.cc
  src/PrimaryVertexSorter.cc
  src/DAClusterizerInZ.cc
  src/DAClusterizerInZT.cc
  src/GapClusterizerInZ.cc
  src/PrimaryVertexProducerAlgorithm.cc
  src/VertexHigherPtSquared.cc
  src/DAClusterizerInZ_vect.cc
)

target_include_directories(RecoVertexPrimaryVertexProducer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexPrimaryVertexProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexPrimaryVertexProducer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexPrimaryVertexProducer PUBLIC /usr/include/root/)
target_include_directories(RecoVertexPrimaryVertexProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexPrimaryVertexProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexPrimaryVertexProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexPrimaryVertexProducer PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/TrackFilterForPVFinding.cc
  src/PrimaryVertexSorter.cc
  src/DAClusterizerInZ.cc
  src/DAClusterizerInZT.cc
  src/GapClusterizerInZ.cc
  src/PrimaryVertexProducerAlgorithm.cc
  src/VertexHigherPtSquared.cc
  src/DAClusterizerInZ_vect.cc
PROPERTIES COMPILE_FLAGS "-Ofast")

