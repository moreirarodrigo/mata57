#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int quadrado[3][3];
    int sumDP = 0, sumDS = 0;
    bool ehMagico = false;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> quadrado[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        sumDP += quadrado[i][i];
    }

    for(int i = 0; i < 3; i++) {
        sumDS += quadrado[i][3-1-i];
    }

    if(sumDP != sumDS) {
        ehMagico = false;
    } else {
        ehMagico = true;
    }

    for(int i = 0; i < 3; i++) {
        int sumLinha = 0;
        
        for(int j = 0; i < 3; i++) {
            sumLinha += quadrado[i][j];
        }

        if(sumLinha != sumDP) {
            ehMagico = false;
        } else {
            ehMagico = true;
        }
    }

    for(int i = 0; i < 3; i++) {
        int sumColuna = 0;
        
        for(int j = 0; j < 3; j++) {
            sumColuna += quadrado[i][j];
        }

        if(sumColuna != sumDP) {
            ehMagico = false;
        } else {
            ehMagico = true;
        }
    }


    if(ehMagico) {
        cout << "eh um quadrado magico" << endl;
    } else {
        cout << "nao eh um quadrado magico" << endl;
    }
}