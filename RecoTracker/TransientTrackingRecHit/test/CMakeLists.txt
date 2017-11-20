add_library(TTRHBuilderTest OBJECT 
  modules.cc
  TTRHBuilderTest.cc
)

target_include_directories(TTRHBuilderTest PUBLIC /usr/include/boost/python/)
target_include_directories(TTRHBuilderTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TTRHBuilderTest PUBLIC /usr/include/python2.7/)
target_include_directories(TTRHBuilderTest PUBLIC /usr/include/root/)
target_include_directories(TTRHBuilderTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TTRHBuilderTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TTRHBuilderTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(TTRHBuilderTest PUBLIC /usr/include/boost/)
target_include_directories(TTRHBuilderTest PUBLIC /usr/include/boost/regex/)

add_library(TrackerHitSizes OBJECT 
  TrackerHitSizes.cpp
)

target_include_directories(TrackerHitSizes PUBLIC /usr/include/boost/python/)
target_include_directories(TrackerHitSizes PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackerHitSizes PUBLIC /usr/include/python2.7/)
target_include_directories(TrackerHitSizes PUBLIC /usr/include/root/)
target_include_directories(TrackerHitSizes PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackerHitSizes PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackerHitSizes PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackerHitSizes PUBLIC /usr/include/boost/)
target_include_directories(TrackerHitSizes PUBLIC /usr/include/boost/regex/)

