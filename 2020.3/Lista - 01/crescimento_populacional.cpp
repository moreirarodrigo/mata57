#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int PA, PB;
    float G1, G2;
    int anos = 0;

    cin >> PA >> PB >> G1 >> G2;

    while(PB >= PA && anos <= 100) {
        PA += (PA*(G1/100));
        PB += (PB*(G2/100));
        anos++;
    }

    if(anos > 100) {
        cout << "Mais de 1 seculo." << endl;
    } else {
        cout << anos << " anos." << endl;
    }
}