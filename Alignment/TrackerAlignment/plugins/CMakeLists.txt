add_library(AlignmentTrackerAlignmentPlugin OBJECT 
  MisalignedTrackerESProducer.cc
  TrackerSystematicMisalignments.cc
)

target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /usr/include/boost/)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /usr/include/root/)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentTrackerAlignmentPlugin PUBLIC /usr/include/boost/regex/)

add_library(AlignmentTrackerAlignmentSkimPlugin OBJECT 
  AlignmentPrescaler.cc
  TkAlCaSkimTreeMerger.cc
  TkAlCaOverlapTagger.cc
)

target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /usr/include/boost/)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /usr/include/root/)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentTrackerAlignmentSkimPlugin PUBLIC /usr/include/boost/regex/)

add_library(AlignmentTrackerTreeGeneratorPlugins OBJECT 
  TrackerTreeGenerator.cc
)

target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /usr/include/boost/)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /usr/include/root/)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentTrackerTreeGeneratorPlugins PUBLIC /usr/include/boost/regex/)

add_library(AlignmentTrackerAlignmentRecordGeneratorPlugins OBJECT 
  CreateTrackerAlignmentRcds.cc
)

target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /usr/include/boost/)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /usr/include/root/)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentTrackerAlignmentRecordGeneratorPlugins PUBLIC /usr/include/boost/regex/)

add_library(AlignmentCosmicRateAnalyzerPlugins OBJECT 
  CosmicRateAnalyzer.cc
)

target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /usr/include/root/)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCosmicRateAnalyzerPlugins PUBLIC /usr/include/boost/regex/)

