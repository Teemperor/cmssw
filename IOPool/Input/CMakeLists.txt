add_library(IOPoolInput OBJECT 
  src/RootEmbeddedFileSequence.cc
  src/InputFile.cc
  src/DuplicateChecker.cc
  src/RootInputFileSequence.cc
  src/RootFile.cc
  src/PoolSource.cc
  src/RootPrimaryFileSequence.cc
  src/RootTree.cc
  src/Module.cc
  src/RootDelayedReader.cc
  src/ProvenanceAdaptor.cc
  src/RootSecondaryFileSequence.cc
  src/RunHelper.cc
  src/EmbeddedRootSource.cc
)

target_include_directories(IOPoolInput PUBLIC /usr/include/boost/python/)
target_include_directories(IOPoolInput PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IOPoolInput PUBLIC /usr/include/python2.7/)
target_include_directories(IOPoolInput PUBLIC /usr/include/root/)
target_include_directories(IOPoolInput PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IOPoolInput PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IOPoolInput PUBLIC /usr/include/boost/)
target_include_directories(IOPoolInput PUBLIC /usr/include/boost/regex/)

