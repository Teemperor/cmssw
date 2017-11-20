add_library(ClusterShapeExtractor OBJECT 
  ClusterShapeExtractor.cc
)

target_include_directories(ClusterShapeExtractor PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ClusterShapeExtractor PUBLIC /usr/include/python2.7/)
target_include_directories(ClusterShapeExtractor PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ClusterShapeExtractor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ClusterShapeExtractor PUBLIC /usr/include/boost/serialization/)
target_include_directories(ClusterShapeExtractor PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ClusterShapeExtractor PUBLIC /usr/include/boost/)
target_include_directories(ClusterShapeExtractor PUBLIC /usr/include/eigen3/)
target_include_directories(ClusterShapeExtractor PUBLIC /usr/include/boost/python/)
target_include_directories(ClusterShapeExtractor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ClusterShapeExtractor PUBLIC /usr/include/root/)
target_include_directories(ClusterShapeExtractor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ClusterShapeExtractor PUBLIC /usr/include/boost/regex/)

add_library(clusterShapeAnalyzer OBJECT 
  ClusterShapeAnalyzer.cc
)

target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/root/)
target_include_directories(clusterShapeAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(clusterShapeAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/boost/program_options/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/eigen3/)
target_include_directories(clusterShapeAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(LowPtGlobalDir_t OBJECT 
  LowPtGlobalDir_t.cpp
)

target_include_directories(LowPtGlobalDir_t PUBLIC /usr/include/boost/python/)
target_include_directories(LowPtGlobalDir_t PUBLIC /usr/include/boost/iostreams/)
target_include_directories(LowPtGlobalDir_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(LowPtGlobalDir_t PUBLIC /usr/include/python2.7/)
target_include_directories(LowPtGlobalDir_t PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(LowPtGlobalDir_t PUBLIC /usr/include/root/)
target_include_directories(LowPtGlobalDir_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(LowPtGlobalDir_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(LowPtGlobalDir_t PUBLIC /usr/include/boost/serialization/)
target_include_directories(LowPtGlobalDir_t PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(LowPtGlobalDir_t PUBLIC /usr/include/boost/)
target_include_directories(LowPtGlobalDir_t PUBLIC /usr/include/eigen3/)
target_include_directories(LowPtGlobalDir_t PUBLIC /usr/include/boost/regex/)

add_library(ClusterShapeHitFilter_t OBJECT 
  ClusterShapeHitFilter_t.cpp
)

target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/include/boost/python/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/include/python2.7/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/include/root/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/include/boost/serialization/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/include/boost/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/include/eigen3/)
target_include_directories(ClusterShapeHitFilter_t PUBLIC /usr/include/boost/regex/)

