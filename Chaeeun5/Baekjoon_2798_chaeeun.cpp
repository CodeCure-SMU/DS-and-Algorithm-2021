#include <iostream>
using namespace std;
int main() {
	int N, M;
	int card[100];
	int sum, res = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> card[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int x = j + 1; x < N; x++) {
				sum = card[i] + card[j] + card[x];
				if (sum <= M && sum > res) res = sum;
			}
		}
	}
	cout << res;


	return 0;
}
