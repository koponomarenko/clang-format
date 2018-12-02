#!/bin/bash
clang_format_bin="clang-format"
find . \( -iname *.h -o -iname *.c -o -iname *.hpp -o -iname *.cpp \) -exec $clang_format_bin -i -style=file -fallback-style=none {} \;
