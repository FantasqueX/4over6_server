set(CMAKE_C_STANDARD 11)

project(4over6_server)

aux_source_directory(. DIR_SRCS)

add_executable(server, ${DIR_SRCS})