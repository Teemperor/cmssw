add_library(test_DavixCheck_http OBJECT 
  davixcheck.cpp
)

target_include_directories(test_DavixCheck_http PUBLIC /usr/include/boost/python/)
target_include_directories(test_DavixCheck_http PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_DavixCheck_http PUBLIC /usr/include/python2.7/)
target_include_directories(test_DavixCheck_http PUBLIC /usr/include/root/)
target_include_directories(test_DavixCheck_http PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_DavixCheck_http PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_DavixCheck_http PUBLIC /usr/include/davix/)
target_include_directories(test_DavixCheck_http PUBLIC /usr/include/boost/)
target_include_directories(test_DavixCheck_http PUBLIC /usr/include/boost/regex/)

add_library(test_DavixRead_http OBJECT 
  davixread.cpp
)

target_include_directories(test_DavixRead_http PUBLIC /usr/include/boost/python/)
target_include_directories(test_DavixRead_http PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_DavixRead_http PUBLIC /usr/include/python2.7/)
target_include_directories(test_DavixRead_http PUBLIC /usr/include/root/)
target_include_directories(test_DavixRead_http PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_DavixRead_http PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_DavixRead_http PUBLIC /usr/include/davix/)
target_include_directories(test_DavixRead_http PUBLIC /usr/include/boost/)
target_include_directories(test_DavixRead_http PUBLIC /usr/include/boost/regex/)

add_library(test_DavixReadV_http OBJECT 
  davixreadv.cpp
)

target_include_directories(test_DavixReadV_http PUBLIC /usr/include/boost/python/)
target_include_directories(test_DavixReadV_http PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_DavixReadV_http PUBLIC /usr/include/python2.7/)
target_include_directories(test_DavixReadV_http PUBLIC /usr/include/root/)
target_include_directories(test_DavixReadV_http PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_DavixReadV_http PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_DavixReadV_http PUBLIC /usr/include/davix/)
target_include_directories(test_DavixReadV_http PUBLIC /usr/include/boost/)
target_include_directories(test_DavixReadV_http PUBLIC /usr/include/boost/regex/)

add_library(test_DavixReadWrongUrl_http OBJECT 
  davixreadwrongurl.cpp
)

target_include_directories(test_DavixReadWrongUrl_http PUBLIC /usr/include/boost/python/)
target_include_directories(test_DavixReadWrongUrl_http PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_DavixReadWrongUrl_http PUBLIC /usr/include/python2.7/)
target_include_directories(test_DavixReadWrongUrl_http PUBLIC /usr/include/root/)
target_include_directories(test_DavixReadWrongUrl_http PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_DavixReadWrongUrl_http PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_DavixReadWrongUrl_http PUBLIC /usr/include/davix/)
target_include_directories(test_DavixReadWrongUrl_http PUBLIC /usr/include/boost/)
target_include_directories(test_DavixReadWrongUrl_http PUBLIC /usr/include/boost/regex/)

add_library(test_DavixReadFileNotFound_http OBJECT 
  davixreadfilenotfound.cpp
)

target_include_directories(test_DavixReadFileNotFound_http PUBLIC /usr/include/boost/python/)
target_include_directories(test_DavixReadFileNotFound_http PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_DavixReadFileNotFound_http PUBLIC /usr/include/python2.7/)
target_include_directories(test_DavixReadFileNotFound_http PUBLIC /usr/include/root/)
target_include_directories(test_DavixReadFileNotFound_http PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_DavixReadFileNotFound_http PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_DavixReadFileNotFound_http PUBLIC /usr/include/davix/)
target_include_directories(test_DavixReadFileNotFound_http PUBLIC /usr/include/boost/)
target_include_directories(test_DavixReadFileNotFound_http PUBLIC /usr/include/boost/regex/)

add_library(test_StorageFactory_Http OBJECT 
  http.cpp
)

target_include_directories(test_StorageFactory_Http PUBLIC /usr/include/boost/python/)
target_include_directories(test_StorageFactory_Http PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_StorageFactory_Http PUBLIC /usr/include/python2.7/)
target_include_directories(test_StorageFactory_Http PUBLIC /usr/include/root/)
target_include_directories(test_StorageFactory_Http PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_StorageFactory_Http PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_StorageFactory_Http PUBLIC /usr/include/davix/)
target_include_directories(test_StorageFactory_Http PUBLIC /usr/include/boost/)
target_include_directories(test_StorageFactory_Http PUBLIC /usr/include/boost/regex/)

add_library(test_StorageFactory_Http2 OBJECT 
  http2.cpp
)

target_include_directories(test_StorageFactory_Http2 PUBLIC /usr/include/boost/python/)
target_include_directories(test_StorageFactory_Http2 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_StorageFactory_Http2 PUBLIC /usr/include/python2.7/)
target_include_directories(test_StorageFactory_Http2 PUBLIC /usr/include/root/)
target_include_directories(test_StorageFactory_Http2 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_StorageFactory_Http2 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_StorageFactory_Http2 PUBLIC /usr/include/davix/)
target_include_directories(test_StorageFactory_Http2 PUBLIC /usr/include/boost/)
target_include_directories(test_StorageFactory_Http2 PUBLIC /usr/include/boost/regex/)

add_library(test_StorageFactory_Http3 OBJECT 
  http3.cpp
)

target_include_directories(test_StorageFactory_Http3 PUBLIC /usr/include/boost/python/)
target_include_directories(test_StorageFactory_Http3 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_StorageFactory_Http3 PUBLIC /usr/include/python2.7/)
target_include_directories(test_StorageFactory_Http3 PUBLIC /usr/include/root/)
target_include_directories(test_StorageFactory_Http3 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_StorageFactory_Http3 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_StorageFactory_Http3 PUBLIC /usr/include/davix/)
target_include_directories(test_StorageFactory_Http3 PUBLIC /usr/include/boost/)
target_include_directories(test_StorageFactory_Http3 PUBLIC /usr/include/boost/regex/)

add_library(test_StorageFactory_Http4 OBJECT 
  http4.cpp
)

target_include_directories(test_StorageFactory_Http4 PUBLIC /usr/include/boost/python/)
target_include_directories(test_StorageFactory_Http4 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_StorageFactory_Http4 PUBLIC /usr/include/python2.7/)
target_include_directories(test_StorageFactory_Http4 PUBLIC /usr/include/root/)
target_include_directories(test_StorageFactory_Http4 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_StorageFactory_Http4 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_StorageFactory_Http4 PUBLIC /usr/include/davix/)
target_include_directories(test_StorageFactory_Http4 PUBLIC /usr/include/boost/)
target_include_directories(test_StorageFactory_Http4 PUBLIC /usr/include/boost/regex/)

