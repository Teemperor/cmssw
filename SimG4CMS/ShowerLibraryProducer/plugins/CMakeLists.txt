add_library(SimG4CMSHcalForwardLibWriter OBJECT 
  HcalForwardLibWriter.cc
)

target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/include/boost/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/include/root/)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CMSHcalForwardLibWriter PUBLIC /usr/include/boost/regex/)

add_library(SimG4CMSShowerLibraryProducerPlugins OBJECT 
  module.cc
)

target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/include/boost/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/include/root/)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CMSShowerLibraryProducerPlugins PUBLIC /usr/include/boost/regex/)

