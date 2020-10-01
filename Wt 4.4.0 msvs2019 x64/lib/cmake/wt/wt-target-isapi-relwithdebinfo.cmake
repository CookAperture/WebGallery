#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::Isapi" for configuration "RelWithDebInfo"
set_property(TARGET Wt::Isapi APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Wt::Isapi PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/wtisapi.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::Isapi )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::Isapi "${_IMPORT_PREFIX}/lib/wtisapi.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
