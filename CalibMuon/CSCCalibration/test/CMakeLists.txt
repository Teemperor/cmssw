add_library(CSCCrosstalkPopConAnalyzer OBJECT 
  stubs/CSCCrosstalkHandler.cc
  stubs/CSCCrosstalkPopConAnalyzer.cc
)

target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCCrosstalkPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCFakeCrosstalkPopConAnalyzer OBJECT 
  stubs/CSCFakeDBCrosstalkHandler.cc
  stubs/CSCFakeCrosstalkPopConAnalyzer.cc
)

target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCFakeCrosstalkPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCGainsPopConAnalyzer OBJECT 
  stubs/CSCGainsHandler.cc
  stubs/CSCGainsPopConAnalyzer.cc
)

target_include_directories(CSCGainsPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCGainsPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCFakeGainsPopConAnalyzer OBJECT 
  stubs/CSCFakeDBGainsHandler.cc
  stubs/CSCFakeGainsPopConAnalyzer.cc
)

target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCFakeGainsPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCNoiseMatrixPopConAnalyzer OBJECT 
  stubs/CSCNoiseMatrixHandler.cc
  stubs/CSCNoiseMatrixPopConAnalyzer.cc
)

target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCNoiseMatrixPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCFakeNoiseMatrixPopConAnalyzer OBJECT 
  stubs/CSCFakeDBNoiseMatrixHandler.cc
  stubs/CSCFakeNoiseMatrixPopConAnalyzer.cc
)

target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCFakeNoiseMatrixPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCPedestalsPopConAnalyzer OBJECT 
  stubs/CSCPedestalsHandler.cc
  stubs/CSCPedestalsPopConAnalyzer.cc
)

target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCPedestalsPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCFakePedestalsPopConAnalyzer OBJECT 
  stubs/CSCFakeDBPedestalsHandler.cc
  stubs/CSCFakePedestalsPopConAnalyzer.cc
)

target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCFakePedestalsPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCBadStripsPopConAnalyzer OBJECT 
  stubs/CSCBadStripsHandler.cc
  stubs/CSCBadStripsPopConAnalyzer.cc
)

target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCBadStripsPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCBadWiresPopConAnalyzer OBJECT 
  stubs/CSCBadWiresHandler.cc
  stubs/CSCBadWiresPopConAnalyzer.cc
)

target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCBadWiresPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCL1TPParametersPopConAnalyzer OBJECT 
  stubs/CSCL1TPParametersHandler.cc
  stubs/CSCL1TPParametersPopConAnalyzer.cc
)

target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCL1TPParametersPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCDBL1TPParametersPopConAnalyzer OBJECT 
  stubs/CSCDBL1TPParametersHandler.cc
  stubs/CSCDBL1TPParametersPopConAnalyzer.cc
)

target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCDBL1TPParametersPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCBadChambersPopConAnalyzer OBJECT 
  stubs/CSCBadChambersHandler.cc
  stubs/CSCBadChambersPopConAnalyzer.cc
)

target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCBadChambersPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCChipSpeedCorrectionPopConAnalyzer OBJECT 
  stubs/CSCDBChipSpeedCorrectionHandler.cc
  stubs/CSCChipSpeedCorrectionPopConAnalyzer.cc
)

target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCChipSpeedCorrectionPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCGasGainCorrectionPopConAnalyzer OBJECT 
  stubs/CSCDBGasGainCorrectionHandler.cc
  stubs/CSCGasGainCorrectionPopConAnalyzer.cc
)

target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCGasGainCorrectionPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(Compare OBJECT 
  stubs/Compare.cc
)

target_include_directories(Compare PUBLIC /usr/include/python2.7/)
target_include_directories(Compare PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Compare PUBLIC /usr/include/boost/serialization/)
target_include_directories(Compare PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(Compare PUBLIC /usr/include/boost/)
target_include_directories(Compare PUBLIC /usr/include/boost/python/)
target_include_directories(Compare PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Compare PUBLIC /usr/include/root/)
target_include_directories(Compare PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(Compare PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Compare PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(Compare PUBLIC /usr/include/boost/regex/)

add_library(testCSCIndexerAnalyzer OBJECT 
  stubs/CSCIndexerAnalyzer.cc
)

target_include_directories(testCSCIndexerAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /usr/include/root/)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testCSCIndexerAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(testCSCIndexerAnalyzer2 OBJECT 
  stubs/CSCIndexerAnalyzer2.cc
)

target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /usr/include/boost/)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /usr/include/root/)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testCSCIndexerAnalyzer2 PUBLIC /usr/include/boost/regex/)

add_library(testCSCMapperTestStartup OBJECT 
  stubs/CSCMapperTestStartup.cc
)

target_include_directories(testCSCMapperTestStartup PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCMapperTestStartup PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCMapperTestStartup PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCMapperTestStartup PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testCSCMapperTestStartup PUBLIC /usr/include/boost/)
target_include_directories(testCSCMapperTestStartup PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCMapperTestStartup PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCMapperTestStartup PUBLIC /usr/include/root/)
target_include_directories(testCSCMapperTestStartup PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testCSCMapperTestStartup PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCMapperTestStartup PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testCSCMapperTestStartup PUBLIC /usr/include/boost/regex/)

add_library(testCSCMapperTestPostls1 OBJECT 
  stubs/CSCMapperTestPostls1.cc
)

target_include_directories(testCSCMapperTestPostls1 PUBLIC /usr/include/python2.7/)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /usr/include/boost/)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /usr/include/boost/python/)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /usr/include/root/)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testCSCMapperTestPostls1 PUBLIC /usr/include/boost/regex/)

add_library(testIndexer OBJECT 
  testCSCIndexer.cc
  old_indexers/CSCIndexerOldStartup.cc
  old_indexers/CSCIndexerOldPostls1.cc
)

target_include_directories(testIndexer PUBLIC /usr/include/python2.7/)
target_include_directories(testIndexer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testIndexer PUBLIC /usr/include/boost/serialization/)
target_include_directories(testIndexer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testIndexer PUBLIC /usr/include/boost/)
target_include_directories(testIndexer PUBLIC /usr/include/boost/python/)
target_include_directories(testIndexer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testIndexer PUBLIC /usr/include/root/)
target_include_directories(testIndexer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testIndexer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testIndexer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testIndexer PUBLIC /usr/include/boost/regex/)

