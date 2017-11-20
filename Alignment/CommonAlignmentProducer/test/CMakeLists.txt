add_library(CommonAlignmentProducerRcdScans OBJECT 
  GlobalPositionRcdScan.cpp
  GlobalPositionRcdRead.cpp
  AlignmentRcdScan.cpp
  GlobalPositionRcdWrite.cpp
)

target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /usr/include/python2.7/)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /usr/include/boost/serialization/)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /usr/include/boost/)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /usr/include/boost/python/)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /usr/include/root/)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CommonAlignmentProducerRcdScans PUBLIC /usr/include/boost/regex/)

add_library(TestAccessGeom OBJECT 
  TestAccessGeom.cc
)

target_include_directories(TestAccessGeom PUBLIC /usr/include/boost/iostreams/)
target_include_directories(TestAccessGeom PUBLIC /usr/include/python2.7/)
target_include_directories(TestAccessGeom PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(TestAccessGeom PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestAccessGeom PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestAccessGeom PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(TestAccessGeom PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TestAccessGeom PUBLIC /usr/include/boost/)
target_include_directories(TestAccessGeom PUBLIC /usr/include/boost/python/)
target_include_directories(TestAccessGeom PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestAccessGeom PUBLIC /usr/include/root/)
target_include_directories(TestAccessGeom PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(TestAccessGeom PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestAccessGeom PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(TestAccessGeom PUBLIC /usr/include/boost/regex/)

