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

class A {
public:
  virtual void xxx() {::printf("A::xxx\n");}
  A(){
    ::printf("A::A\n");
    this->xxx();
    ::printf("A::A end\n");
  }
};

template <class PARENT>
class B : public PARENT {
public:
  virtual void xxx() {::printf("B::xxx\n");}
  B(){
    ::printf("B::B\n");
    this->xxx();
    ::printf("B::B end\n");
  }
};

class C : public B<A> {
public:
  virtual void xxx() {::printf("C::xxx\n");}
  C(){
    ::printf("C::C\n");
    this->xxx();
    ::printf("C::C end\n");
  }
};

#include <vector>

#include "../inlib/rtausmed"
#include "../inlib/rmtwistd"
#include "../inlib/randd"

int main() {
 {std::vector<int> vs;
  vs.assign(10,2);
  ::printf("debug : %lu\n",vs.size());
  std::string s;
  s.assign(12,' ');
  ::printf("debug : %lu\n",s.size());
  return 0;}
  /*
  inlib::rtausmeui r;
  while(r.shoot()!=0) {}
  ::printf("debug : found\n");
  */
  /*
  inlib::rtausmed r;
  ::printf("debug : rtausmed search 0 ...\n");
  while(r.shoot()!=1) {}
  ::printf("debug : rtausmed found 0\n");
  */
  /*
  inlib::rmtwistd r;
  ::printf("debug : rmtwistd search 0 or 1...\n");
  while((r.shoot()!=0)&&(r.shoot()!=1)) {}
  ::printf("debug : rmtwistd found 0 or 1\n");
  */
  /*
  inlib::rdir3d r;
  double x,y,z;
  while(true) {
    r.shoot(x,y,z);
    printf("debug : %g %g %g\n",x,y,z);
  }
  */
  inlib::rdir2d r;
  double x,y;
  while(true) {
    r.shoot(x,y);
    printf("debug : %g %g\n",x,y);
  }
  return 0;

  std::vector<int> vs;
  vs.assign(10,2);
  ::printf("debug : %lu\n",vs.size());
  ::printf("debug : i %d\n",vs[8]);
  vs.assign(20,3);
  ::printf("debug : i=8 %d\n",vs[8]);
  ::printf("debug : i=15 %d\n",vs[15]);
  vs.clear();
  vs.resize(10,4);
  ::printf("debug : 000 %d\n",vs[8]);
  vs.resize(20,4);
  ::printf("debug : 001 %d\n",vs[15]);

  return 0;
  //13:29:56 47:13:50
  double ra = 13.0+29.0/60.0+56.0/(3600.0);
  double dec = 47.0+13.0/60.0+50.0/(3600.0);
  ::printf("debug : -ra=%g -dec=%g\n",ra,dec);
  return 0;

  std::string s="a\nb\tc";
  ::printf("debug : %s\n",s.c_str());
  return 0;

  double m_n = 1.67493; //10-27 kg
  double m_p = 1.67262; //10-27 kg

  double m_Rn = 368.59160;
  double m_Po = 361.93691;

  //Rn(222,86) -> Po(218,84) + He(4,2)
  // m(Rn) > m(Po) + m(He)
 {double d = 3.6193691+0.0664466-3.6859160; //*10-25 <0 
  ::printf("debug : %g\n",d);} //-0.0001003

  ::printf("debug : 86*m_p+(222-86)*m_n %g > m(Rn) %g El %g\n",
	   86*m_p+(222-86)*m_n,m_Rn,m_Rn/222);
  ::printf("debug : 84*m_p+(218-84)*m_n %g > m(Po) %g El %g\n",
	   84*m_p+(218-84)*m_n,m_Po,m_Po/218);

  double m_D = 3.34358;
  double m_T = 5.00736;
  double m_He_4_2 = 6.64466;

  ::printf("debug : m_p+m_n %g > m(D) %g El %g\n",m_p+m_n,m_D,m_D/2);
  ::printf("debug : m_p+2*m_n %g > m(T) %g El %g\n",m_p+2*m_n,m_T,m_T/3);
  ::printf("debug : 2*m_p+2*m_n %g > m((He(4,2)) %g El %g\n",2*m_p+2*m_n,m_He_4_2,m_He_4_2/4);

  // If counting in term of quarks it should be ok. Masses of quarks
  // should be the same before and after reaction, but the binding enery
  // is not; it goes always toward a lesser binding energy.
  // But a lesser binding energy does not mean a lower or greater nuber of
  // nucleon in some element of the ending reaction.
  // Fusion : at end the binding energy of He(4,2) is lower than in T,D but there is more
  //          nucleons in He(4,2) than in T,D.
  // Fission : at end the binding energy of Po is lower that in Rn but there is more
  //          nucleons in Rn than in Po.

  // He(2,1) + He(3,1) -> He(4,2) + n(1,0)
  // m(D)+m(T) > m(He)+m(n)
  // m(D)>2*m_n
 {double d = 1.67493+6.64466-3.34358-5.00736; //*10-27 <0
  ::printf("debug : %g\n",d);} //-0.03135
  return 0;

  //B<A> b;
  //C c;
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

 {unsigned int nspace = 3*16;
  nspace = 9*(2+3);
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
