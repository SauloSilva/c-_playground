#include <iostream>

using namespace std;

// Definição de template onde aceita um tipo generico
template <class GenericType>

// Tipo generico pode ser trocado por quando dado do tipo generico
// A função aceita 2 parametros do tipo do dado generico
// A função também retorna o valor do dado generico
GenericType MaxValue(GenericType a, GenericType b) {
  // Retorna o maior número
  return (a > b ? a : b);
}

int main() {
  // Chama a função passando 2 integers
  cout << "O valor máximo entre 1 e 2, é:" << MaxValue(1, 2);

  return 0;
}

