add_subdirectory(test)
add_subdirectory(plugins)
add_library(AlignmentCommonAlignmentProducer OBJECT 
  src/AlignmentCSCOverlapSelector.cc
  src/AlignmentTwoBoyDecayTrackSelector.cc
  src/AlignmentCSCTrackSelector.cc
  src/AlignmentCSCBeamHaloSelector.cc
  src/AlignmentMuonSelector.cc
  src/AlignmentSeedSelector.cc
  src/AlignmentTrackSelector.cc
  src/AlignmentProducerBase.cc
  src/AlignmentGlobalTrackSelector.cc
)

target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /usr/include/root/)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCommonAlignmentProducer PUBLIC /usr/include/boost/regex/)

