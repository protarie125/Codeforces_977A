#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < k; ++i) {
		if (0 == n % 10) {
			n /= 10;
		}
		else {
			n -= 1;
		}
	}

	cout << n;

	return 0;
}