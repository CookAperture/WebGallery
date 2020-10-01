#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::DboMySQL" for configuration "Debug"
set_property(TARGET Wt::DboMySQL APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Wt::DboMySQL PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/wtdbomysqld.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/wtdbomysqld.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::DboMySQL )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::DboMySQL "${_IMPORT_PREFIX}/lib/wtdbomysqld.lib" "${_IMPORT_PREFIX}/bin/wtdbomysqld.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
