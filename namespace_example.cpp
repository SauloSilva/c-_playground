#include <iostream>

using namespace std;

// First Namespace
namespace NameA {
  void FunctionA() {
    cout << "Esse é a função A do namespace A" << endl;
  }
}

// Second Namespace
namespace NameB {
  void FunctionB() {
    cout << "Esse é a função B do namespace B" << endl;
  }
}

int main() {
  //Chama a FunctionA do NamespaceA
  NameA::FunctionA();

  //Chama a FunctionB do NamespaceB
  NameB::FunctionB();
}
