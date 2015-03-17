/*
#include <type_traits>
#include <iostream>
 
// foo1 overloads are enabled via the return type
template<class T>
typename std::enable_if<std::is_floating_point<T>::value, T>::type 
    foo1(T t) 
{
    std::cout << "foo1: float\n";
    return t;
}
*/ 


#include "../inlib/num2s"

#include <ostream>
#include <errno.h>
#include <cstring>

inline std::ostream& _serror(std::ostream& a_out) {
  errno = 333;
  a_out << " error : " << (int)errno << " : " << std::string(strerror(errno)) << ".";
  return a_out;
}

#include <iostream>
#include <cmath>
#include <cstdio>

inline void dump(std::ostream& a_out,const std::string& a_s){
  a_out << a_s << std::endl;
}

int main() {
  std::string file("xxx");
  //const std::string& _file = file;
  //std::cout << _file << std::endl;
  dump(std::cout,file);
  /*
  //foo1<int>(1);
  //std::cout << " bool0 = " << inlib::_num2s<bool>(true) << std::endl;
  std::cout << " bool0 = " << inlib::_num2s<float>(1) << std::endl;
  std::cout << " bool0 = " << inlib::_num2s<int>(1) << std::endl;
  double d = 0.1;
  bool b1,b2;
  ::printf("debug : sizeof()");
  bool b = b1/0;
  std::cout << " bool0 = " << inlib::_num2s<bool>(b) << std::endl;
  return 0;
  std::cout << " bool = " << inlib::_num2s<bool>(true) << std::endl;
  char a = 'a';
  std::cout << " char = " << inlib::_num2s<char>(a) << std::endl;
  std::string s;
  //std::cout << " size() = " << inlib::_num2s(s.size()) << std::endl;
  return 0;
  ::printf("debug : %g\n",62*log(2)/log(10));
  bool val = true;
  std::cout << val << ", bool = " << false << std::endl;

  char c = 11;char a = 'a';
  ::printf("debug : %d %d\n",c,a);
  std::cout << c << ", char = " << a << std::endl;

  unsigned char uc = 11; unsigned char ua = 'a';
  ::printf("debug : %d %d\n",uc,ua);
  std::cout << uc << ", char = " << ua << std::endl;

  std::cout << inlib::_num2s<double>(3.14) << ", str = " << inlib::s2s("uuuu") << ", bool = " << inlib::_num2s<bool>(true) << std::endl;

  std::string xxx("uuu");
  xxx = "utest_"+xxx+".root";
  std::cout << xxx << std::endl;  

  std::cout << 123 << " " << std::hex << 123 << " " << std::dec << 123 << std::endl;

  std::ios::fmtflags old_flags = std::cout.flags();
  std::cout << std::hex << 123 << std::endl;
  std::cout.flags(old_flags);
  std::cout << 123 << std::endl;

  std::cout << "inlib::net::host_name :"
            << " gethostname() :" << _serror(std::cout)
            << std::endl;
  */
  return 0;
}


