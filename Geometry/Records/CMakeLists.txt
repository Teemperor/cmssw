add_library(GeometryRecords OBJECT 
  src/MuonGeometryRecord.cc
  src/PCaloTowerRcd.cc
  src/PHGCalParametersRcd.cc
  src/CastorGeometryRecord.cc
  src/HcalGeometryRecord.cc
  src/CaloGeometryRecord.cc
  src/HcalRecNumberingRecord.cc
  src/TrackerTopologyRcd.cc
  src/PTrackerParametersRcd.cc
  src/ME0RecoGeometryRcd.cc
  src/EcalPreshowerGeometryRecord.cc
  src/EcalEndcapGeometryRecord.cc
  src/PGeometricDetExtraRcd.cc
  src/RPCRecoGeometryRcd.cc
  src/GeometryFileRcd.cc
  src/CaloTopologyRecord.cc
  src/CSCRecoGeometryRcd.cc
  src/PHcalRcd.cc
  src/PHGCalRcd.cc
  src/FastTimeGeometryRecord.cc
  src/PZdcRcd.cc
  src/CSCRecoDigiParametersRcd.cc
  src/ES_MuonDDDConstants.cc
  src/MuonNumberingRecord.cc
  src/IdealGeometryRecord.cc
  src/GlobalTrackingGeometryRecord.cc
  src/GEMRecoGeometryRcd.cc
  src/PEcalBarrelRcd.cc
  src/DTRecoGeometryRcd.cc
  src/PFastTimeParametersRcd.cc
  src/HGCalGeometryRecord.cc
  src/VeryForwardMisalignedGeometryRecord.cc
  src/EcalBarrelGeometryRecord.cc
  src/HcalSimNumberingRecord.cc
  src/StackedTrackerGeometryRecord.cc
  src/TrackerDigiGeometryRecord.cc
  src/EcalGeometryDescriptionRcd.cc
  src/CaloTowerGeometryRecord.cc
  src/PEcalEndcapRcd.cc
  src/PCastorRcd.cc
  src/VeryForwardRealGeometryRecord.cc
  src/PEcalPreshowerRcd.cc
  src/HcalParametersRcd.cc
  src/ZDCGeometryRecord.cc
  src/PFastTimeRcd.cc
)

target_include_directories(GeometryRecords PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryRecords PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryRecords PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryRecords PUBLIC /usr/include/root/)
target_include_directories(GeometryRecords PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryRecords PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryRecords PUBLIC /usr/include/boost/)
target_include_directories(GeometryRecords PUBLIC /usr/include/boost/regex/)

