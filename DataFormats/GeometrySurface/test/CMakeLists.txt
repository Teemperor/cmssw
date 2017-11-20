add_library(FrameTransformTest OBJECT 
  FrameTransformTest.cpp
)

target_include_directories(FrameTransformTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FrameTransformTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FrameTransformTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FrameTransformTest PUBLIC /usr/include/boost/)
target_include_directories(FrameTransformTest PUBLIC /usr/include/root/)
target_include_directories(FrameTransformTest PUBLIC /usr/include/boost/regex/)

add_library(OldFrameTransformTest OBJECT 
  OldFrameTransformTest.cpp
)

target_include_directories(OldFrameTransformTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(OldFrameTransformTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(OldFrameTransformTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(OldFrameTransformTest PUBLIC /usr/include/boost/)
target_include_directories(OldFrameTransformTest PUBLIC /usr/include/root/)
target_include_directories(OldFrameTransformTest PUBLIC /usr/include/boost/regex/)

add_library(PrecisionMixSurface OBJECT 
  PrecisionMixSurface.cpp
)

target_include_directories(PrecisionMixSurface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PrecisionMixSurface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PrecisionMixSurface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PrecisionMixSurface PUBLIC /usr/include/boost/)
target_include_directories(PrecisionMixSurface PUBLIC /usr/include/root/)
target_include_directories(PrecisionMixSurface PUBLIC /usr/include/boost/regex/)

add_library(referencecounted_t OBJECT 
  referencecounted_t.cpp
)

target_include_directories(referencecounted_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(referencecounted_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(referencecounted_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(referencecounted_t PUBLIC /usr/include/boost/)
target_include_directories(referencecounted_t PUBLIC /usr/include/root/)
target_include_directories(referencecounted_t PUBLIC /usr/include/boost/regex/)

add_library(testGeometricSort OBJECT 
  testGeometricSort.cpp
)

target_include_directories(testGeometricSort PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometricSort PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometricSort PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometricSort PUBLIC /usr/include/boost/)
target_include_directories(testGeometricSort PUBLIC /usr/include/root/)
target_include_directories(testGeometricSort PUBLIC /usr/include/boost/regex/)

add_library(Bounds_t OBJECT 
  Bounds_t.cpp
)

target_include_directories(Bounds_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Bounds_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Bounds_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Bounds_t PUBLIC /usr/include/boost/)
target_include_directories(Bounds_t PUBLIC /usr/include/root/)
target_include_directories(Bounds_t PUBLIC /usr/include/boost/regex/)

