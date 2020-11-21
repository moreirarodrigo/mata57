#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	bool primo = true;

	cin >> n;

	if(n == 0 || n == 1) {
		primo = false;
	} else {
		for(int i = 2; i <= n/2; i++) {
			if(n%i == 0) {
				primo = false;
				break;
			}
		}
	}

	if(primo) {
		cout << n << " eh primo" << endl;
	} else {
		cout << n << " nao eh primo" << endl;
	}
}