cmake_minimum_required(VERSION 3.1.3)
project(weather) 

set(CMAKE_CXX_STANDARD 11)

include_directories(
	include
	)

add_executable(weather
	src/weather.cpp
	)

target_link_libraries(weather
	curl
	curlpp
	)
