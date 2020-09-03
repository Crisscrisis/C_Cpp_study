cmake_minimum_required(VERSION 3.0)
project(observer_subject)

aux_source_directory(${PROJECT_SOURCE_DIR} PB_FILES)

add_library(${PROJECT_NAME} STATIC ${PB_FILES})

# 规定.h头文件路径
include_directories(${PROJECT_SOURCE_DIR}
     ${INCLUDE_DIR}
)

