#include <iostream>

using namespace std;

class Widget
{

public:
  // default copy constructor
  Widget(Widget& w) = default;

  // default destructor
  ~Widget() = default;

 // default copy assign
  Widget& operator=(Widget& w) = default;

  // default move constructor
  Widget(Widget&& rhs) = default;

  // default move assignment
  Widget& operator=(Widget&& rhs) = default;

  // construct widget from anything
  template<typename T>
  Widget(const T& rhs);

  // copy widget from anything
  template<typename T>
  Widget& operator=(const T& rhs);
};

int main(int argc, char** argv)
{

  cout << "Hello world" << endl;
  return 0;
}
