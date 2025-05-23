#
# Shrew Soft VPN / Client Connect Application
# Cross Platform Make File
#
# author : Matthew Grooms
#        : mgrooms@shrew.net
#        : Copyright 2007, Shrew Soft Inc
#

include_directories(
	${IKE_SOURCE_DIR}/source/
	${IKE_SOURCE_DIR}/source/ikec
	${IKE_SOURCE_DIR}/source/iked
	${IKE_SOURCE_DIR}/source/libike
	${IKE_SOURCE_DIR}/source/libidb
	${IKE_SOURCE_DIR}/source/libith
	${IKE_SOURCE_DIR}/source/liblog
	${IKE_SOURCE_DIR}/source/libip
	${QT_INCLUDES} )

link_directories(
	${IKE_SOURCE_DIR}/source/libip
	${QT_LIBRARY_DIR} )

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


add_executable(
  qikec
  main.cpp
  qikec.cpp
  root.cpp
  banner.ui
  filepass.ui
  root.ui
  qikec.qrc
  qikec.h
)


target_link_libraries(
  qikec
  ss_ike
  ss_idb
  ss_ith
  ss_log
  Qt5::Core
  Qt5::Gui
  Qt5::Widgets
  pthread
  crypto)


if( APPLE )

	set(
		MACOSX_BUNDLE_BUNDLE_NAME
		"Shrew Soft VPN Client Connect" )

	set(
		MACOSX_BUNDLE_GUI_IDENTIFIER
		"net.shrew.vpn.qikec" )

	set(
		MACOSX_BUNDLE_ICON_FILE
		"qikec.icns" )

	set(
		MACOSX_BUNDLE_LONG_VERSION_STRING
		${RELVER} )

	set(
		MACOSX_BUNDLE_SHORT_VERSION_STRING
		${RELVER} )

	set_property(
		TARGET qikec
		PROPERTY MACOSX_BUNDLE ON )

	set_property(
		TARGET qikec
		PROPERTY OUTPUT_NAME ${MACOSX_BUNDLE_BUNDLE_NAME} )

	add_custom_target(
		qikec-bundle-resources
		COMMAND mkdir -p
			${CMAKE_CURRENT_SOURCE_DIR}/${MACOSX_BUNDLE_BUNDLE_NAME}.app/Contents/Resources
		COMMAND cp
			${CMAKE_CURRENT_SOURCE_DIR}/png/${MACOSX_BUNDLE_ICON_FILE}
			${CMAKE_CURRENT_SOURCE_DIR}/${MACOSX_BUNDLE_BUNDLE_NAME}.app/Contents/Resources/${MACOSX_BUNDLE_ICON_FILE} )

	add_dependencies(
		qikec
		ProjectName qikec-bundle-resources )

endif( APPLE )

install(
	TARGETS qikec
	RUNTIME	DESTINATION bin
	BUNDLE DESTINATION "/Applications" )

install(
	FILES qikec.1
	DESTINATION ${PATH_MAN}/man1 )

if( APPLE )

#	set(
#		MACOSX_BUNDLE_DEST_DIR
#		"/Applications/${MACOSX_BUNDLE_BUNDLE_NAME}.app" )

#	set(
#		MACOSX_QTPLUGINS_DEST_DIR
#		"${MACOSX_BUNDLE_DEST_DIR}/Contents/MacOS/plugins" )

#	install(
#		DIRECTORY "${QT_PLUGINS_DIR}/imageformats"
#		DESTINATION "${MACOSX_QTPLUGINS_DEST_DIR}"
#		COMPONENT Runtime )

#	set(
#		MACOSX_QTCONF_DEST_DIR
#		"${MACOSX_BUNDLE_DEST_DIR}/Contents/Resources" )

#	install(
#		CODE "file( WRITE \"${MACOSX_QTCONF_DEST_DIR}/qt.conf\" \"\" )"
#		COMPONENT Runtime )

	install(
		CODE "execute_process( COMMAND \"install_name_tool\" -change
			${QT_LIBRARY_DIR}/QtCore.framework/Versions/4/QtCore
			ShrewSoftQtCore.framework/Versions/4/ShrewSoftQtCore
			\"/Applications/${MACOSX_BUNDLE_BUNDLE_NAME}.app/Contents/MacOS/${MACOSX_BUNDLE_BUNDLE_NAME}\" )" )

	install(
		CODE "execute_process( COMMAND \"install_name_tool\" -change
			${QT_LIBRARY_DIR}/QtGui.framework/Versions/4/QtGui
			ShrewSoftQtGui.framework/Versions/4/ShrewSoftQtGui
			\"/Applications/${MACOSX_BUNDLE_BUNDLE_NAME}.app/Contents/MacOS/${MACOSX_BUNDLE_BUNDLE_NAME}\" )" )

endif( APPLE )
