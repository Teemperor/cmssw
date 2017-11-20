add_library(IORawDataDTCommissioningPlugins OBJECT 
  DTSpyReader.cc
  SealModule.cc
  DTROS8FileReader.cc
  DTDDUFileReader.cc
  DTSpyHelper.cc
  DTSpy.cc
  RawFile.cc
  DTROS25FileReader.cc
  DTNewROS8FileReader.cc
)

target_include_directories(IORawDataDTCommissioningPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(IORawDataDTCommissioningPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IORawDataDTCommissioningPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(IORawDataDTCommissioningPlugins PUBLIC /usr/include/root/)
target_include_directories(IORawDataDTCommissioningPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IORawDataDTCommissioningPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IORawDataDTCommissioningPlugins PUBLIC /usr/include/boost/)
target_include_directories(IORawDataDTCommissioningPlugins PUBLIC /usr/include/boost/regex/)

