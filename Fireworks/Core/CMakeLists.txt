add_subdirectory(bin)
add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FireworksCoresrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Fireworks/Core/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FireworksCoresrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Fireworks/Core/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Fireworks/Core/src/classes.h /home/teemperor/cms/cmssw/Fireworks/Core/src/classes_def.xml
  COMMENT "Generating ROOT dict FireworksCoresrcclassesh")

add_library(FireworksCore OBJECT 
  src/ActionsList.cc
  src/FWParameterSetterBase.cc
  src/FWGUIEventFilter.cc
  src/FWConfigurable.cc
  src/CmsShowViewPopup.cc
  src/BuilderUtils.cc
  src/FWModelFilter.cc
  src/FWModelIdFromEveSelector.cc
  src/FWTableView.cc
  src/FWViewManagerBase.cc
  src/FWViewType.cc
  src/FWGUISubviewArea.cc
  src/FWHFView.cc
  src/FWFileEntry.cc
  src/FWParameterBase.cc
  src/FWSimpleProxyHelper.cc
  src/TEveElementIter.cc
  src/FWDoubleParameterSetter.cc
  src/FWTEventList.cc
  src/FWGeometryTableViewManager.cc
  src/fw3dlego_xbins.cc
  src/FWISpyView.cc
  src/FWHLTTriggerTableView.cc
  src/FWViewContextMenuHandlerBase.cc
  src/FWGenericHandle.cc
  src/FWColorSelect.cc
  src/FWEDProductRepresentationChecker.cc
  src/FW3DViewBase.cc
  src/FWEveDetectorGeo.cc
  src/FWTableViewTableManager.cc
  src/FWConfigurableParameterizable.cc
  src/CmsShowEDI.cc
  src/FWStringParameterSetter.cc
  src/TRootXTReq.cc
  src/FWGeometryTableManagerBase.cc
  src/FWBoxIconBase.cc
  src/FWItemAccessorFactory.cc
  src/FWItemAccessorBase.cc
  src/FWGUIEventSelector.cc
  src/FWGeoTopNodeScene.cc
  src/FWGLEventHandler.cc
  src/FWEnumParameterSetter.cc
  src/CmsShowCommonPopup.cc
  src/FWTextProjected.cc
  src/FWDialogBuilder.cc
  src/RootGuiUtils.cc
  src/FWTypeToRepresentations.cc
  src/FWTSelectorToEventList.cc
  src/FWGeoTopNode.cc
  src/SimpleSAXParser.cc
  src/FWViewGeometryList.cc
  src/FWGUIManager.cc
  src/FWInteractionList.cc
  src/CmsShowTaskExecutor.cc
  src/CmsShowTaskExecutorBase.cc
  src/FWCollectionSummaryWidget.cc
  src/CmsShowMain.cc
  src/FWColorManager.cc
  src/FWNumberEntry.cc
  src/FWSummaryManager.cc
  src/FWFromEveSelectorBase.cc
  src/FWTriggerTableViewManager.cc
  src/FWParameterSetterEditorBase.cc
  src/FWCompositeParameter.cc
  src/CmsShowModelPopup.cc
  src/FWEveLegoView.cc
  src/FWCustomIconsButton.cc
  src/CmsAnnotation.cc
  src/FWLegoViewBase.cc
  src/FWItemAccessorRegistry.cc
  src/FWDisplayProperties.cc
  src/FWGeometryTableView.cc
  src/fwPaths.cc
  src/FWModelChangeManager.cc
  src/FWTEveViewer.cc
  src/CmsShowCommon.cc
  src/FWModelContextMenuHandler.cc
  src/FWDetailViewFactory.cc
  src/CSGActionSupervisor.cc
  src/fwPaletteExtra.cc
  src/FWBoolParameterSetter.cc
  src/FWColorBoxIcon.cc
  src/FWEventItem.cc
  src/FWEventItemsManager.cc
  src/FWViewEnergyScaleEditor.cc
  src/FWItemValueGetter.cc
  src/FWItemRandomAccessor.cc
  src/FWGeoTopNodeGL.cc
  src/FWLiteJobMetadataManager.cc
  src/CmsShowMainFrame.cc
  src/FWConfiguration.cc
  src/FWTriggerTableView.cc
  src/FWCompactVerticalLayout.cc
  src/FWTGLViewer.cc
  src/FWCollectionSummaryModelCellRenderer.cc
  src/FWExpressionValidator.cc
  src/FWTriggerTableViewTableManager.cc
  src/FWNavigatorBase.cc
  src/CmsShowHelpPopup.cc
  src/FWViewEnergyScale.cc
  src/FWGeometryTableViewBase.cc
  src/FWGlimpseView.cc
  src/FWProxyBuilderBase.cc
  src/FWEventAnnotation.cc
  src/FWRPZViewGeometry.cc
  src/FWParameterizable.cc
  src/FWMagField.cc
  src/FWBeamSpot.cc
  src/fwLog.cc
  src/FWGeometryTableManager.cc
  src/FWConfigurationManager.cc
  src/FW3DView.cc
  src/FWEveViewManager.cc
  src/FWPartialConfig.cc
  src/FWViewContext.cc
  src/FWHLTValidator.cc
  src/FWRPZView.cc
  src/FWViewManagerManager.cc
  src/FWDetailViewBase.cc
  src/FWViewContextMenuHandlerGL.cc
  src/FWJobMetadataManager.cc
  src/FWBoxIconButton.cc
  src/FWItemTVirtualCollectionProxyAccessor.cc
  src/FWOverlapTableManager.cc
  src/FWLongParameterSetter.cc
  src/FWDetailViewManager.cc
  src/FWModelId.cc
  src/FWIntValueListenerBase.cc
  src/FWGeometry.cc
  src/FWPhysicsObjectDesc.cc
  src/FWEveView.cc
  src/Context.cc
  src/FWCheckBoxIcon.cc
  src/expressionFormatHelpers.cc
  src/fwPaletteClassic.cc
  src/FWProxyBuilderFactory.cc
  src/FW3DViewDistanceMeasureTool.cc
  src/FWOverlapTableView.cc
  src/FWTableViewManager.cc
  src/FWPopupMenu.cc
  src/FWSimpleProxyBuilder.cc
  src/FWIntValueListener.cc
  src/FWSimpleRepresentationChecker.cc
  src/FWProxyBuilderConfiguration.cc
  src/CSGContinuousAction.cc
  src/FWModelExpressionSelector.cc
  src/FWRepresentationCheckerBase.cc
  src/FWGUIValidatingTextEntry.cc
  src/FWExpressionEvaluator.cc
  src/CmsShowSearchFiles.cc
  src/CmsShowNavigator.cc
  src/FWEveOverlap.cc
  src/FWL1TriggerTableView.cc
  src/FWViewBase.cc
  src/CSGAction.cc
  src/FWCollectionSummaryTableManager.cc
  src/CmsShowTaskTimer.cc
  src/FWGUIEventDataAdder.cc
  src/CmsShowMainBase.cc
  src/FWItemSingleAccessor.cc
  src/FWEveDigitSetScalableMarker.cc
  src/FWSelectionManager.cc
  src/FWDigitSetProxyBuilder.cc
  src/CSGConnector.cc
  src/FWInvMassDialog.cc
  src/FW3DViewGeometry.cc
  ${CMAKE_BINARY_DIR}/FireworksCoresrcclassesh_rflx.cpp
)

target_include_directories(FireworksCore PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksCore PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksCore PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksCore PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksCore PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksCore PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksCore PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksCore PUBLIC /usr/include/boost/)
target_include_directories(FireworksCore PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksCore PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksCore PUBLIC /usr/include/root/)
target_include_directories(FireworksCore PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksCore PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksCore PUBLIC /usr/include/boost/regex/)

