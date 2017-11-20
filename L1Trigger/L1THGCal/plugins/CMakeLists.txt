add_library(L1TriggerL1THGCalPlugins OBJECT 
  HGCalTriggerGeometryESProducer.cc
  HGCalTriggerDigiProducer.cc
  HGCalTriggerDigiFEReproducer.cc
)

target_include_directories(L1TriggerL1THGCalPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1THGCalPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1THGCalPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1THGCalPlugins PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1THGCalPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1THGCalPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1THGCalPlugins PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1THGCalPlugins PUBLIC /usr/include/boost/regex/)

add_library(L1TriggerL1THGCalPlugins_geometries OBJECT 
  geometries/TrivialGeometry.cc
  geometries/HGCalTriggerGeometryImp1.cc
  geometries/NullGeometry.cc
  geometries/HGCalTriggerGeometryHexImp1.cc
  geometries/HGCalTriggerGeometryHexImp2.cc
)

target_include_directories(L1TriggerL1THGCalPlugins_geometries PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1THGCalPlugins_geometries PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1THGCalPlugins_geometries PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1THGCalPlugins_geometries PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1THGCalPlugins_geometries PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1THGCalPlugins_geometries PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1THGCalPlugins_geometries PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1THGCalPlugins_geometries PUBLIC /usr/include/boost/regex/)

add_library(L1TriggerL1THGCalPlugins_fe_be OBJECT 
  fe_codecs/HGCal64BitRandomCodec.cc
  fe_codecs/HGCalTriggerCellBestChoiceCodec.cc
  fe_codecs/HGCalTriggerCellThresholdCodec.cc
  fe_codecs/HGCalBestChoiceCodec.cc
  be_algorithms/HGCClusterAlgo.cc
  be_algorithms/RandomClusterAlgo.cc
  be_algorithms/SingleCellClusterAlgo.cc
  be_algorithms/FullModuleSumAlgo.cc
  be_algorithms/HGCalSimCluster.cc
)

target_include_directories(L1TriggerL1THGCalPlugins_fe_be PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1THGCalPlugins_fe_be PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1THGCalPlugins_fe_be PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1THGCalPlugins_fe_be PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1THGCalPlugins_fe_be PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1THGCalPlugins_fe_be PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1THGCalPlugins_fe_be PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1THGCalPlugins_fe_be PUBLIC /usr/include/boost/regex/)

add_library(L1TriggerL1THGCalPlugins_ntuples OBJECT 
  ntuples/HGCalTriggerNtupleEvent.cc
  ntuples/HGCalTriggerNtupleHGCDigis.cc
  ntuples/HGCalTriggerNtupleHGCClusters.cc
  ntuples/HGCalTriggerNtupleHGCMulticlusters.cc
  ntuples/HGCalTriggerNtupleManager.cc
  ntuples/HGCalTriggerNtupleGen.cc
  ntuples/HGCalTriggerNtupleHGCTriggerCells.cc
)

target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1THGCalPlugins_ntuples PUBLIC /usr/include/boost/regex/)

