project(mystring)

cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
						# Если версия установленой программы
						# старее указаной, произайдёт аварийный выход.

add_executable(mystring main.cpp string.h string.cpp)		# Создает исполняемый файл с именем main
									# из исходника main.cpp
