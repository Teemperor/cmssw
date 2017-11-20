add_library(SiPixelRawDumper OBJECT 
  SiPixelRawDumper.cc
)

target_include_directories(SiPixelRawDumper PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SiPixelRawDumper PUBLIC /usr/include/python2.7/)
target_include_directories(SiPixelRawDumper PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SiPixelRawDumper PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SiPixelRawDumper PUBLIC /usr/include/boost/serialization/)
target_include_directories(SiPixelRawDumper PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SiPixelRawDumper PUBLIC /usr/include/boost/)
target_include_directories(SiPixelRawDumper PUBLIC /usr/include/boost/python/)
target_include_directories(SiPixelRawDumper PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SiPixelRawDumper PUBLIC /usr/include/root/)
target_include_directories(SiPixelRawDumper PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SiPixelRawDumper PUBLIC /usr/include/boost/regex/)

add_library(FedErrorDumper OBJECT 
  FedErrorDumper.cc
)

target_include_directories(FedErrorDumper PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FedErrorDumper PUBLIC /usr/include/python2.7/)
target_include_directories(FedErrorDumper PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FedErrorDumper PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FedErrorDumper PUBLIC /usr/include/boost/serialization/)
target_include_directories(FedErrorDumper PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FedErrorDumper PUBLIC /usr/include/boost/)
target_include_directories(FedErrorDumper PUBLIC /usr/include/boost/python/)
target_include_directories(FedErrorDumper PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FedErrorDumper PUBLIC /usr/include/root/)
target_include_directories(FedErrorDumper PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FedErrorDumper PUBLIC /usr/include/boost/regex/)

add_library(findHotPixels OBJECT 
  findHotPixels.cc
)

target_include_directories(findHotPixels PUBLIC /usr/include/boost/iostreams/)
target_include_directories(findHotPixels PUBLIC /usr/include/python2.7/)
target_include_directories(findHotPixels PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(findHotPixels PUBLIC /home/teemperor/cms/md5/)
target_include_directories(findHotPixels PUBLIC /usr/include/boost/serialization/)
target_include_directories(findHotPixels PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(findHotPixels PUBLIC /usr/include/boost/)
target_include_directories(findHotPixels PUBLIC /usr/include/boost/python/)
target_include_directories(findHotPixels PUBLIC /usr/include/boost/filesystem/)
target_include_directories(findHotPixels PUBLIC /usr/include/root/)
target_include_directories(findHotPixels PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(findHotPixels PUBLIC /usr/include/boost/regex/)

