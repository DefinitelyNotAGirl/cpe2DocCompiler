#!/usr/bin/env python3
# -*- coding:utf-8 -*-+

import os
import platform

compiler_cxx = "g++"
compiler_c = "gcc"
assembler = "as"
linker = "g++"

args_cxx = "-std=c++20 -g -Wno-write-strings -rdynamic -pedantic -Wno-multichar -Wunreachable-code -Wno-literal-suffix -Wno-pointer-arith -fpermissive -Iinc/ -g -c -fdiagnostics-color"
args_linker = "-Llib/ -lc -lstdc++ -lcargparse -lbacktrace -g -rdynamic"

host = platform.system()
#+
#+
#+ macOS to macOS
#+
#+
if(host == "Darwin"):
	compiler_cxx = "clang++"
	args_cxx = "-std=c++20 -g -Wno-write-strings -pedantic -Wno-switch -Wno-multichar -Wunreachable-code -Wno-pointer-arith -fpermissive -Iinc/ -g -c -fdiagnostics-color -Dplatform_apple"
	compiler_c = "clang"
	assembler = "nasm"
	linker = "clang++"
	args_linker = "-Llib/ -lc -lstdc++ -lcargparse -g -rdynamic"
#+
#+
#+ Linux
#+
#+
elif(host == "Linux"):
	compiler_cxx = "g++"
	args_cxx = "-std=c++20 -g -Wno-write-strings -rdynamic -pedantic -Wno-multichar -Wunreachable-code -Wno-literal-suffix -Wno-pointer-arith -fpermissive -Iinc/ -g -c -fdiagnostics-color -Dplatform_linux"
	compiler_c = "gcc"
	assembler = "as"
	linker = "g++"
	args_linker = "-Llib/ -lc -lstdc++ -lcargparse -lbacktrace -g -rdynamic"
