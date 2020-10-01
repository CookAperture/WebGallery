if(FALSE)
  # Find Boost
  set(Boost_USE_STATIC_LIBS ON)
  set(Boost_USE_MULTITHREADED ON)
  find_package(Boost QUIET
    COMPONENTS program_options;filesystem;thread)
endif()

# Required target
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-wt.cmake)
# Optional targets
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-test.cmake OPTIONAL)
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-http.cmake OPTIONAL)
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-fcgi.cmake OPTIONAL)
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-isapi.cmake OPTIONAL)
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-dbo.cmake OPTIONAL)
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-dbosqlite3.cmake OPTIONAL)
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-dbopostgres.cmake OPTIONAL)
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-dbofirebird.cmake OPTIONAL)
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-dbomysql.cmake OPTIONAL)
include(${CMAKE_CURRENT_LIST_DIR}/wt-target-dbomssqlserver.cmake OPTIONAL)
