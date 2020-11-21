#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
	int cx, e, aux;
	vector<int> v;
	bool found = false;
	cin >> cx;

	for(int i = 0; i < cx; i++) {
		cin >> aux;
		v.push_back(aux);
	}

	cin >> e;

	for(vector<int>::iterator it = v.begin(); it!=v.end(); it++) {
		if(e == *it) {
			found = true;
		}
	}

	if(found) {
		cout << e << endl;
	} else {
		cout << -1 << endl;
	}
}