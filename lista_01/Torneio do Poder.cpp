#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct guerreiro {
  string nome;
  int poder;
};

bool cmp(guerreiro a, guerreiro b) {
  return(a.poder < b.poder);
}

int main() {
  int total, vencedores;
  vector<guerreiro> guerreiros;
  guerreiro aux;

  cin >> total >> vencedores;

  for(int i = 0; i < total; i++){
    cin >> aux.nome >> aux.poder;
    guerreiros.push_back(aux);
  }

  sort(guerreiros.rbegin(), guerreiros.rend(), cmp);

  for(int i = 0; i < vencedores; i++){
    cout << guerreiros[i].nome << " " << guerreiros[i].poder << endl;
  }

}
