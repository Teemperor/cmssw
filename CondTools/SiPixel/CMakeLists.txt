add_subdirectory(test)
add_subdirectory(plugins)
add_library(CondToolsSiPixel OBJECT 
  src/PixelPopConDisabledModSourceHandler.cc
  src/PixelPopConCalibSourceHandler.cc
  src/PixelPopConFEDCablingSourceHandler.cc
  src/PixelPopConCalibAnalyzer.cc
  src/PixelPopConDCSInfoSourceHandler.cc
  src/PixelPopConSourceHandler.cc
  src/PixelPopConDCSCablingSourceHandler.cc
)

target_include_directories(CondToolsSiPixel PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsSiPixel PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsSiPixel PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsSiPixel PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsSiPixel PUBLIC /usr/include/boost/)
target_include_directories(CondToolsSiPixel PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsSiPixel PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsSiPixel PUBLIC /usr/include/root/)
target_include_directories(CondToolsSiPixel PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsSiPixel PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsSiPixel PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsSiPixel PUBLIC /usr/include/boost/regex/)

