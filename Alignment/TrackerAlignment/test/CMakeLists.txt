add_library(AlignmentTrackerAlignment_test OBJECT 
  ApeAdder.cpp
  TestAnalyzer.cpp
  TestReader.cpp
  TestTrackerHierarchy.cpp
)

target_include_directories(AlignmentTrackerAlignment_test PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /usr/include/boost/)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /usr/include/root/)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentTrackerAlignment_test PUBLIC /usr/include/boost/regex/)

add_library(TrackerGeometryAnalyzerPlugin OBJECT 
  TrackerGeometryAnalyzer.cc
)

target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /usr/include/boost/)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /usr/include/root/)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(TrackerGeometryAnalyzerPlugin PUBLIC /usr/include/boost/regex/)

