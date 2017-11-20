add_library(PedestalsAnalyzer OBJECT 
  stubs/PedestalsAnalyzer.cc
)

target_include_directories(PedestalsAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(PedestalsAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PedestalsAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(PedestalsAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(PedestalsAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(PedestalsAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(PedestalsAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PedestalsAnalyzer PUBLIC /usr/include/root/)
target_include_directories(PedestalsAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(PedestalsAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PedestalsAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(PedestalsAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(PedestalsByLabelAnalyzer OBJECT 
  stubs/PedestalsByLabelAnalyzer.cc
)

target_include_directories(PedestalsByLabelAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /usr/include/root/)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(PedestalsByLabelAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(NoisesAnalyzer OBJECT 
  SiStripTest/noiseanalyzer.cc
)

target_include_directories(NoisesAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(NoisesAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(NoisesAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(NoisesAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(NoisesAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(NoisesAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(NoisesAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(NoisesAnalyzer PUBLIC /usr/include/root/)
target_include_directories(NoisesAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(NoisesAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(NoisesAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(NoisesAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(ExEfficiencyByLabelAnalyzer OBJECT 
  stubs/EfficiencyByLabelAnalyzer.cc
)

target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /usr/include/root/)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(ExEfficiencyByLabelAnalyzer PUBLIC /usr/include/boost/regex/)

