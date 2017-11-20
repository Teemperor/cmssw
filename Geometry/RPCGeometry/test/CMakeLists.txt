add_library(testGeometryRPCGeometry OBJECT 
  RPCGeometryAnalyzer.cc
)

target_include_directories(testGeometryRPCGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryRPCGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryRPCGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryRPCGeometry PUBLIC /usr/include/root/)
target_include_directories(testGeometryRPCGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryRPCGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryRPCGeometry PUBLIC /usr/include/boost/)
target_include_directories(testGeometryRPCGeometry PUBLIC /usr/include/boost/regex/)

add_library(testGeometryRPCSector OBJECT 
  RPCSectorAnalyzer.cc
)

target_include_directories(testGeometryRPCSector PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryRPCSector PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryRPCSector PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryRPCSector PUBLIC /usr/include/root/)
target_include_directories(testGeometryRPCSector PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryRPCSector PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryRPCSector PUBLIC /usr/include/boost/)
target_include_directories(testGeometryRPCSector PUBLIC /usr/include/boost/regex/)

add_library(testGeometryRPCRadii OBJECT 
  RPCRadiiAnalyzer.cc
)

target_include_directories(testGeometryRPCRadii PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryRPCRadii PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryRPCRadii PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryRPCRadii PUBLIC /usr/include/root/)
target_include_directories(testGeometryRPCRadii PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryRPCRadii PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryRPCRadii PUBLIC /usr/include/boost/)
target_include_directories(testGeometryRPCRadii PUBLIC /usr/include/boost/regex/)

add_library(testGeometryRPCGEO OBJECT 
  RPCGEO.cc
)

target_include_directories(testGeometryRPCGEO PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryRPCGEO PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryRPCGEO PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryRPCGEO PUBLIC /usr/include/root/)
target_include_directories(testGeometryRPCGEO PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryRPCGEO PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryRPCGEO PUBLIC /usr/include/boost/)
target_include_directories(testGeometryRPCGEO PUBLIC /usr/include/boost/regex/)

add_library(testGeometryRPCGEO2 OBJECT 
  RPCGEO2.cc
)

target_include_directories(testGeometryRPCGEO2 PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryRPCGEO2 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryRPCGEO2 PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryRPCGEO2 PUBLIC /usr/include/root/)
target_include_directories(testGeometryRPCGEO2 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryRPCGEO2 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryRPCGEO2 PUBLIC /usr/include/boost/)
target_include_directories(testGeometryRPCGEO2 PUBLIC /usr/include/boost/regex/)

add_library(testGeometryRPCCSC OBJECT 
  RPCCSC.cc
)

target_include_directories(testGeometryRPCCSC PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryRPCCSC PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryRPCCSC PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryRPCCSC PUBLIC /usr/include/root/)
target_include_directories(testGeometryRPCCSC PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryRPCCSC PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryRPCCSC PUBLIC /usr/include/boost/)
target_include_directories(testGeometryRPCCSC PUBLIC /usr/include/boost/regex/)

