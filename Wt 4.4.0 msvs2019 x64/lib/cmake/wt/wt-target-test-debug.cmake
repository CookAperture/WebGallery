#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::Test" for configuration "Debug"
set_property(TARGET Wt::Test APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Wt::Test PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/wttestd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/wttestd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::Test )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::Test "${_IMPORT_PREFIX}/lib/wttestd.lib" "${_IMPORT_PREFIX}/bin/wttestd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
