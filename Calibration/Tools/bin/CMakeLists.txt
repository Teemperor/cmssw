add_library(coeffCompareInvEE OBJECT 
  coeffCompareInvEE.cpp
  trivialParser.cc
)

target_include_directories(coeffCompareInvEE PUBLIC /usr/include/boost/iostreams/)
target_include_directories(coeffCompareInvEE PUBLIC /usr/include/python2.7/)
target_include_directories(coeffCompareInvEE PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(coeffCompareInvEE PUBLIC /home/teemperor/cms/md5/)
target_include_directories(coeffCompareInvEE PUBLIC /usr/include/boost/serialization/)
target_include_directories(coeffCompareInvEE PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(coeffCompareInvEE PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(coeffCompareInvEE PUBLIC /usr/include/boost/)
target_include_directories(coeffCompareInvEE PUBLIC /usr/include/eigen3/)
target_include_directories(coeffCompareInvEE PUBLIC /usr/include/boost/python/)
target_include_directories(coeffCompareInvEE PUBLIC /usr/include/boost/filesystem/)
target_include_directories(coeffCompareInvEE PUBLIC /usr/include/root/)
target_include_directories(coeffCompareInvEE PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(coeffCompareInvEE PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(coeffCompareInvEE PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(coeffCompareInvEE PUBLIC /usr/include/boost/regex/)

add_library(coeffCompare OBJECT 
  coeffCompare.cpp
  trivialParser.cc
)

target_include_directories(coeffCompare PUBLIC /usr/include/boost/iostreams/)
target_include_directories(coeffCompare PUBLIC /usr/include/python2.7/)
target_include_directories(coeffCompare PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(coeffCompare PUBLIC /home/teemperor/cms/md5/)
target_include_directories(coeffCompare PUBLIC /usr/include/boost/serialization/)
target_include_directories(coeffCompare PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(coeffCompare PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(coeffCompare PUBLIC /usr/include/boost/)
target_include_directories(coeffCompare PUBLIC /usr/include/eigen3/)
target_include_directories(coeffCompare PUBLIC /usr/include/boost/python/)
target_include_directories(coeffCompare PUBLIC /usr/include/boost/filesystem/)
target_include_directories(coeffCompare PUBLIC /usr/include/root/)
target_include_directories(coeffCompare PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(coeffCompare PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(coeffCompare PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(coeffCompare PUBLIC /usr/include/boost/regex/)

add_library(viewCoeffEB OBJECT 
  viewCoeffEB.cpp
)

target_include_directories(viewCoeffEB PUBLIC /usr/include/boost/iostreams/)
target_include_directories(viewCoeffEB PUBLIC /usr/include/python2.7/)
target_include_directories(viewCoeffEB PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(viewCoeffEB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(viewCoeffEB PUBLIC /usr/include/boost/serialization/)
target_include_directories(viewCoeffEB PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(viewCoeffEB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(viewCoeffEB PUBLIC /usr/include/boost/)
target_include_directories(viewCoeffEB PUBLIC /usr/include/eigen3/)
target_include_directories(viewCoeffEB PUBLIC /usr/include/boost/python/)
target_include_directories(viewCoeffEB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(viewCoeffEB PUBLIC /usr/include/root/)
target_include_directories(viewCoeffEB PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(viewCoeffEB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(viewCoeffEB PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(viewCoeffEB PUBLIC /usr/include/boost/regex/)

add_library(viewCoeffEE OBJECT 
  viewCoeffEE.cpp
)

target_include_directories(viewCoeffEE PUBLIC /usr/include/boost/iostreams/)
target_include_directories(viewCoeffEE PUBLIC /usr/include/python2.7/)
target_include_directories(viewCoeffEE PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(viewCoeffEE PUBLIC /home/teemperor/cms/md5/)
target_include_directories(viewCoeffEE PUBLIC /usr/include/boost/serialization/)
target_include_directories(viewCoeffEE PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(viewCoeffEE PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(viewCoeffEE PUBLIC /usr/include/boost/)
target_include_directories(viewCoeffEE PUBLIC /usr/include/eigen3/)
target_include_directories(viewCoeffEE PUBLIC /usr/include/boost/python/)
target_include_directories(viewCoeffEE PUBLIC /usr/include/boost/filesystem/)
target_include_directories(viewCoeffEE PUBLIC /usr/include/root/)
target_include_directories(viewCoeffEE PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(viewCoeffEE PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(viewCoeffEE PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(viewCoeffEE PUBLIC /usr/include/boost/regex/)

add_library(mergeXMLEB OBJECT 
  mergeXMLEB.cpp
  trivialParser.cc
)

target_include_directories(mergeXMLEB PUBLIC /usr/include/boost/iostreams/)
target_include_directories(mergeXMLEB PUBLIC /usr/include/python2.7/)
target_include_directories(mergeXMLEB PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(mergeXMLEB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(mergeXMLEB PUBLIC /usr/include/boost/serialization/)
target_include_directories(mergeXMLEB PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(mergeXMLEB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(mergeXMLEB PUBLIC /usr/include/boost/)
target_include_directories(mergeXMLEB PUBLIC /usr/include/eigen3/)
target_include_directories(mergeXMLEB PUBLIC /usr/include/boost/python/)
target_include_directories(mergeXMLEB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(mergeXMLEB PUBLIC /usr/include/root/)
target_include_directories(mergeXMLEB PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(mergeXMLEB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(mergeXMLEB PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(mergeXMLEB PUBLIC /usr/include/boost/regex/)

add_library(mergeXMLEE OBJECT 
  mergeXMLEE.cpp
  trivialParser.cc
)

target_include_directories(mergeXMLEE PUBLIC /usr/include/boost/iostreams/)
target_include_directories(mergeXMLEE PUBLIC /usr/include/python2.7/)
target_include_directories(mergeXMLEE PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(mergeXMLEE PUBLIC /home/teemperor/cms/md5/)
target_include_directories(mergeXMLEE PUBLIC /usr/include/boost/serialization/)
target_include_directories(mergeXMLEE PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(mergeXMLEE PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(mergeXMLEE PUBLIC /usr/include/boost/)
target_include_directories(mergeXMLEE PUBLIC /usr/include/eigen3/)
target_include_directories(mergeXMLEE PUBLIC /usr/include/boost/python/)
target_include_directories(mergeXMLEE PUBLIC /usr/include/boost/filesystem/)
target_include_directories(mergeXMLEE PUBLIC /usr/include/root/)
target_include_directories(mergeXMLEE PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(mergeXMLEE PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(mergeXMLEE PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(mergeXMLEE PUBLIC /usr/include/boost/regex/)

add_library(recalibEB OBJECT 
  recalibEB.cpp
)

target_include_directories(recalibEB PUBLIC /usr/include/boost/iostreams/)
target_include_directories(recalibEB PUBLIC /usr/include/python2.7/)
target_include_directories(recalibEB PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(recalibEB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(recalibEB PUBLIC /usr/include/boost/serialization/)
target_include_directories(recalibEB PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(recalibEB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(recalibEB PUBLIC /usr/include/boost/)
target_include_directories(recalibEB PUBLIC /usr/include/eigen3/)
target_include_directories(recalibEB PUBLIC /usr/include/boost/python/)
target_include_directories(recalibEB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(recalibEB PUBLIC /usr/include/root/)
target_include_directories(recalibEB PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(recalibEB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(recalibEB PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(recalibEB PUBLIC /usr/include/boost/regex/)

add_library(recalibEE OBJECT 
  recalibEE.cpp
)

target_include_directories(recalibEE PUBLIC /usr/include/boost/iostreams/)
target_include_directories(recalibEE PUBLIC /usr/include/python2.7/)
target_include_directories(recalibEE PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(recalibEE PUBLIC /home/teemperor/cms/md5/)
target_include_directories(recalibEE PUBLIC /usr/include/boost/serialization/)
target_include_directories(recalibEE PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(recalibEE PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(recalibEE PUBLIC /usr/include/boost/)
target_include_directories(recalibEE PUBLIC /usr/include/eigen3/)
target_include_directories(recalibEE PUBLIC /usr/include/boost/python/)
target_include_directories(recalibEE PUBLIC /usr/include/boost/filesystem/)
target_include_directories(recalibEE PUBLIC /usr/include/root/)
target_include_directories(recalibEE PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(recalibEE PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(recalibEE PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(recalibEE PUBLIC /usr/include/boost/regex/)

add_library(solveCalibSys OBJECT 
  solveCalibSys.cpp
)

target_include_directories(solveCalibSys PUBLIC /usr/include/boost/iostreams/)
target_include_directories(solveCalibSys PUBLIC /usr/include/python2.7/)
target_include_directories(solveCalibSys PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(solveCalibSys PUBLIC /home/teemperor/cms/md5/)
target_include_directories(solveCalibSys PUBLIC /usr/include/boost/serialization/)
target_include_directories(solveCalibSys PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(solveCalibSys PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(solveCalibSys PUBLIC /usr/include/boost/)
target_include_directories(solveCalibSys PUBLIC /usr/include/eigen3/)
target_include_directories(solveCalibSys PUBLIC /usr/include/boost/python/)
target_include_directories(solveCalibSys PUBLIC /usr/include/boost/filesystem/)
target_include_directories(solveCalibSys PUBLIC /usr/include/root/)
target_include_directories(solveCalibSys PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(solveCalibSys PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(solveCalibSys PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(solveCalibSys PUBLIC /usr/include/boost/regex/)

