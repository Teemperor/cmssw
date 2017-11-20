add_library(AlignmentMuonAlignment_test OBJECT 
  ComputeTransformation.cpp
  TestMuonAnalyzer.cpp
  TestReader.cpp
  TestTranslation.cpp
  TestMisalign.cpp
  TestRotation.cpp
  TestMuonHierarchy.cpp
  TestAlign.cpp
)

target_include_directories(AlignmentMuonAlignment_test PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /usr/include/boost/)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /usr/include/root/)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentMuonAlignment_test PUBLIC /usr/include/boost/regex/)

