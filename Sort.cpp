#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 4, 3, 2, 1};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        cout<<numbers[i]<<" ";
    }
    return 0;
}
