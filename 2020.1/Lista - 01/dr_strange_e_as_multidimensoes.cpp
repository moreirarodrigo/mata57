#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> u, v, d;
    int dimensao, aux;
    bool tp = false;
    cin >> dimensao;
    
    for(int i = 0; i < dimensao; i++){
        cin >> aux;
        u.push_back(aux);
    }
    
    for(int i = 0; i < dimensao; i++){
        cin >> aux;
        v.push_back(aux);
    }

    for(int i = 0; i < dimensao; i++){
        cin >> aux;
        d.push_back(aux);
    }

    for(int i = 0; i < dimensao; i++){
        if(u[i]+v[i] == d[i]){
            tp = true;
        }else{
            tp = false;
        }
    }

    if(tp){
        cout << "OK" << endl;
    }else{
        cout << "NOPE :(" << endl;
    }
}