add_subdirectory(test)
add_library(TrackPropagationNavGeometry OBJECT 
  src/LinearSearchNavSurfaceImpl.cc
  src/NavCylinder.cc
  src/NavPlane.cc
  src/NavCone.cc
  src/NavVolume6Faces.cc
  src/NavSurfaceBuilder.cc
  src/ThreePlaneCrossing.cc
)

target_include_directories(TrackPropagationNavGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackPropagationNavGeometry PUBLIC /usr/include/root/)
target_include_directories(TrackPropagationNavGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackPropagationNavGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackPropagationNavGeometry PUBLIC /usr/include/boost/)
target_include_directories(TrackPropagationNavGeometry PUBLIC /usr/include/boost/regex/)

