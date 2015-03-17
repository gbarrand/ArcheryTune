// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file inlib.license for terms.

#include <inlib/to_deprec>
#include <inlib/num2s>
#include <inlib/sys/atime>

#include <iostream>
#include <cstdlib>

int main(int,char**) {

#ifdef INLIB_MEM
  inlib::mem::set_check_by_class(true);{
#endif

  unsigned int entries = 10000000;

 {inlib::atime begin = inlib::atime::now();
  std::string stmp;
  for(unsigned int count=0;count<entries;count++) {    
    if(!inlib::num2s(count,stmp)) {}
  }
  std::cout << "num2s() : " << inlib::atime::elapsed(begin) << std::endl;}

 {inlib::atime begin = inlib::atime::now();
  std::string stmp;
  for(unsigned int count=0;count<entries;count++) {    
    stmp = inlib::to<unsigned int>(count);
  }
  std::cout << "to() : " << inlib::atime::elapsed(begin) << std::endl;}

#ifdef INLIB_MEM
  }inlib::mem::balance(std::cout);
#endif

  return EXIT_SUCCESS;
}
