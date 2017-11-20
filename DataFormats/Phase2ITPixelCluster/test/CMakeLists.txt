add_library(Phase2ITPixelCluster_t OBJECT 
  Phase2ITPixelCluster_t.cpp
)

target_include_directories(Phase2ITPixelCluster_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Phase2ITPixelCluster_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Phase2ITPixelCluster_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Phase2ITPixelCluster_t PUBLIC /usr/include/boost/)
target_include_directories(Phase2ITPixelCluster_t PUBLIC /usr/include/root/)
target_include_directories(Phase2ITPixelCluster_t PUBLIC /usr/include/boost/regex/)

