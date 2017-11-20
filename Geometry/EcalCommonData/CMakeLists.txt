add_subdirectory(plugins)
add_library(GeometryEcalCommonData OBJECT 
  src/EcalNumberingScheme.cc
  src/ESTBNumberingScheme.cc
  src/DDEcalBarrelNewAlgo.cc
  src/DDEcalEndcapTrap.cc
  src/DDEcalPreshowerAlgo.cc
  src/DDEcalEndcapAlgo.cc
  src/EcalEndcapNumberingScheme.cc
  src/DDEcalAPDAlgo.cc
  src/EcalBarrelNumberingScheme.cc
  src/EcalPreshowerNumberingScheme.cc
  src/EcalBaseNumber.cc
  src/DDEcalBarrelAlgo.cc
)

target_include_directories(GeometryEcalCommonData PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryEcalCommonData PUBLIC /usr/include/root/)
target_include_directories(GeometryEcalCommonData PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryEcalCommonData PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryEcalCommonData PUBLIC /usr/include/boost/)
target_include_directories(GeometryEcalCommonData PUBLIC /usr/include/boost/regex/)

