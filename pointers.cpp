#include <iostream>

using namespace std;

int main() {
  int i;
  i = 10;

  cout << "O valor de i é:" << i << endl;
  cout << "O valor de i na mémoria' é:" << &i << endl;

  // Chamando o ponteiro i
  int *p;
  p = &i;

  cout << "O valor de *p é:" << *p << endl;
}
