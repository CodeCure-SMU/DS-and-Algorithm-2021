#include <iostream>
#include <queue>
using namespace std;
int main() {
	int N, K;
	queue<int> arr;
	cin >> N >> K;
	
	for (int i = 1; i <= N; i++) {
		arr.push(i);
	}
	cout << "<";
	while (!arr.empty()) {
		for (int j = 0; j < K - 1; j++) {
			arr.push(arr.front());
			arr.pop();
		}
		cout << arr.front();
		arr.pop();
		if (!arr.empty()) cout << ",";
	}
	cout << ">";
}