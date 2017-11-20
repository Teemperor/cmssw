add_library(testDataFormatsCommon OBJECT 
  testRunner.cpp
  testOwnVector.cc
  testOneToOneAssociation.cc
  testValueMap.cc
  testOneToManyAssociation.cc
  testAssociationVector.cc
  testAssociationNew.cc
  testValueMapNew.cc
  testSortedCollection.cc
  testRangeMap.cc
  testIDVectorMap.cc
  ref_t.cppunit.cc
  DetSetRefVector_t.cppunit.cc
  reftobase_t.cppunit.cc
  reftobasevector_t.cppunit.cc
  cloningptr_t.cppunit.cc
  ptr_t.cppunit.cc
  ptrvector_t.cppunit.cc
  containermask_t.cppunit.cc
  reftobaseprod_t.cppunit.cc
)

target_include_directories(testDataFormatsCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDataFormatsCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDataFormatsCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDataFormatsCommon PUBLIC /usr/include/boost/)
target_include_directories(testDataFormatsCommon PUBLIC /usr/include/root/)
target_include_directories(testDataFormatsCommon PUBLIC /usr/include/boost/regex/)

add_library(DetSetVector_t OBJECT 
  DetSetVector_t.cpp
)

target_include_directories(DetSetVector_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetSetVector_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetSetVector_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetSetVector_t PUBLIC /usr/include/boost/)
target_include_directories(DetSetVector_t PUBLIC /usr/include/root/)
target_include_directories(DetSetVector_t PUBLIC /usr/include/boost/regex/)

add_library(OwnVector_t OBJECT 
  OwnVector_t.cpp
)

target_include_directories(OwnVector_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(OwnVector_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(OwnVector_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(OwnVector_t PUBLIC /usr/include/boost/)
target_include_directories(OwnVector_t PUBLIC /usr/include/root/)
target_include_directories(OwnVector_t PUBLIC /usr/include/boost/regex/)

add_library(DictionaryTools_t OBJECT 
  DictionaryTools_t.cpp
)

target_include_directories(DictionaryTools_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DictionaryTools_t PUBLIC /usr/include/root/)
target_include_directories(DictionaryTools_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DictionaryTools_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DictionaryTools_t PUBLIC /usr/include/boost/)
target_include_directories(DictionaryTools_t PUBLIC /usr/include/boost/regex/)

add_library(Wrapper_t OBJECT 
  Wrapper_t.cpp
)

target_include_directories(Wrapper_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Wrapper_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Wrapper_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Wrapper_t PUBLIC /usr/include/boost/)
target_include_directories(Wrapper_t PUBLIC /usr/include/root/)
target_include_directories(Wrapper_t PUBLIC /usr/include/boost/regex/)

add_library(traits_t OBJECT 
  traits_t.cpp
)

target_include_directories(traits_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(traits_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(traits_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(traits_t PUBLIC /usr/include/boost/)
target_include_directories(traits_t PUBLIC /usr/include/root/)
target_include_directories(traits_t PUBLIC /usr/include/boost/regex/)

add_library(RefCore_t OBJECT 
  RefCore_t.cpp
)

target_include_directories(RefCore_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RefCore_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RefCore_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RefCore_t PUBLIC /usr/include/boost/)
target_include_directories(RefCore_t PUBLIC /usr/include/root/)
target_include_directories(RefCore_t PUBLIC /usr/include/boost/regex/)

add_library(Ref_t OBJECT 
  Ref_t.cpp
)

target_include_directories(Ref_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Ref_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Ref_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Ref_t PUBLIC /usr/include/boost/)
target_include_directories(Ref_t PUBLIC /usr/include/root/)
target_include_directories(Ref_t PUBLIC /usr/include/boost/regex/)

add_library(RefVector_t OBJECT 
  RefVector_t.cpp
)

target_include_directories(RefVector_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RefVector_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RefVector_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RefVector_t PUBLIC /usr/include/boost/)
target_include_directories(RefVector_t PUBLIC /usr/include/root/)
target_include_directories(RefVector_t PUBLIC /usr/include/boost/regex/)

add_library(DataFrame_t OBJECT 
  DataFrame_t.cpp
)

target_include_directories(DataFrame_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFrame_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFrame_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFrame_t PUBLIC /usr/include/boost/)
target_include_directories(DataFrame_t PUBLIC /usr/include/root/)
target_include_directories(DataFrame_t PUBLIC /usr/include/boost/regex/)

add_library(DetSetNew_t OBJECT 
  DetSetNew_t.cpp
)

target_include_directories(DetSetNew_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetSetNew_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetSetNew_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetSetNew_t PUBLIC /usr/include/boost/)
target_include_directories(DetSetNew_t PUBLIC /usr/include/root/)
target_include_directories(DetSetNew_t PUBLIC /usr/include/boost/regex/)

add_library(DetSetNewTS_t OBJECT 
  DetSetNewTS_t.cpp
)

target_include_directories(DetSetNewTS_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetSetNewTS_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetSetNewTS_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetSetNewTS_t PUBLIC /usr/include/boost/)
target_include_directories(DetSetNewTS_t PUBLIC /usr/include/root/)
target_include_directories(DetSetNewTS_t PUBLIC /usr/include/boost/regex/)

add_library(MapOfVectors_t OBJECT 
  MapOfVectors_t.cpp
)

target_include_directories(MapOfVectors_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MapOfVectors_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MapOfVectors_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MapOfVectors_t PUBLIC /usr/include/boost/)
target_include_directories(MapOfVectors_t PUBLIC /usr/include/root/)
target_include_directories(MapOfVectors_t PUBLIC /usr/include/boost/regex/)

add_library(exDSTV OBJECT 
  exDSTV.cpp
)

target_include_directories(exDSTV PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(exDSTV PUBLIC /home/teemperor/cms/md5/)
target_include_directories(exDSTV PUBLIC /usr/include/boost/filesystem/)
target_include_directories(exDSTV PUBLIC /usr/include/boost/)
target_include_directories(exDSTV PUBLIC /usr/include/root/)
target_include_directories(exDSTV PUBLIC /usr/include/boost/regex/)

add_library(Trie_t OBJECT 
  Trie_t.cpp
)

target_include_directories(Trie_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Trie_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Trie_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Trie_t PUBLIC /usr/include/boost/)
target_include_directories(Trie_t PUBLIC /usr/include/root/)
target_include_directories(Trie_t PUBLIC /usr/include/boost/regex/)

add_library(exTrie OBJECT 
  exTrie.cpp
)

target_include_directories(exTrie PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(exTrie PUBLIC /home/teemperor/cms/md5/)
target_include_directories(exTrie PUBLIC /usr/include/boost/filesystem/)
target_include_directories(exTrie PUBLIC /usr/include/boost/)
target_include_directories(exTrie PUBLIC /usr/include/root/)
target_include_directories(exTrie PUBLIC /usr/include/boost/regex/)

add_library(testBoostRange OBJECT 
  testBoostRange.cpp
)

target_include_directories(testBoostRange PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testBoostRange PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testBoostRange PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testBoostRange PUBLIC /usr/include/boost/)
target_include_directories(testBoostRange PUBLIC /usr/include/root/)
target_include_directories(testBoostRange PUBLIC /usr/include/boost/regex/)

add_library(testMultiAssociation OBJECT 
  testRunner.cpp
  testMultiAssociation.cc
)

target_include_directories(testMultiAssociation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testMultiAssociation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testMultiAssociation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testMultiAssociation PUBLIC /usr/include/boost/)
target_include_directories(testMultiAssociation PUBLIC /usr/include/root/)
target_include_directories(testMultiAssociation PUBLIC /usr/include/boost/regex/)

