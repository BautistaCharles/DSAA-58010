#include <iostream>
using namespace std;

int main() {
    double numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    double newNumber = 1.5;

    for (int i = length - 1; i > 0; i--) {
        numbers[i] = numbers[i - 1];
    }

    numbers[1] = newNumber;

    for (int i = 0; i < length; i++) {
        cout<<numbers[i]<<" ";
    }
    return 0;
}
