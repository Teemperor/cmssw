add_library(TrajectoryReader OBJECT 
  TrajectoryReader.cc
)

target_include_directories(TrajectoryReader PUBLIC /usr/include/boost/python/)
target_include_directories(TrajectoryReader PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrajectoryReader PUBLIC /usr/include/python2.7/)
target_include_directories(TrajectoryReader PUBLIC /usr/include/root/)
target_include_directories(TrajectoryReader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrajectoryReader PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrajectoryReader PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrajectoryReader PUBLIC /usr/include/boost/)
target_include_directories(TrajectoryReader PUBLIC /usr/include/boost/regex/)

add_library(TrackReader OBJECT 
  TrackReader.cc
)

target_include_directories(TrackReader PUBLIC /usr/include/boost/python/)
target_include_directories(TrackReader PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackReader PUBLIC /usr/include/python2.7/)
target_include_directories(TrackReader PUBLIC /usr/include/root/)
target_include_directories(TrackReader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackReader PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackReader PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackReader PUBLIC /usr/include/boost/)
target_include_directories(TrackReader PUBLIC /usr/include/boost/regex/)

