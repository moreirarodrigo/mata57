#include <iostream>

using namespace std;

int buscaBinaria(long long v[], int n, int k) {
    int i = 0, f = n - 1;

    while(i <= f) {
        int m = i + ((f - i) / 2);
        if(k == v[m]) {
            return m;
        }

        if(k < v[m]) {
            f = m - 1;
        } else {
            i = m + 1;
        }
    }

    return -1;
}

int main() {
    int n, k;

    cin >> n;
    
    long long v[n];

    v[0] = 0;
    v[1] = 1;

    for(int i = 2; i <= n; i++) {
        v[i] = v[i-1] + v[i-2];
    }

    cin >> k;

    int index = buscaBinaria(v, n, k);

    if(index == -1) {
        cout << k << " nao existe" << endl;
    } else {
        cout << k << " esta na posicao " << index + 1<< endl;
    }
    
    return 0;
}