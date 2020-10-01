#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::HTTP" for configuration "Debug"
set_property(TARGET Wt::HTTP APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Wt::HTTP PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/wthttpd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/wthttpd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::HTTP )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::HTTP "${_IMPORT_PREFIX}/lib/wthttpd.lib" "${_IMPORT_PREFIX}/bin/wthttpd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
