add_subdirectory(test)
add_library(GeometryCaloTopology OBJECT 
  src/CaloSubdetectorTopology.cc
  src/EcalPreshowerTopology.cc
  src/HcalTopologyMode.cc
  src/CaloTopology.cc
  src/CaloTowerConstituentsMap.cc
  src/HGCalTopology.cc
  src/HcalTopology.cc
  src/EcalEndcapHardcodedTopology.cc
  src/ES_CaloTopogy.cc
  src/ES_Topologies.cc
  src/ES_CaloSubdetectorTopology.cc
  src/FastTimeTopology.cc
  src/EcalTrigTowerConstituentsMap.cc
  src/CaloTowerTopology.cc
  src/EcalBarrelTopology.cc
  src/EcalBarrelHardcodedTopology.cc
  src/HcalTopologyRestrictionParser.cc
  src/EcalEndcapTopology.cc
  src/CaloDirection.cc
)

target_include_directories(GeometryCaloTopology PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryCaloTopology PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryCaloTopology PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryCaloTopology PUBLIC /usr/include/root/)
target_include_directories(GeometryCaloTopology PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryCaloTopology PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryCaloTopology PUBLIC /usr/include/boost/)
target_include_directories(GeometryCaloTopology PUBLIC /usr/include/boost/regex/)

