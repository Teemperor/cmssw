add_library(HcalRawIdToReadable OBJECT 
  HcalRawIdToReadable.cpp
)

target_include_directories(HcalRawIdToReadable PUBLIC /usr/include/python2.7/)
target_include_directories(HcalRawIdToReadable PUBLIC /usr/include/boost/serialization/)
target_include_directories(HcalRawIdToReadable PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HcalRawIdToReadable PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HcalRawIdToReadable PUBLIC /usr/include/boost/)
target_include_directories(HcalRawIdToReadable PUBLIC /usr/include/boost/python/)
target_include_directories(HcalRawIdToReadable PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HcalRawIdToReadable PUBLIC /usr/include/root/)
target_include_directories(HcalRawIdToReadable PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HcalRawIdToReadable PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HcalRawIdToReadable PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HcalRawIdToReadable PUBLIC /usr/include/boost/regex/)

add_library(CondToolsHcalScaleGains OBJECT 
  scaleGains.cc
)

target_include_directories(CondToolsHcalScaleGains PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsHcalScaleGains PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsHcalScaleGains PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsHcalScaleGains PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsHcalScaleGains PUBLIC /usr/include/boost/)
target_include_directories(CondToolsHcalScaleGains PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsHcalScaleGains PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsHcalScaleGains PUBLIC /usr/include/root/)
target_include_directories(CondToolsHcalScaleGains PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsHcalScaleGains PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsHcalScaleGains PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsHcalScaleGains PUBLIC /usr/include/boost/regex/)

add_library(CondToolsHcalCorrGains OBJECT 
  corrGains.cc
)

target_include_directories(CondToolsHcalCorrGains PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsHcalCorrGains PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsHcalCorrGains PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsHcalCorrGains PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsHcalCorrGains PUBLIC /usr/include/boost/)
target_include_directories(CondToolsHcalCorrGains PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsHcalCorrGains PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsHcalCorrGains PUBLIC /usr/include/root/)
target_include_directories(CondToolsHcalCorrGains PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsHcalCorrGains PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsHcalCorrGains PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsHcalCorrGains PUBLIC /usr/include/boost/regex/)

add_library(CondToolsHcalCorrResps OBJECT 
  corrResps.cc
)

target_include_directories(CondToolsHcalCorrResps PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsHcalCorrResps PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsHcalCorrResps PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsHcalCorrResps PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsHcalCorrResps PUBLIC /usr/include/boost/)
target_include_directories(CondToolsHcalCorrResps PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsHcalCorrResps PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsHcalCorrResps PUBLIC /usr/include/root/)
target_include_directories(CondToolsHcalCorrResps PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsHcalCorrResps PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsHcalCorrResps PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsHcalCorrResps PUBLIC /usr/include/boost/regex/)

add_library(CondToolsHcalModGains OBJECT 
  modGains.cc
)

target_include_directories(CondToolsHcalModGains PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsHcalModGains PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsHcalModGains PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsHcalModGains PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsHcalModGains PUBLIC /usr/include/boost/)
target_include_directories(CondToolsHcalModGains PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsHcalModGains PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsHcalModGains PUBLIC /usr/include/root/)
target_include_directories(CondToolsHcalModGains PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsHcalModGains PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsHcalModGains PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsHcalModGains PUBLIC /usr/include/boost/regex/)

