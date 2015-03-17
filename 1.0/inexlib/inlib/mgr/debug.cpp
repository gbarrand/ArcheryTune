#include <cstdio>

class A {
public:
  virtual void xxx() {
    ::printf("debug : A::xxx()\n");
  }
  bool operator()(double a,double b) {
    ::printf("debug : A::operator(%g %g)\n",a,b);
    return true;
  }
public:
  A() {
    ::printf("debug : A::A()\n");
  }
  virtual ~A() {
    ::printf("debug : A::~A()\n");
  }
private:
  int m_a;
};

class B : public A {
public:
  virtual void xxx() {
    ::printf("debug : B::xxx() : 000\n");
  }
};

#include <cstdlib>

//#include "../inlib/math"
#include <cmath>

int main() {
  {double x = -2;
  ::printf("debug : %g\n",::pow(x*x,0.5));
  return 0;}


  long double x = -12;
  ::printf("debug : %.20Lg\n",::expl(x*x*0.5));

  long double s2 = ::sqrtl(2);
  long double _2 = s2*s2;
  ::printf("debug : %.20Lg\n",_2);

  /*
  void* ma = malloc(sizeof(A));
  //A* a = (A*)::operator new(sizeof(A),ma,1);
  //A* a = new (ma) A(); 
  return 0;
  B b;

  b.xxx();

  //A* a = safe_cast<A*>(&b);
  //a->xxx();

  A a;
  a(2.0,3.0);

  return 0;
  */
}
