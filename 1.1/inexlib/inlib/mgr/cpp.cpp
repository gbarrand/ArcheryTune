#include <cstdio>

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


int main() {
  //B<A> b;
  C c;
  return 0;
}
