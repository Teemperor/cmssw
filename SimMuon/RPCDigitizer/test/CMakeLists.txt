add_library(RPCDigiReader OBJECT 
  RPCDigiReader.cc
)

target_include_directories(RPCDigiReader PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RPCDigiReader PUBLIC /usr/include/python2.7/)
target_include_directories(RPCDigiReader PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(RPCDigiReader PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RPCDigiReader PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RPCDigiReader PUBLIC /usr/include/boost/serialization/)
target_include_directories(RPCDigiReader PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RPCDigiReader PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RPCDigiReader PUBLIC /usr/include/boost/)
target_include_directories(RPCDigiReader PUBLIC /usr/include/boost/python/)
target_include_directories(RPCDigiReader PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RPCDigiReader PUBLIC /usr/include/root/)
target_include_directories(RPCDigiReader PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RPCDigiReader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RPCDigiReader PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RPCDigiReader PUBLIC /usr/include/boost/regex/)

add_library(RPCEventDump OBJECT 
  RPCEventDump.cc
)

target_include_directories(RPCEventDump PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RPCEventDump PUBLIC /usr/include/python2.7/)
target_include_directories(RPCEventDump PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(RPCEventDump PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RPCEventDump PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RPCEventDump PUBLIC /usr/include/boost/serialization/)
target_include_directories(RPCEventDump PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RPCEventDump PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RPCEventDump PUBLIC /usr/include/boost/)
target_include_directories(RPCEventDump PUBLIC /usr/include/boost/python/)
target_include_directories(RPCEventDump PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RPCEventDump PUBLIC /usr/include/root/)
target_include_directories(RPCEventDump PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RPCEventDump PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RPCEventDump PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RPCEventDump PUBLIC /usr/include/boost/regex/)

add_library(RPCFakeEvent OBJECT 
  RPCFakeEvent.cc
)

target_include_directories(RPCFakeEvent PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RPCFakeEvent PUBLIC /usr/include/python2.7/)
target_include_directories(RPCFakeEvent PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(RPCFakeEvent PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RPCFakeEvent PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RPCFakeEvent PUBLIC /usr/include/boost/serialization/)
target_include_directories(RPCFakeEvent PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RPCFakeEvent PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RPCFakeEvent PUBLIC /usr/include/boost/)
target_include_directories(RPCFakeEvent PUBLIC /usr/include/boost/python/)
target_include_directories(RPCFakeEvent PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RPCFakeEvent PUBLIC /usr/include/root/)
target_include_directories(RPCFakeEvent PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RPCFakeEvent PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RPCFakeEvent PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RPCFakeEvent PUBLIC /usr/include/boost/regex/)

