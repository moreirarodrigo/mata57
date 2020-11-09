#include <iostream>
#include <vector>

using namespace std;

int selectionSort(vector<int> &v) {
    int count = 0;

    for(int i = 0; i < v.size()-1; i++) {
        int min = i;
        for(int j = i + 1; j < v.size(); j++) {
            if(v.at(j) < v.at(min)) {
                min = j;
                count++;
            }
        }
        if(i != min) {
            int aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }

    return count;
}

int main(int argc, char* argv[]) {
    int n, num;
    
    cin >> n;

    vector<int> v;

    int i = 0;

    while(i < n) {
        cin >> num;
        v.push_back(num);
        i++;
    }

    int ord = selectionSort(v);

    if(ord == 0) {
        cout << "esta ordenado: executou " << ord << " permutas" << endl;
    } else {
        cout << "nao esta ordenado: executou " << ord << " permutas" << endl;
    }
}