add_library(TrackAnalyzer OBJECT 
  TrackAnalyzer.cc
)

target_include_directories(TrackAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(TrackAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(TrackAnalyzer PUBLIC /usr/include/root/)
target_include_directories(TrackAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(TrackAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(TrackValidator OBJECT 
  TrackValidator.cc
)

target_include_directories(TrackValidator PUBLIC /usr/include/boost/python/)
target_include_directories(TrackValidator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackValidator PUBLIC /usr/include/python2.7/)
target_include_directories(TrackValidator PUBLIC /usr/include/root/)
target_include_directories(TrackValidator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackValidator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackValidator PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackValidator PUBLIC /usr/include/boost/)
target_include_directories(TrackValidator PUBLIC /usr/include/boost/regex/)

add_library(TrajectoryAnalyzer OBJECT 
  TrajectoryAnalyzer.cc
)

target_include_directories(TrajectoryAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(TrajectoryAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrajectoryAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(TrajectoryAnalyzer PUBLIC /usr/include/root/)
target_include_directories(TrajectoryAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrajectoryAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrajectoryAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrajectoryAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(TrajectoryAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(MomentumConstraintProducer OBJECT 
  MomentumConstraintProducer.cc
)

target_include_directories(MomentumConstraintProducer PUBLIC /usr/include/boost/python/)
target_include_directories(MomentumConstraintProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MomentumConstraintProducer PUBLIC /usr/include/python2.7/)
target_include_directories(MomentumConstraintProducer PUBLIC /usr/include/root/)
target_include_directories(MomentumConstraintProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MomentumConstraintProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MomentumConstraintProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(MomentumConstraintProducer PUBLIC /usr/include/boost/)
target_include_directories(MomentumConstraintProducer PUBLIC /usr/include/boost/regex/)

add_library(VertexConstraintProducer OBJECT 
  VertexConstraintProducer.cc
)

target_include_directories(VertexConstraintProducer PUBLIC /usr/include/boost/python/)
target_include_directories(VertexConstraintProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(VertexConstraintProducer PUBLIC /usr/include/python2.7/)
target_include_directories(VertexConstraintProducer PUBLIC /usr/include/root/)
target_include_directories(VertexConstraintProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(VertexConstraintProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(VertexConstraintProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(VertexConstraintProducer PUBLIC /usr/include/boost/)
target_include_directories(VertexConstraintProducer PUBLIC /usr/include/boost/regex/)

add_library(TwoBodyDecayConstraintProducer OBJECT 
  TwoBodyDecayConstraintProducer.cc
)

target_include_directories(TwoBodyDecayConstraintProducer PUBLIC /usr/include/boost/python/)
target_include_directories(TwoBodyDecayConstraintProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TwoBodyDecayConstraintProducer PUBLIC /usr/include/python2.7/)
target_include_directories(TwoBodyDecayConstraintProducer PUBLIC /usr/include/root/)
target_include_directories(TwoBodyDecayConstraintProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TwoBodyDecayConstraintProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TwoBodyDecayConstraintProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(TwoBodyDecayConstraintProducer PUBLIC /usr/include/boost/)
target_include_directories(TwoBodyDecayConstraintProducer PUBLIC /usr/include/eigen3/)
target_include_directories(TwoBodyDecayConstraintProducer PUBLIC /usr/include/boost/regex/)

add_library(TwoBodyDecayMomConstraintProducer OBJECT 
  TwoBodyDecayMomConstraintProducer.cc
)

target_include_directories(TwoBodyDecayMomConstraintProducer PUBLIC /usr/include/boost/python/)
target_include_directories(TwoBodyDecayMomConstraintProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TwoBodyDecayMomConstraintProducer PUBLIC /usr/include/python2.7/)
target_include_directories(TwoBodyDecayMomConstraintProducer PUBLIC /usr/include/root/)
target_include_directories(TwoBodyDecayMomConstraintProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TwoBodyDecayMomConstraintProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TwoBodyDecayMomConstraintProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(TwoBodyDecayMomConstraintProducer PUBLIC /usr/include/boost/)
target_include_directories(TwoBodyDecayMomConstraintProducer PUBLIC /usr/include/eigen3/)
target_include_directories(TwoBodyDecayMomConstraintProducer PUBLIC /usr/include/boost/regex/)

add_library(GsfVertexConstraintProducer OBJECT 
  GsfVertexConstraintProducer.cc
)

target_include_directories(GsfVertexConstraintProducer PUBLIC /usr/include/boost/python/)
target_include_directories(GsfVertexConstraintProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GsfVertexConstraintProducer PUBLIC /usr/include/python2.7/)
target_include_directories(GsfVertexConstraintProducer PUBLIC /usr/include/root/)
target_include_directories(GsfVertexConstraintProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GsfVertexConstraintProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GsfVertexConstraintProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(GsfVertexConstraintProducer PUBLIC /usr/include/boost/)
target_include_directories(GsfVertexConstraintProducer PUBLIC /usr/include/boost/regex/)

