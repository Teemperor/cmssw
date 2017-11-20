add_library(testCSCGeometry OBJECT 
  stubs/CSCGeometryAnalyzer.cc
)

target_include_directories(testCSCGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCGeometry PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testCSCGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCGeometry PUBLIC /usr/include/root/)
target_include_directories(testCSCGeometry PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testCSCGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCGeometry PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCGeometry PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testCSCGeometry PUBLIC /usr/include/boost/)
target_include_directories(testCSCGeometry PUBLIC /usr/include/boost/regex/)

add_library(testCSCGeometryAsChambers OBJECT 
  stubs/CSCGeometryAsChambers.cc
)

target_include_directories(testCSCGeometryAsChambers PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCGeometryAsChambers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testCSCGeometryAsChambers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCGeometryAsChambers PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCGeometryAsChambers PUBLIC /usr/include/root/)
target_include_directories(testCSCGeometryAsChambers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testCSCGeometryAsChambers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCGeometryAsChambers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCGeometryAsChambers PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCGeometryAsChambers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testCSCGeometryAsChambers PUBLIC /usr/include/boost/)
target_include_directories(testCSCGeometryAsChambers PUBLIC /usr/include/boost/regex/)

add_library(testCSCGeometryAsLayers OBJECT 
  stubs/CSCGeometryAsLayers.cc
)

target_include_directories(testCSCGeometryAsLayers PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCGeometryAsLayers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testCSCGeometryAsLayers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCGeometryAsLayers PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCGeometryAsLayers PUBLIC /usr/include/root/)
target_include_directories(testCSCGeometryAsLayers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testCSCGeometryAsLayers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCGeometryAsLayers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCGeometryAsLayers PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCGeometryAsLayers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testCSCGeometryAsLayers PUBLIC /usr/include/boost/)
target_include_directories(testCSCGeometryAsLayers PUBLIC /usr/include/boost/regex/)

add_library(testCSCGeometryOfWires OBJECT 
  stubs/CSCGeometryOfWires.cc
)

target_include_directories(testCSCGeometryOfWires PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCGeometryOfWires PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testCSCGeometryOfWires PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCGeometryOfWires PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCGeometryOfWires PUBLIC /usr/include/root/)
target_include_directories(testCSCGeometryOfWires PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testCSCGeometryOfWires PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCGeometryOfWires PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCGeometryOfWires PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCGeometryOfWires PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testCSCGeometryOfWires PUBLIC /usr/include/boost/)
target_include_directories(testCSCGeometryOfWires PUBLIC /usr/include/boost/regex/)

add_library(testCSCGeometryOfStrips OBJECT 
  stubs/CSCGeometryOfStrips.cc
)

target_include_directories(testCSCGeometryOfStrips PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCGeometryOfStrips PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testCSCGeometryOfStrips PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCGeometryOfStrips PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCGeometryOfStrips PUBLIC /usr/include/root/)
target_include_directories(testCSCGeometryOfStrips PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testCSCGeometryOfStrips PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCGeometryOfStrips PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCGeometryOfStrips PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCGeometryOfStrips PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testCSCGeometryOfStrips PUBLIC /usr/include/boost/)
target_include_directories(testCSCGeometryOfStrips PUBLIC /usr/include/boost/regex/)

add_library(testCSCLayerGeometryInside OBJECT 
  stubs/CSCLayerGeometryInside.cc
)

target_include_directories(testCSCLayerGeometryInside PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCLayerGeometryInside PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testCSCLayerGeometryInside PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCLayerGeometryInside PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCLayerGeometryInside PUBLIC /usr/include/root/)
target_include_directories(testCSCLayerGeometryInside PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testCSCLayerGeometryInside PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCLayerGeometryInside PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCLayerGeometryInside PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCLayerGeometryInside PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testCSCLayerGeometryInside PUBLIC /usr/include/boost/)
target_include_directories(testCSCLayerGeometryInside PUBLIC /usr/include/boost/regex/)

add_library(testCSCGACwithB OBJECT 
  stubs/CSCGACwithB.cc
)

target_include_directories(testCSCGACwithB PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCGACwithB PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testCSCGACwithB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCGACwithB PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCGACwithB PUBLIC /usr/include/root/)
target_include_directories(testCSCGACwithB PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testCSCGACwithB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCGACwithB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCGACwithB PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCGACwithB PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testCSCGACwithB PUBLIC /usr/include/boost/)
target_include_directories(testCSCGACwithB PUBLIC /usr/include/boost/regex/)

