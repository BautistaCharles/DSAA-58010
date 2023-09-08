#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 4, 3, 2, 1};

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] > numbers[j]) {
                swap(numbers[i], numbers[j]);
            }
        }
    }

    for (int i = 0; i < 5; i++) {
      cout<<numbers[i]<<" ";
    }

    return 0;
}
