cmake_minimum_required(VERSION 3.21)
project(Template)

set(CMAKE_CXX_STANDARD 23)

add_executable(Template main.cpp lib.h mylib.h INotice.h CSlitFile.h CSliptMan.h Streambase.h fileStream.h IMessage.h Factory.h House.h)
