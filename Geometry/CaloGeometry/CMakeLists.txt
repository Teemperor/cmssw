add_subdirectory(test)
add_library(GeometryCaloGeometry OBJECT 
  src/IdealZPrism.cc
  src/PreshowerStrip.cc
  src/CaloCellGeometry.cc
  src/CaloNumberingScheme.cc
  src/CaloGenericDetId.cc
  src/TruncatedPyramid.cc
  src/CaloGeometry.cc
  src/FlatTrd.cc
  src/CaloSubdetectorGeometry.cc
  src/ES_CaloGeometry.cc
  src/CaloCellCrossing.cc
  src/EcalTrapezoidParameters.cc
  src/ES_CaloSubdetectorGeometry.cc
  src/IdealObliquePrism.cc
)

target_include_directories(GeometryCaloGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryCaloGeometry PUBLIC /usr/include/root/)
target_include_directories(GeometryCaloGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryCaloGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryCaloGeometry PUBLIC /usr/include/boost/)
target_include_directories(GeometryCaloGeometry PUBLIC /usr/include/boost/regex/)

