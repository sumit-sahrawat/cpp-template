// TODO: include core library

// TODO: remove example

#include <iostream>

#include "httplib.h"

int main(int argc, char** argv) {
  // TODO: use the core library to implement a web client matching ./server.cpp

  if (argc != 2) {
    std::cerr << "Missing server URL argument." << std::endl;
    return 1;
  }

  using httplib::Client, httplib::Result;

  Client client(argv[1]);

  while (true) {
    std::cout << "Name (default: \"World\"): ";

    std::string command = "/greet?name=";
    std::string input;
    if (!(std::cin >> input)) {
      break;
    }
    command.append(std::move(input));

    auto result = client.Get(command.data());
    std::cout << "status: " << result->status << ", "
              << "body: " << result->body << std::endl;
  }

  return 0;
}
