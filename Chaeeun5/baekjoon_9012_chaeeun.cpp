#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool VPS(string s) {
	int cnt = 0;
	vector<char> str;

	for (int i = 0; i < s.size(); i++) {
		char c = s[i];
		if (s[i] == '(') str.push_back(s[i]);
		else {
			if (!str.empty()) str.pop_back();
			else return false;
		}
	}
	return str.empty();
}
int main() {
	int T;
	cin >> T;


	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		if (VPS(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}