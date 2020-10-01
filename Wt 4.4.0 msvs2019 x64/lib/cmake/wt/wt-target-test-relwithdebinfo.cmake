#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::Test" for configuration "RelWithDebInfo"
set_property(TARGET Wt::Test APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Wt::Test PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/wttest.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/wttest.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::Test )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::Test "${_IMPORT_PREFIX}/lib/wttest.lib" "${_IMPORT_PREFIX}/bin/wttest.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
