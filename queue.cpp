#include <iostream>
#include <queue>

using namespace std;

int main() {
  std::queue<int> Example;

  Example.push(1);
  Example.push(2);
  Example.push(3);

  cout << "A fila esta vazia? " << Example.empty() << endl;
}
