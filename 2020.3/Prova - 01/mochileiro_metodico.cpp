#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
	int n, i;

	cin >> n;

	vector<int> v;

	for(int j = 0; j < n; j++) {
		cin >> i;
		v.push_back(i);
	}

	for(vector<int>::reverse_iterator it = v.rbegin(); it!=v.rend(); it++) {
		cout << *it << " ";
	}

	cout << endl;
}