#include <iostream>

using namespace std;

int main(){
    int f,c;
    cin >> f >> c;
    int v[f][c];
    for(int i  = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cin >> v[i][j];
        }
    }
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c-1; j++){
            if((v[i][j] == 0)&&(v[i][j+1] == 0)){
                cout << "Fileira: " << i+1 << endl;
                cout << "Assentos: " << j+1 << " e " << j+2 << endl;
                return 0;
            }
        }
    }
    return 0;
}