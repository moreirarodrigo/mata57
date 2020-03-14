#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string encomendado, encontrado;
    
    cin >> encomendado;
    cin >> encontrado;
    
    sort(encontrado.begin(), encontrado.end());
    sort(encomendado.begin(), encomendado.end());
    
    if(encomendado.compare(encontrado) == 0){
        cout << "Sim" << endl;
    }else{
        cout << "Nao" <<endl;
    }
}