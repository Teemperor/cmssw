add_subdirectory(test)
add_library(GeometryCSCGeometry OBJECT 
  src/CSCGangedWireGrouping.cc
  src/CSCStripTopology.cc
  src/CSCWireGeometry.cc
  src/CSCWireTopology.cc
  src/CSCGattiFunction.cc
  src/CSCLayerGeometry.cc
  src/CSCChamberSpecs.cc
  src/CSCLayer.cc
  src/CSCSlantedWireGeometry.cc
  src/CSCChamber.cc
  src/CSCGeometry.cc
  src/OffsetRadialStripTopology.cc
  src/ES_CSCGeometry.cc
)

target_include_directories(GeometryCSCGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryCSCGeometry PUBLIC /usr/include/root/)
target_include_directories(GeometryCSCGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryCSCGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryCSCGeometry PUBLIC /usr/include/boost/)
target_include_directories(GeometryCSCGeometry PUBLIC /usr/include/boost/regex/)

