add_library(DQMSiStripCommissioningSourcesPlugins OBJECT 
  module.cc
  SiStripCommissioningBasicPrescaler.cc
  SiStripCommissioningSeedFilter.cc
  SiStripCommissioningRunTypeFilter.cc
)

target_include_directories(DQMSiStripCommissioningSourcesPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiStripCommissioningSourcesPlugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiStripCommissioningSourcesPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripCommissioningSourcesPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiStripCommissioningSourcesPlugins PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripCommissioningSourcesPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiStripCommissioningSourcesPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripCommissioningSourcesPlugins PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripCommissioningSourcesPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripCommissioningSourcesPlugins PUBLIC /usr/include/boost/regex/)

add_library(DQMSiStripCommissioningSourcesTracking OBJECT 
  tracking/module.cc
  tracking/ClusterCount.cc
  tracking/SiStripFineDelayTOF.cc
  tracking/SiStripFineDelayHit.cc
  tracking/SiStripFineDelayTLA.cc
)

target_include_directories(DQMSiStripCommissioningSourcesTracking PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiStripCommissioningSourcesTracking PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripCommissioningSourcesTracking PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiStripCommissioningSourcesTracking PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripCommissioningSourcesTracking PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripCommissioningSourcesTracking PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripCommissioningSourcesTracking PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiStripCommissioningSourcesTracking PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiStripCommissioningSourcesTracking PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripCommissioningSourcesTracking PUBLIC /usr/include/boost/regex/)

