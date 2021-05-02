#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL); 

	int a, b, input;

	cin >> input;

	for (int i = 0; i < input; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}
