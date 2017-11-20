add_subdirectory(test)
add_library(AlignmentGeners OBJECT 
  src/ContiguousCatalog.cc
  src/stringArchiveIO.cc
  src/BZ2Handle.cc
  src/CatalogEntry.cc
  src/ClassId.cc
  src/CStringBuf.cc
  src/AbsArchive.cc
  src/GeneralCatalog.cc
  src/ItemDescriptor.cc
  src/SearchSpecifier.cc
  src/ItemLocation.cc
  src/BinaryArchiveBase.cc
  src/WriteOnlyCatalog.cc
  src/BinaryFileArchive.cc
  src/AbsReference.cc
  src/ColumnBuffer.cc
  src/CStringStream.cc
  src/ZlibHandle.cc
  src/CharBuffer.cc
  src/uriUtils.cc
  src/CatalogIO.cc
  src/MultiFileArchive.cc
  src/StringArchive.cc
)

target_include_directories(AlignmentGeners PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentGeners PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentGeners PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentGeners PUBLIC /usr/include/boost/)
target_include_directories(AlignmentGeners PUBLIC /usr/include/root/)
target_include_directories(AlignmentGeners PUBLIC /usr/include/boost/regex/)

