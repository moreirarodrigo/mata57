#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(int argc, char* argv[]) {
    int k;
    string p;

    cin >> k >> p;

    for(int i = 0; p[i] != '\0'; i++) {
        if(islower(p[i])) {
            p[i] = ((p[i] - 97 + k) % 26) + 97;
        } else if(isupper(p[i])) {
            p[i] = ((p[i] - 65 + k) % 26) + 65;
        }
    }

    cout << p << endl;
}