#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int NUM, PERF = 0;

    cin >> NUM;

    for(int i = 1; i < NUM; i++) {
        if(NUM%i == 0) {
            PERF += i;
        }
    }

    if(PERF == NUM) {
        cout << NUM << " eh perfeito" << endl;
    } else {
        cout << NUM << " nao eh perfeito" << endl;
    }
}