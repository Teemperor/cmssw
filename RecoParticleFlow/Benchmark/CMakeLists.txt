add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoParticleFlowBenchmarksrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoParticleFlow/Benchmark/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoParticleFlowBenchmarksrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoParticleFlow/Benchmark/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoParticleFlow/Benchmark/src/classes.h /home/teemperor/cms/cmssw/RecoParticleFlow/Benchmark/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoParticleFlowBenchmarksrcclassesh")

add_library(RecoParticleFlowBenchmark OBJECT 
  src/PFJetBenchmark.cc
  src/PFTauElecRejectionBenchmark.cc
  src/PFMETBenchmark.cc
  src/GenericBenchmark.cc
  src/BenchmarkTree.cc
  ${CMAKE_BINARY_DIR}/RecoParticleFlowBenchmarksrcclassesh_rflx.cpp
)

target_include_directories(RecoParticleFlowBenchmark PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /usr/include/python2.7/)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /usr/include/boost/)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /usr/include/boost/python/)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /usr/include/root/)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoParticleFlowBenchmark PUBLIC /usr/include/boost/regex/)

