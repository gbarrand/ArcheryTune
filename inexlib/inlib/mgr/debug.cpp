#include <cstdio>
#include <cmath>
#include <iostream>

#include "../inlib/typedefs"

typedef __int128_t int128;
typedef __uint128_t uint128;
inline uint128 uint128_mx() { //340 282 366 920 938 463 463 374 607 431 768 211 455 //it has 39 digits.
  uint128 one = 1;
  uint128 n = 0;
  for(unsigned int i=0;i<128;i++)  n += one<<i;
  return n;
}

void print_uint128(uint128 n) {
  if (n == 0) return;
  print_uint128(n/10);
  ::putchar(n%10+0x30);
}

inline uint128 _2_pow(unsigned int a_pow) {
  uint128 one = 1;
  uint128 n = 0;
  for(unsigned int i=0;i<a_pow;i++)  n += one<<i;
  return n;
}

#include "../inlib/mathT"

int main() {
  /*
  //uint128 x = uint128_mx();
  uint128 x = inlib::uint64_mx();
  //::printf("__int128 max  %016"PRIx64"%016"PRIx64"\n",(uint64)(x>>64),(uint64)x);
  print_uint128(x);::putchar('\n');
  //return 0;

  std::cout << ::log(3)/::log(2) << std::endl;
  std::cout << ::log(5)/::log(2) << std::endl;
  std::cout << ::log(10)/::log(2) << std::endl;
  std::cout << 128*::log(2)/::log(10) << std::endl;
  return 0;

  uint128 nval = 3;
  uint128 number = inlib::power<uint128>(3,64)-5;

  for(uint128 number=0;number<10;number++) {
  print_uint128(number);::putchar('\n');
  unsigned int is[64+1];
 {uint128 rest = number;
  uint128 pw = inlib::power<uint128>(nval,64);
  for(int count=64;count>=0;count--) {
    is[count] = rest/pw;
    rest -= is[count]*pw;
    //    ::printf("debug : %d :\n",count);
    //    print_uint128(is[count]);::putchar('\n');
    pw /= nval;
  }
 {for(int count=64;count>=0;count--) ::printf("%d",is[count]);
  ::putchar('\n');}
 }}
  */

  /*
  uint128 check = 0;
 {for(int count=0;count<=64;count++) {
    uint128 pw = inlib::power<uint128>(nval,count);
    check += is[count]*pw;
  }}
  print_uint128(check);::putchar('\n');
  */

  //  return 0;

 {unsigned int nspace = 3*4*4;
  //unsigned int nspace = 12;
  unsigned int nval = 5;
  //std::cout << ::log(nval)/::log(2) << std::endl;
  std::cout << "2^" << nspace*::log(nval)/::log(2) << std::endl;
  //std::cout << ::pow(nval,nspace) << std::endl;
  std::cout << ::pow(2,nspace*::log(nval)/::log(2)) << std::endl;}
  return 0;
}

/*
//#include <cstdio>
//#include <cmath>
#include <complex>
#include </usr/include/complex.h>
#undef complex

int main() {
  std::complex<double> c;
  //double _Complex z = 1 + 2 * _Complex_I;
  //double complex z = 1 + 2 * I;
  double _Complex z = 1;
  //double complex z = 1;
  double _Complex z2 = _Complex_I;
  return 0;
}
*/
