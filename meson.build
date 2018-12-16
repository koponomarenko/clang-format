project('clang_format_file', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++14'])

src = [
    'src/class_examples/Alfa.cpp',
    'src/class_examples/Alfa.h',
    'src/class_examples/Bravo.cpp',
    'src/class_examples/Bravo.h',
    'src/class_examples/Charlie.cpp',
    'src/class_examples/Charlie.h',
    'src/class_examples/Delta.cpp',
    'src/class_examples/Delta.h',
    'src/main.cpp',
]

inc = include_directories('src/class_examples')

executable('clang_format_file',
           sources : src,
           include_directories : inc,
           install : true)
