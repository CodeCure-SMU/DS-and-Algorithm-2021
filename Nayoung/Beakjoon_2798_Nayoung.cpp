#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int num[100];
	int sum, max = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> num[i];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = num[i] + num[j] + num[k];
				if (sum > max && sum <= m)
					max = sum;
			}
		}
	}

	cout << max << "\n";
	return 0;

}
