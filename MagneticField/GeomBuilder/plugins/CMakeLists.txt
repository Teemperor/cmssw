add_library(MagneticFieldGeomBuilderPlugins OBJECT 
  VolumeBasedMagneticFieldESProducerFromDB.cc
  VolumeBasedMagneticFieldESProducer.cc
  AutoMagneticFieldESProducer.cc
)

target_include_directories(MagneticFieldGeomBuilderPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(MagneticFieldGeomBuilderPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MagneticFieldGeomBuilderPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(MagneticFieldGeomBuilderPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(MagneticFieldGeomBuilderPlugins PUBLIC /usr/include/root/)
target_include_directories(MagneticFieldGeomBuilderPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MagneticFieldGeomBuilderPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MagneticFieldGeomBuilderPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(MagneticFieldGeomBuilderPlugins PUBLIC /usr/include/boost/)
target_include_directories(MagneticFieldGeomBuilderPlugins PUBLIC /usr/include/boost/regex/)

