get_filename_component(CROSSLIB_CUR_DIR ${CMAKE_CURRENT_LIST_FILE} PATH) # for cmake before 2.8.3

include_directories("${CROSSLIB_CUR_DIR}/include/")
include_directories("${CROSSLIB_CUR_DIR}/port/${CROSSLIB_PORT}/")

if(CROSSLIB_PORT STREQUAL "linux")
	set(CMAKE_CXX_STANDARD_LIBRARIES "${CMAKE_CXX_STANDARD_LIBRARIES} -lpthread")
endif()

set(COMMON_SOURCES ${COMMON_SOURCES}
	"${CROSSLIB_CUR_DIR}/port/${CROSSLIB_PORT}/CLThread.cpp"
)
