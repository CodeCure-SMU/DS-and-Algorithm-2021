#include<iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int A, B;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A >> B;
        cout << A + B << '\n';
    }
    return 0;
}