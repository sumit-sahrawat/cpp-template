TEMPLATE_core_sources = [
  # TODO: populate sources
  'example.cpp',
  'example.hpp',
]

TEMPLATE_core_test_sources = [
  # TODO: populate sources
  'example_tests.cpp',
]

fs = import('fs')
if fs.is_dir('include')
  TEMPLATE_core_inc = include_directories('include')
else
  TEMPLATE_core_inc = include_directories('.')
endif

TEMPLATE_core_lib = library(
  'TEMPLATE_core',
  TEMPLATE_core_sources,
  include_directories: TEMPLATE_core_inc,
)

TEMPLATE_core_dep = declare_dependency(
  include_directories: TEMPLATE_core_inc,
  link_with: [ TEMPLATE_core_lib ],
)

TEMPLATE_core_test_exe = executable(
  'TEMPLATE_core_test',
  TEMPLATE_core_test_sources,
  dependencies: [
    TEMPLATE_core_dep,
    subproject('gtest').get_variable('gtest_main_dep'),
    subproject('gtest').get_variable('gmock_dep'),
  ]
)

test('TEMPLATE_core', TEMPLATE_core_test_exe)