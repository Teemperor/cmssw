add_library(IORawDataSiPixelInputSources OBJECT 
  src/PixelSLinkDataInputSource.cc
  src/SealModule.cc
)

target_include_directories(IORawDataSiPixelInputSources PUBLIC /usr/include/boost/python/)
target_include_directories(IORawDataSiPixelInputSources PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IORawDataSiPixelInputSources PUBLIC /usr/include/python2.7/)
target_include_directories(IORawDataSiPixelInputSources PUBLIC /usr/include/root/)
target_include_directories(IORawDataSiPixelInputSources PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IORawDataSiPixelInputSources PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IORawDataSiPixelInputSources PUBLIC /usr/include/boost/)
target_include_directories(IORawDataSiPixelInputSources PUBLIC /usr/include/boost/regex/)

