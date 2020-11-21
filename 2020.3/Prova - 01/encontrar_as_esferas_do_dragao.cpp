#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
	int n, c = 0;
	char e;

	vector<char> v;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> e;
		v.push_back(e);
	}

	for(vector<char>::iterator it = v.begin(); it!=v.end(); it++){
		if(*it == '*') {
			c++;
		}
	}

	if(c != 7) {
		cout << "Pedido negado" << endl;
	} else {
		cout << "Pedido realizado" << endl;
		int t = 1;
		for(int i = 0; i < n; i++) {
			if(v.at(i) == '*') {
				cout << t++ << " ";
			} else {
				cout << v.at(i) << " ";
			}
		}
	}

	cout << endl;
}