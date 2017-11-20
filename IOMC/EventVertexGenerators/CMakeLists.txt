add_library(IOMCEventVertexGenerators OBJECT 
  src/module.cc
  src/BeamProfile2DB.cc
  src/GaussianZBeamSpotFilter.cc
  src/FlatEvtVtxGenerator.cc
  src/BaseEvtVtxGenerator.cc
  src/GaussEvtVtxGenerator.cc
  src/HLLHCEvtVtxGenerator.cc
  src/BeamProfileVtxGenerator.cc
  src/BetafuncEvtVtxGenerator.cc
)

target_include_directories(IOMCEventVertexGenerators PUBLIC /usr/include/python2.7/)
target_include_directories(IOMCEventVertexGenerators PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IOMCEventVertexGenerators PUBLIC /usr/include/boost/serialization/)
target_include_directories(IOMCEventVertexGenerators PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(IOMCEventVertexGenerators PUBLIC /usr/include/boost/)
target_include_directories(IOMCEventVertexGenerators PUBLIC /usr/include/boost/python/)
target_include_directories(IOMCEventVertexGenerators PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IOMCEventVertexGenerators PUBLIC /usr/include/root/)
target_include_directories(IOMCEventVertexGenerators PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(IOMCEventVertexGenerators PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IOMCEventVertexGenerators PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(IOMCEventVertexGenerators PUBLIC /usr/include/boost/regex/)

