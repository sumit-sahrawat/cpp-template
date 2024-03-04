// TODO: include core library
#include "example.hpp"

#include "httplib.h"

int main(int argc, char** argv) {
  // TODO: use the core library to implement a web server

  if (argc != 2) {
    std::cerr << "Missing port argument." << std::endl;
    return 1;
  }

  using httplib::Server, httplib::Request, httplib::Response;

  Server server;

  server.Get("/hi", [](const Request&, Response& response) {
    response.status = 501; // 501 Not Implemented
    response.set_content("NOT IMPLEMENTED!", "text/plain");
  });

  server.Get("/greet", [](const Request& request, Response& response) {
    response.status = 200;
    constexpr char kName[] = "name";
    if (request.get_param_value_count(kName)) {
      response.body = example::Greet(request.get_param_value(kName));
    } else {
      response.body = example::Greet();
    }
  });

  server.Get("/bye", [&](const Request&, Response& response) {
    response.status = 200; // 200 OK
    server.stop();
  });

  int port = std::stoi(argv[1]);
  server.listen("0.0.0.0", port);

  return 0;
}
