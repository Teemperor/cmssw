add_library(cmsecal_rootplot OBJECT 
  cmsecal_rootplot.cpp
)

target_include_directories(cmsecal_rootplot PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmsecal_rootplot PUBLIC /usr/include/root/)
target_include_directories(cmsecal_rootplot PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmsecal_rootplot PUBLIC /usr/include/boost/program_options/)
target_include_directories(cmsecal_rootplot PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmsecal_rootplot PUBLIC /usr/include/boost/)
target_include_directories(cmsecal_rootplot PUBLIC /usr/include/boost/regex/)

add_library(cmsecal_write_offline_det_id OBJECT 
  cmsecal_write_offline_det_id.cpp
)

target_include_directories(cmsecal_write_offline_det_id PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmsecal_write_offline_det_id PUBLIC /usr/include/root/)
target_include_directories(cmsecal_write_offline_det_id PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmsecal_write_offline_det_id PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmsecal_write_offline_det_id PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(cmsecal_write_offline_det_id PUBLIC /usr/include/boost/)
target_include_directories(cmsecal_write_offline_det_id PUBLIC /usr/include/boost/regex/)

