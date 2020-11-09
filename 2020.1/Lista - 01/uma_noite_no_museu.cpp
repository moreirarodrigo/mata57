#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int qtdEstatuas;
    vector<int> estatuas;
    int tamanho;
    int adicionais = 0;

    cin >> qtdEstatuas;

    for(int i = 0; i < qtdEstatuas; i++){
      cin >> tamanho;
      estatuas.push_back(tamanho);
    }

    sort(estatuas.begin(), estatuas.end());
    
   for(int i = *min_element(estatuas.begin(), estatuas.end()); i < *max_element(estatuas.begin(), estatuas.end()); i++){
        if(!binary_search(estatuas.begin(), estatuas.end(), i)){
            adicionais++;
        }
    }
    
    cout << adicionais << endl;
    
}
