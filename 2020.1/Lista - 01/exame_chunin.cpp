#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int qtdGenin;
  int qtdPontuacao;
  int pontos;
  vector<int> genins;

  cin >> qtdGenin >> qtdPontuacao;

  for(int i = 0; i < qtdGenin; i++){
    cin >> pontos;
    genins.push_back(pontos);
  }

  sort(genins.rbegin(), genins.rend());

  for(int i = 0;i < qtdPontuacao; i++){
    cout << genins[i] << endl;
  }
}
