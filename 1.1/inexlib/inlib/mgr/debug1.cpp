#include <string>
#include <iostream>

class A {
public:
  const std::string& name() const {std::cout << "const" << std::endl;return m_name;}
  //std::string name() {std::cout << "not const" << std::endl;return m_name;}
public:
  std::string m_name;
};

int main() {
  A a;
  a.m_name = "xxx";

  std::string nm = "uuuu_"+a.name()+"_vvv";

  std::cout << nm << std::endl;

  return 0;
}
