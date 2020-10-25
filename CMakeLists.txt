cmake_minimum_required(VERSION 3.17)
project(cpp_tutorial)

set(CMAKE_CXX_STANDARD 14)

MACRO(SUBDIRLIST result curdir)
    FILE(GLOB children RELATIVE ${curdir} ${curdir}/*)
    SET(dirlist "")
    FOREACH(child ${children})
        IF(IS_DIRECTORY ${curdir}/${child})
            LIST(APPEND dirlist ${child})
        ENDIF()
    ENDFOREACH()
    SET(${result} ${dirlist})
ENDMACRO()

SUBDIRLIST(SUBDIRS "${CMAKE_CURRENT_SOURCE_DIR}/examples/")

FOREACH(subdir ${SUBDIRS})
    message(STATUS ${subdir})
    file( GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/examples/${subdir}/*.cpp")

    FOREACH(source ${SOURCES})
        #set(SOURCE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/examples/${subdir}/${source}")
        get_filename_component(SOURCE_NAME ${source} NAME)
        message(STATUS ${SOURCE_NAME})

        add_executable("${subdir}__${SOURCE_NAME}" ${source})
    endforeach()
ENDFOREACH()

