#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::DboPostgres" for configuration "Debug"
set_property(TARGET Wt::DboPostgres APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Wt::DboPostgres PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/wtdbopostgresd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/wtdbopostgresd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::DboPostgres )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::DboPostgres "${_IMPORT_PREFIX}/lib/wtdbopostgresd.lib" "${_IMPORT_PREFIX}/bin/wtdbopostgresd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
