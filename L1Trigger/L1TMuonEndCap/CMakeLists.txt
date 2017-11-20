add_subdirectory(plugins)
add_library(L1TriggerL1TMuonEndCap OBJECT 
  src/PtRefinementUnitFactory.cc
  src/Utilities.cc
  src/PrimitiveConverter.cc
  src/Node.cc
  src/PtRefinementUnit.cc
  src/EMTFHitTools.cc
  src/MuonInternalTrack.cc
  src/PhiMemoryImage.cc
  src/ForestHelper.cc
  src/EndCapParamsHelper.cc
  src/PrimitiveConverterRPC.cc
  src/DTBunchCrossingCleaner.cc
  src/Forest.cc
  src/Tree.cc
  src/EMTFTrackTools.cc
  src/PtAssignmentUnit.cc
  src/PtAssignmentUnitFactory.cc
  src/PatternRecognition.cc
  src/TrackSeeder.cc
  src/PtAssignment.cc
  src/sp_tf.cpp
  src/core_gen_summer_2013/sp.cpp
  src/core_gen_summer_2013/vppc_sim_lib.cpp
  src/core_gen_summer_2013/coord_delay.cpp
  src/core_gen_summer_2013/ph_pattern_sector.cpp
  src/core_gen_summer_2013/deltas.cpp
  src/core_gen_summer_2013/zone_best3.cpp
  src/core_gen_summer_2013/best_delta.cpp
  src/core_gen_summer_2013/deltas_sector.cpp
  src/core_gen_summer_2013/extender.cpp
  src/core_gen_summer_2013/prim_conv11.cpp
  src/core_gen_summer_2013/ph_pattern.cpp
  src/core_gen_summer_2013/best_tracks.cpp
  src/core_gen_summer_2013/sp_wrap.cpp
  src/core_gen_summer_2013/match_ph_segments.cpp
  src/core_gen_summer_2013/zone_best.cpp
  src/core_gen_summer_2013/prim_conv_sector.cpp
  src/core_gen_summer_2013/zones.cpp
  src/core_gen_summer_2013/prim_conv.cpp
  src/core_gen_summer_2013/sort_sector.cpp
  src/core_gen_summer_2013/sp_wrap_tf.cpp
  src/core_gen_summer_2013/extend_sector.cpp
  src/core_gen_summer_2013/find_segment.cpp
)

target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerL1TMuonEndCap PUBLIC /usr/include/boost/regex/)

