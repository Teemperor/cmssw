add_library(RecoVertexGhostTrackFitter OBJECT 
  src/GhostTrackVertexFinder.cc
  src/GhostTrackPrediction.cc
  src/PositiveSideGhostTrackFitter.cc
  src/VertexGhostTrackState.cc
  src/AnnealingGhostTrackFitter.cc
  src/GhostTrack.cc
  src/KalmanGhostTrackUpdater.cc
  src/GhostTrackFitter.cc
  src/TrackGhostTrackState.cc
  src/SequentialGhostTrackFitter.cc
  src/GhostTrackState.cc
)

target_include_directories(RecoVertexGhostTrackFitter PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexGhostTrackFitter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexGhostTrackFitter PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexGhostTrackFitter PUBLIC /usr/include/root/)
target_include_directories(RecoVertexGhostTrackFitter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexGhostTrackFitter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexGhostTrackFitter PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexGhostTrackFitter PUBLIC /usr/include/boost/regex/)

