executable('client', 'client.cpp', dependencies: [
  TEMPLATE_core_dep,
  subproject('cpp-httplib').get_variable('cpp_httplib_dep'),
])

executable('server', 'server.cpp', dependencies: [
  TEMPLATE_core_dep,
  subproject('cpp-httplib').get_variable('cpp_httplib_dep'),
])
