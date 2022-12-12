cmake_minimum_required(VERSION 3.15) # ѕроверка версии CMake.
									 # ≈сли верси€ установленой программы
									 # старее указаной, произайдЄт аварийный выход.

set(PROJECT_NAME test) # задать константу с именем проекта 
project("${PROJECT_NAME}") # им€ проекта 


set(CMAKE_CXX_STANDARD 17) # устанавливаем 17 стандарт €зыка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/") # указываем, где искать файлы заголовков

add_executable("${PROJECT_NAME}" laboratornaya6.cpp
                                 inc/lab6.hpp
                                 src/lab6.cpp) # добавить исполн€емый файл