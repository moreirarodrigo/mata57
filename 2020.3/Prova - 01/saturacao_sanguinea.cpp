#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	char p;
	int s;

	while(true) {
		cin >> p;

		if(p == '#') {
			break;
		}

		cin >> s;

		if(s < 90) {
			cout << p << " Internação" << endl;
		} else {
			cout << p << " Alta" << endl;
		}
	}
}