#include "Node.h"

Node::Node(){ // default contructor
  next_ = nullptr;
  obj_ = new Complex();
}

Node::Node(const Node &other) = default ;//copy constructor

Node::Node(Complex* c){ // contructor taking as arg a pointer to a complex obj
  next_ = nullptr;
  obj_ = c;
}

Node* Node::getnext() const {
  return next_;
}

Complex* Node::getobj()const{
  return obj_;
}
