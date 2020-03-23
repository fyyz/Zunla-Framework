set (SRC_LIST
	"zl_data_format_base.cpp"
	"zl_data_format_json.cpp"
	"zl_data_format_xml.cpp"
	"zl_environment.cpp"
	"main.cpp"
)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package (Boost 1.66 REQUIRED)

#[[
message(STATUS "SRC_LIST           : " "${SRC_LIST}")
message(STATUS "BOOST_ROOT         : " "${BOOST_ROOT}")
message(STATUS "BOOST_INCLUDEDIR   : " "${Boost_INCLUDE_DIRS}")
message(STATUS "Boost_LIBRARY_DIRS : " "${Boost_LIBRARY_DIRS}")
message(STATUS "Boost_LIBRARIES    : " "${Boost_LIBRARIES}")
]]

add_executable (zunla ${SRC_LIST})
target_include_directories(zunla PUBLIC ${Boost_INCLUDE_DIRS})
target_link_directories(zunla PUBLIC ${Boost_LIBRARY_DIRS})
target_link_libraries(zunla ${Boost_LIBRARIES})
