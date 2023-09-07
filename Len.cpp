#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 4, 3, 2, 1};
    int x = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << x << std::endl;

    return 0;
}
