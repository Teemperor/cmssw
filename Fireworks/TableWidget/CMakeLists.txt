add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FireworksTableWidgetsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Fireworks/TableWidget/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FireworksTableWidgetsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Fireworks/TableWidget/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Fireworks/TableWidget/src/classes.h /home/teemperor/cms/cmssw/Fireworks/TableWidget/src/classes_def.xml
  COMMENT "Generating ROOT dict FireworksTableWidgetsrcclassesh")

add_library(FireworksTableWidget OBJECT 
  src/GlobalContexts.cc
  src/FWCheckedTextTableCellRenderer.cc
  src/FWTabularWidget.cc
  src/FWAdapterRowHeaderTableManager.cc
  src/FWFramedTextTableCellRenderer.cc
  src/FWTableCellRendererBase.cc
  src/FWTableWidget.cc
  src/FWTableManagerBase.cc
  src/FWTextTableCellRenderer.cc
  src/FWColumnLabelCellRenderer.cc
  src/FWAdapterHeaderTableManager.cc
  ${CMAKE_BINARY_DIR}/FireworksTableWidgetsrcclassesh_rflx.cpp
)

target_include_directories(FireworksTableWidget PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksTableWidget PUBLIC /usr/include/root/)

