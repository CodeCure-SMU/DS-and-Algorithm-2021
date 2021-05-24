#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
#define Buffer 50

bool Check(char Paren[]) {
	int len = strlen(Paren);
	stack<char>st;

	for (int i = 0; i < len; i++) {
		char ch = Paren[i];

		if (ch == '(')
			st.push(ch);
		else {
			if (!st.empty())
				st.pop();
			else
				return false;
		}
	}

	return st.empty();

}

int main() {
	char Paren[Buffer];
	int num;
	
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> Paren;

		if (Check(Paren))
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}
