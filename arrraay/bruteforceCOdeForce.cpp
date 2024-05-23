#include <iostream>

int main() {
    int n, implement_count = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        std::cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2) {
            implement_count++;
        }
    }

    std::cout << implement_count << std::endl;

    return 0;
}
