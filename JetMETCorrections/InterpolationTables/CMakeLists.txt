add_library(JetMETCorrectionsInterpolationTables OBJECT 
  src/GridAxis.cc
  src/EquidistantSequence.cc
  src/UniformAxis.cc
  src/ArrayRange.cc
  src/DualAxis.cc
  src/DualHistoAxis.cc
  src/ArrayNDScanner.cc
  src/StorableMultivariateFunctor.cc
  src/StorableMultivariateFunctorReader.cc
  src/convertAxis.cc
  src/NUHistoAxis.cc
  src/HistoAxis.cc
  src/ArrayShape.cc
)

target_include_directories(JetMETCorrectionsInterpolationTables PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(JetMETCorrectionsInterpolationTables PUBLIC /home/teemperor/cms/md5/)
target_include_directories(JetMETCorrectionsInterpolationTables PUBLIC /usr/include/boost/filesystem/)
target_include_directories(JetMETCorrectionsInterpolationTables PUBLIC /usr/include/boost/)
target_include_directories(JetMETCorrectionsInterpolationTables PUBLIC /usr/include/root/)
target_include_directories(JetMETCorrectionsInterpolationTables PUBLIC /usr/include/boost/regex/)

