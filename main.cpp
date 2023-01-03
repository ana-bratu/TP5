#include "Node.h"


#include <iostream>
using std::cout;
using std::endl;
int main(int argc, char const *argv[]) {

  Node n1 = Node();
  cout << "Next pointer:" << n1.getnext() << endl;
  cout << "Object:" << n1.getobj() << endl;


  Node n2 = Node(n1);
  cout << "Next pointer:" << n2.getnext() << endl;
  cout << "Object:" << n2.getobj() << endl;

  Complex c1 = Complex(1,1);
  Node n3 = Node(&c1);
  cout << "Next pointer:" << n3.getnext() << endl;
  cout << "Object:" << n3.getobj() << endl;
  return 0;
}
