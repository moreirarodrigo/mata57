#include <iostream>
#include <vector>

using namespace std;

int main() {
    int qtdCaixas;
    vector<int> moedas;
    int aux;
    int salto;
    int ponto = 0;

    cin >> qtdCaixas;

    for(int i = 0; i < qtdCaixas; i++){
      cin >> aux;
      moedas.push_back(aux);
    }

    cin >> salto;

    for(int i = 0; i < moedas.size();) {
      ponto+= moedas[i];
      i+=salto;
    }

    cout << ponto << endl;
}
