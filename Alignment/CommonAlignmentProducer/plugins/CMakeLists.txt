add_library(AlignmentCommonAlignmentFakeProducers OBJECT 
  FakeAlignmentProducer.cc
  FakeAlignmentSource.cc
)

target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /usr/include/root/)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCommonAlignmentFakeProducers PUBLIC /usr/include/boost/regex/)

add_library(AlignmentCommonAlignmentProducerPlugin OBJECT 
  AlignmentProducer.cc
)

target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /usr/include/root/)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCommonAlignmentProducerPlugin PUBLIC /usr/include/boost/regex/)

add_library(AlignmentCommonAlignmentProducerAsAnalyzerPlugin OBJECT 
  AlignmentProducerAsAnalyzer.cc
)

target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /usr/include/root/)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCommonAlignmentProducerAsAnalyzerPlugin PUBLIC /usr/include/boost/regex/)

add_library(CommonAlignmentProducerSelectors OBJECT 
  AlignmentCSCOverlapSelectorModule.cc
  AlignmentMuonSelectorModule.cc
  AlignmentSeedSelectorModule.cc
  AlignmentCSCBeamHaloSelectorModule.cc
  AlignmentCSCTrackSelectorModule.cc
  AlignmentTrackSelectorModule.cc
  AlignmentMuonHIPTrajectorySelector.cc
)

target_include_directories(CommonAlignmentProducerSelectors PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /usr/include/python2.7/)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /usr/include/boost/serialization/)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /usr/include/boost/)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /usr/include/boost/python/)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /usr/include/root/)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CommonAlignmentProducerSelectors PUBLIC /usr/include/boost/regex/)

add_library(AlignmentCommonAlignmentProducerGlobal OBJECT 
  GlobalTrackerMuonAlignment.cc
)

target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /usr/include/root/)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCommonAlignmentProducerGlobal PUBLIC /usr/include/boost/regex/)

add_library(AlignmentCommonAlignmentProducerFilter OBJECT 
  LSNumberFilter.cc
)

target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /usr/include/root/)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCommonAlignmentProducerFilter PUBLIC /usr/include/boost/regex/)

