add_library(testGeometryHcalTopology OBJECT 
  HcalTopologyTester.cc
)

target_include_directories(testGeometryHcalTopology PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryHcalTopology PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryHcalTopology PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryHcalTopology PUBLIC /usr/include/root/)
target_include_directories(testGeometryHcalTopology PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryHcalTopology PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryHcalTopology PUBLIC /usr/include/boost/)
target_include_directories(testGeometryHcalTopology PUBLIC /usr/include/boost/regex/)

add_library(testGeometryHGCalTopology OBJECT 
  HGCalTopologyTester.cc
)

target_include_directories(testGeometryHGCalTopology PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryHGCalTopology PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryHGCalTopology PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryHGCalTopology PUBLIC /usr/include/root/)
target_include_directories(testGeometryHGCalTopology PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryHGCalTopology PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryHGCalTopology PUBLIC /usr/include/boost/)
target_include_directories(testGeometryHGCalTopology PUBLIC /usr/include/boost/regex/)

add_library(testGeometryCaloTowerTopology OBJECT 
  CaloTowerTopologyTester.cc
)

target_include_directories(testGeometryCaloTowerTopology PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryCaloTowerTopology PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryCaloTowerTopology PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryCaloTowerTopology PUBLIC /usr/include/root/)
target_include_directories(testGeometryCaloTowerTopology PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryCaloTowerTopology PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryCaloTowerTopology PUBLIC /usr/include/boost/)
target_include_directories(testGeometryCaloTowerTopology PUBLIC /usr/include/boost/regex/)

add_library(testGeometryFastTimeTopology OBJECT 
  FastTimeTopologyTester.cc
)

target_include_directories(testGeometryFastTimeTopology PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryFastTimeTopology PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryFastTimeTopology PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryFastTimeTopology PUBLIC /usr/include/root/)
target_include_directories(testGeometryFastTimeTopology PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryFastTimeTopology PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryFastTimeTopology PUBLIC /usr/include/boost/)
target_include_directories(testGeometryFastTimeTopology PUBLIC /usr/include/boost/regex/)

