add_library(HitTripletProducer OBJECT 
  HitTripletProducer.cc
)

target_include_directories(HitTripletProducer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HitTripletProducer PUBLIC /usr/include/python2.7/)
target_include_directories(HitTripletProducer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HitTripletProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HitTripletProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(HitTripletProducer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HitTripletProducer PUBLIC /usr/include/boost/)
target_include_directories(HitTripletProducer PUBLIC /usr/include/eigen3/)
target_include_directories(HitTripletProducer PUBLIC /usr/include/boost/python/)
target_include_directories(HitTripletProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HitTripletProducer PUBLIC /usr/include/root/)
target_include_directories(HitTripletProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HitTripletProducer PUBLIC /usr/include/boost/regex/)

add_library(PixelTriplets_InvPrbl_t OBJECT 
  PixelTriplets_InvPrbl_t.cpp
)

target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/include/boost/python/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/include/python2.7/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/include/root/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/include/boost/serialization/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/include/boost/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/include/eigen3/)
target_include_directories(PixelTriplets_InvPrbl_t PUBLIC /usr/include/boost/regex/)

add_library(PixelTriplets_InvPrbl_prec OBJECT 
  PixelTriplets_InvPrbl_prec.cpp
)

target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/include/boost/python/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/include/python2.7/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/include/root/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/include/boost/serialization/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/include/boost/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/include/eigen3/)
target_include_directories(PixelTriplets_InvPrbl_prec PUBLIC /usr/include/boost/regex/)

