add_subdirectory(test)
add_subdirectory(plugins)
add_library(SimTrackerTrackAssociation OBJECT 
  src/ResolutionModel.cc
  src/CosmicParametersDefinerForTP.cc
  src/ParametersDefinerForTP.cc
)

target_include_directories(SimTrackerTrackAssociation PUBLIC /usr/include/boost/python/)
target_include_directories(SimTrackerTrackAssociation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerTrackAssociation PUBLIC /usr/include/python2.7/)
target_include_directories(SimTrackerTrackAssociation PUBLIC /usr/include/root/)
target_include_directories(SimTrackerTrackAssociation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerTrackAssociation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerTrackAssociation PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerTrackAssociation PUBLIC /usr/include/boost/regex/)

