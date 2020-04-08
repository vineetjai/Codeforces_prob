#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    std::vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
        for (int j = 2 * i; j <= n; j += i)
            a[j] = i;
    std::sort(a.begin(), a.end());
    for (int i = 2; i <= n; ++i) {
        std::cout << a[i] << " \n"[i == n];
    }
    return 0;
}
