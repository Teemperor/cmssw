add_library(RecoLocalCaloCastorRecoPlugins OBJECT 
  SealModule.cc
  CastorSimpleReconstructor.cc
)

target_include_directories(RecoLocalCaloCastorRecoPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalCaloCastorRecoPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalCaloCastorRecoPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalCaloCastorRecoPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoLocalCaloCastorRecoPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalCaloCastorRecoPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalCaloCastorRecoPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalCaloCastorRecoPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalCaloCastorRecoPlugins PUBLIC /usr/include/boost/regex/)

