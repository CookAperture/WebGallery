#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::Wt" for configuration "RelWithDebInfo"
set_property(TARGET Wt::Wt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Wt::Wt PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/wt.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/wt.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::Wt )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::Wt "${_IMPORT_PREFIX}/lib/wt.lib" "${_IMPORT_PREFIX}/bin/wt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
