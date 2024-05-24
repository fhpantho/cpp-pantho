#include <iostream>
#include <cmath>

std::string gameWinner(long long a, long long b) {
    if (a == b) {
        return "Bob";
    }

    if (std::abs(a - b) % 2 == 1) {
        return "Alice";
    }

    return "Bob";
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        long long a, b;
        std::cin >> a >> b;
        std::string winner = gameWinner(a, b);
        std::cout << winner << std::endl;
    }

    return 0;
}
