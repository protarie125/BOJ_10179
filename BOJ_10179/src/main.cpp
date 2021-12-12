#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		double v;
		cin >> v;

		v *= 0.8;
		v = round(v * 100) / 100;
		cout << '$' << setprecision(2) << fixed << v << '\n';
	}

	return 0;
}