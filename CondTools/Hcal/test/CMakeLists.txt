add_library(PMTParams OBJECT 
  make_HBHENegativeEFilter.cc
  make_HFPhase1PMTParams_test.cc
  make_HFPhase1PMTParams_data.cc
  make_HFPhase1PMTParams_mc.cc
  make_HFPhase1PMTParams_dummy.cc
)

target_include_directories(PMTParams PUBLIC /usr/include/python2.7/)
target_include_directories(PMTParams PUBLIC /usr/include/boost/serialization/)
target_include_directories(PMTParams PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PMTParams PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(PMTParams PUBLIC /usr/include/boost/)
target_include_directories(PMTParams PUBLIC /usr/include/boost/python/)
target_include_directories(PMTParams PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PMTParams PUBLIC /usr/include/root/)
target_include_directories(PMTParams PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(PMTParams PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PMTParams PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(PMTParams PUBLIC /usr/include/boost/regex/)

add_library(write_HFPhase1PMTParams OBJECT 
  write_HFPhase1PMTParams.cc
)

target_include_directories(write_HFPhase1PMTParams PUBLIC /usr/include/python2.7/)
target_include_directories(write_HFPhase1PMTParams PUBLIC /usr/include/boost/serialization/)
target_include_directories(write_HFPhase1PMTParams PUBLIC /home/teemperor/cms/md5/)
target_include_directories(write_HFPhase1PMTParams PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(write_HFPhase1PMTParams PUBLIC /usr/include/boost/)
target_include_directories(write_HFPhase1PMTParams PUBLIC /usr/include/boost/python/)
target_include_directories(write_HFPhase1PMTParams PUBLIC /usr/include/boost/filesystem/)
target_include_directories(write_HFPhase1PMTParams PUBLIC /usr/include/root/)
target_include_directories(write_HFPhase1PMTParams PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(write_HFPhase1PMTParams PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(write_HFPhase1PMTParams PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(write_HFPhase1PMTParams PUBLIC /usr/include/boost/regex/)

add_library(PMTParamsVis OBJECT 
  visualizeHFPhase1PMTParams.cc
)

target_include_directories(PMTParamsVis PUBLIC /usr/include/python2.7/)
target_include_directories(PMTParamsVis PUBLIC /usr/include/boost/serialization/)
target_include_directories(PMTParamsVis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PMTParamsVis PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(PMTParamsVis PUBLIC /usr/include/boost/)
target_include_directories(PMTParamsVis PUBLIC /usr/include/boost/python/)
target_include_directories(PMTParamsVis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PMTParamsVis PUBLIC /usr/include/root/)
target_include_directories(PMTParamsVis PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(PMTParamsVis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PMTParamsVis PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(PMTParamsVis PUBLIC /usr/include/boost/regex/)

add_library(makeHFPhase1PMTParamsPlots OBJECT 
  makeHFPhase1PMTParamsPlots.cc
)

target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /usr/include/python2.7/)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /usr/include/boost/serialization/)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /home/teemperor/cms/md5/)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /usr/include/boost/)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /usr/include/boost/python/)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /usr/include/boost/filesystem/)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /usr/include/root/)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(makeHFPhase1PMTParamsPlots PUBLIC /usr/include/boost/regex/)

add_library(write_HBHENegativeEFilter OBJECT 
  write_HBHENegativeEFilter.cc
)

target_include_directories(write_HBHENegativeEFilter PUBLIC /usr/include/python2.7/)
target_include_directories(write_HBHENegativeEFilter PUBLIC /usr/include/boost/serialization/)
target_include_directories(write_HBHENegativeEFilter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(write_HBHENegativeEFilter PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(write_HBHENegativeEFilter PUBLIC /usr/include/boost/)
target_include_directories(write_HBHENegativeEFilter PUBLIC /usr/include/boost/python/)
target_include_directories(write_HBHENegativeEFilter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(write_HBHENegativeEFilter PUBLIC /usr/include/root/)
target_include_directories(write_HBHENegativeEFilter PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(write_HBHENegativeEFilter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(write_HBHENegativeEFilter PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(write_HBHENegativeEFilter PUBLIC /usr/include/boost/regex/)

