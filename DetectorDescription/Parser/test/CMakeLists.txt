add_library(dumpDDExpandedView OBJECT 
  dumpDDExpandedView.cpp
)

target_include_directories(dumpDDExpandedView PUBLIC /usr/include/boost/python/)
target_include_directories(dumpDDExpandedView PUBLIC /usr/include/boost/filesystem/)
target_include_directories(dumpDDExpandedView PUBLIC /usr/include/python2.7/)
target_include_directories(dumpDDExpandedView PUBLIC /usr/include/root/)
target_include_directories(dumpDDExpandedView PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(dumpDDExpandedView PUBLIC /home/teemperor/cms/md5/)
target_include_directories(dumpDDExpandedView PUBLIC /usr/include/boost/)
target_include_directories(dumpDDExpandedView PUBLIC /usr/include/boost/system/)
target_include_directories(dumpDDExpandedView PUBLIC /usr/include/boost/regex/)

add_library(DetectorDescriptionParserTE OBJECT 
  TestIntegration.cpp
)

target_include_directories(DetectorDescriptionParserTE PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionParserTE PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionParserTE PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionParserTE PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionParserTE PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionParserTE PUBLIC /usr/include/boost/regex/)

add_library(testDoc OBJECT 
  testDoc.cpp
)

target_include_directories(testDoc PUBLIC /usr/include/boost/python/)
target_include_directories(testDoc PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDoc PUBLIC /usr/include/python2.7/)
target_include_directories(testDoc PUBLIC /usr/include/root/)
target_include_directories(testDoc PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDoc PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDoc PUBLIC /usr/include/boost/)
target_include_directories(testDoc PUBLIC /usr/include/boost/system/)
target_include_directories(testDoc PUBLIC /usr/include/boost/regex/)

add_library(testmat OBJECT 
  testmat.cpp
)

target_include_directories(testmat PUBLIC /usr/include/boost/python/)
target_include_directories(testmat PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testmat PUBLIC /usr/include/python2.7/)
target_include_directories(testmat PUBLIC /usr/include/root/)
target_include_directories(testmat PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testmat PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testmat PUBLIC /usr/include/boost/)
target_include_directories(testmat PUBLIC /usr/include/boost/system/)
target_include_directories(testmat PUBLIC /usr/include/boost/regex/)

add_library(dumpDDCompactView OBJECT 
  dumpDDCompactView.cpp
)

target_include_directories(dumpDDCompactView PUBLIC /usr/include/boost/python/)
target_include_directories(dumpDDCompactView PUBLIC /usr/include/boost/filesystem/)
target_include_directories(dumpDDCompactView PUBLIC /usr/include/python2.7/)
target_include_directories(dumpDDCompactView PUBLIC /usr/include/root/)
target_include_directories(dumpDDCompactView PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(dumpDDCompactView PUBLIC /home/teemperor/cms/md5/)
target_include_directories(dumpDDCompactView PUBLIC /usr/include/boost/)
target_include_directories(dumpDDCompactView PUBLIC /usr/include/boost/system/)
target_include_directories(dumpDDCompactView PUBLIC /usr/include/boost/regex/)

add_library(testNew OBJECT 
  testNew.cpp
)

target_include_directories(testNew PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testNew PUBLIC /usr/include/root/)
target_include_directories(testNew PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testNew PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testNew PUBLIC /usr/include/boost/)
target_include_directories(testNew PUBLIC /usr/include/boost/regex/)

add_library(testDDCompactView OBJECT 
  testDDCompactView.cpp
)

target_include_directories(testDDCompactView PUBLIC /usr/include/boost/python/)
target_include_directories(testDDCompactView PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDDCompactView PUBLIC /usr/include/python2.7/)
target_include_directories(testDDCompactView PUBLIC /usr/include/root/)
target_include_directories(testDDCompactView PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDDCompactView PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDDCompactView PUBLIC /usr/include/boost/)
target_include_directories(testDDCompactView PUBLIC /usr/include/boost/system/)
target_include_directories(testDDCompactView PUBLIC /usr/include/boost/regex/)

