add_library(SiPixelCluster_t OBJECT 
  SiPixelCluster_t.cpp
)

target_include_directories(SiPixelCluster_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SiPixelCluster_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SiPixelCluster_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SiPixelCluster_t PUBLIC /usr/include/boost/)
target_include_directories(SiPixelCluster_t PUBLIC /usr/include/root/)
target_include_directories(SiPixelCluster_t PUBLIC /usr/include/boost/regex/)

