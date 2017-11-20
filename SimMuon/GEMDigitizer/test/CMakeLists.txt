add_library(GEMDigiReader OBJECT 
  GEMDigiReader.cc
)

target_include_directories(GEMDigiReader PUBLIC /usr/include/boost/iostreams/)
target_include_directories(GEMDigiReader PUBLIC /usr/include/python2.7/)
target_include_directories(GEMDigiReader PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(GEMDigiReader PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GEMDigiReader PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GEMDigiReader PUBLIC /usr/include/boost/serialization/)
target_include_directories(GEMDigiReader PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GEMDigiReader PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(GEMDigiReader PUBLIC /usr/include/boost/)
target_include_directories(GEMDigiReader PUBLIC /usr/include/boost/python/)
target_include_directories(GEMDigiReader PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GEMDigiReader PUBLIC /usr/include/root/)
target_include_directories(GEMDigiReader PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(GEMDigiReader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GEMDigiReader PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(GEMDigiReader PUBLIC /usr/include/boost/regex/)

add_library(GEMPadDigiReader OBJECT 
  GEMPadDigiReader.cc
)

target_include_directories(GEMPadDigiReader PUBLIC /usr/include/boost/iostreams/)
target_include_directories(GEMPadDigiReader PUBLIC /usr/include/python2.7/)
target_include_directories(GEMPadDigiReader PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(GEMPadDigiReader PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GEMPadDigiReader PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GEMPadDigiReader PUBLIC /usr/include/boost/serialization/)
target_include_directories(GEMPadDigiReader PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GEMPadDigiReader PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(GEMPadDigiReader PUBLIC /usr/include/boost/)
target_include_directories(GEMPadDigiReader PUBLIC /usr/include/boost/python/)
target_include_directories(GEMPadDigiReader PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GEMPadDigiReader PUBLIC /usr/include/root/)
target_include_directories(GEMPadDigiReader PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(GEMPadDigiReader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GEMPadDigiReader PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(GEMPadDigiReader PUBLIC /usr/include/boost/regex/)

add_library(GEMFakeEvent OBJECT 
  GEMFakeEvent.cc
)

target_include_directories(GEMFakeEvent PUBLIC /usr/include/boost/iostreams/)
target_include_directories(GEMFakeEvent PUBLIC /usr/include/python2.7/)
target_include_directories(GEMFakeEvent PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(GEMFakeEvent PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GEMFakeEvent PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GEMFakeEvent PUBLIC /usr/include/boost/serialization/)
target_include_directories(GEMFakeEvent PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GEMFakeEvent PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(GEMFakeEvent PUBLIC /usr/include/boost/)
target_include_directories(GEMFakeEvent PUBLIC /usr/include/boost/python/)
target_include_directories(GEMFakeEvent PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GEMFakeEvent PUBLIC /usr/include/root/)
target_include_directories(GEMFakeEvent PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(GEMFakeEvent PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GEMFakeEvent PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(GEMFakeEvent PUBLIC /usr/include/boost/regex/)

add_library(GEMDigiSimLinkReader OBJECT 
  GEMDigiSimLinkReader.cc
)

target_include_directories(GEMDigiSimLinkReader PUBLIC /usr/include/boost/iostreams/)
target_include_directories(GEMDigiSimLinkReader PUBLIC /usr/include/python2.7/)
target_include_directories(GEMDigiSimLinkReader PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(GEMDigiSimLinkReader PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GEMDigiSimLinkReader PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GEMDigiSimLinkReader PUBLIC /usr/include/boost/serialization/)
target_include_directories(GEMDigiSimLinkReader PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GEMDigiSimLinkReader PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(GEMDigiSimLinkReader PUBLIC /usr/include/boost/)
target_include_directories(GEMDigiSimLinkReader PUBLIC /usr/include/boost/python/)
target_include_directories(GEMDigiSimLinkReader PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GEMDigiSimLinkReader PUBLIC /usr/include/root/)
target_include_directories(GEMDigiSimLinkReader PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(GEMDigiSimLinkReader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GEMDigiSimLinkReader PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(GEMDigiSimLinkReader PUBLIC /usr/include/boost/regex/)

