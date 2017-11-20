add_subdirectory(test)
add_library(DetectorDescriptionCore OBJECT 
  src/Specific.cc
  src/DDConstant.cc
  src/DDCompactViewImpl.cc
  src/DDRotation.cc
  src/DDName.cc
  src/Polycone.cc
  src/PseudoTrap.cc
  src/DDPartSelection.cc
  src/DDComparator.cc
  src/DDPartSelectionExpander.cc
  src/DDScope.cc
  src/DDdummy.cc
  src/Polyhedra.cc
  src/DDCheck.cc
  src/Boolean.cc
  src/DDValue.cc
  src/Box.cc
  src/DDCheckMaterials.cc
  src/LogicalPart.cc
  src/Ellipsoid.cc
  src/Division.cc
  src/DDExpandedView.cc
  src/Sphere.cc
  src/DDCompactView.cc
  src/DDSplit.cc
  src/DDAxes.cc
  src/DDString.cc
  src/Orb.cc
  src/DDNumberingScheme.cc
  src/StoresInstantiation.cc
  src/DDFilteredView.cc
  src/DDQuery.cc
  src/DDExpandedNode.cc
  src/Reflection.cc
  src/Parallelepiped.cc
  src/Torus.cc
  src/DDFilter.cc
  src/DDDivision.cc
  src/Cons.cc
  src/TruncTubs.cc
  src/DDMaterial.cc
  src/DDLogicalPart.cc
  src/DDSolid.cc
  src/DDSpecifics.cc
  src/DDRoot.cc
  src/DDVector.cc
  src/DDStrVector.cc
  src/CutTubs.cc
  src/EllipticalTube.cc
  src/ES_DDCompactView.cc
  src/DDMap.cc
  src/Solid.cc
  src/Tubs.cc
  src/DDCurrentNamespace.cc
  src/Trap.cc
  src/ExtrudedPolygon.cc
  src/DDsvalues.cc
)

target_include_directories(DetectorDescriptionCore PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionCore PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionCore PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionCore PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionCore PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionCore PUBLIC /usr/include/boost/regex/)

