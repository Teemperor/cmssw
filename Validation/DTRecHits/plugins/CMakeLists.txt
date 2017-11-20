add_library(ValidationDTRecHitsPlugins OBJECT 
  DTSegment2DSLPhiQuality.cc
  SealModule.cc
  DTRecHitQuality.cc
  DT4DSegmentClients.cc
  DTSegment2DQuality.cc
  DTRecHitClients.cc
  DTSegment4DQuality.cc
  DT2DSegmentClients.cc
)

target_include_directories(ValidationDTRecHitsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationDTRecHitsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationDTRecHitsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationDTRecHitsPlugins PUBLIC /usr/include/root/)
target_include_directories(ValidationDTRecHitsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationDTRecHitsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationDTRecHitsPlugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationDTRecHitsPlugins PUBLIC /usr/include/boost/)
target_include_directories(ValidationDTRecHitsPlugins PUBLIC /usr/include/boost/regex/)

