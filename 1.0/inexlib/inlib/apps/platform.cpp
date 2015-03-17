// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file inlib.license for terms.
#include <inlib/os>

#include <iostream>
#include <cstdlib>

int main() {
  std::cout << inlib::os()
            << "-"
            << inlib::processor()
            << "-"
            << inlib::compiler()
            << std::endl;
  return EXIT_SUCCESS;
}

