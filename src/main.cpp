#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		int a, b, c;
		cin >> a >> b >> c;

		auto ans = int{ 0 };
		for (auto x = 1; x <= a; ++x) {
			for (auto y = 1; y <= b; ++y) {
				for (auto z = 1; z <= c; ++z) {
					if (x % y == y % z &&
						y % z == z % x) {
						++ans;
					}
				}
			}
		}

		cout << ans << '\n';
	}

	return 0;
}