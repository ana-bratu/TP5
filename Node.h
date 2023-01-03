#ifndef NODE_H_
#define NODE_H_

#include "Complex.h"

class Node {
public:
  Node(); // default constructor
  Node(const Node &other); // copy constructor
  Node(Complex* c); // contructor taking as arg a pointer to a complex obj
  Node* getnext() const;
  Complex* getobj() const;
private:
  Node* next_;
  Complex* obj_;

};

#endif  // NODE_H_
