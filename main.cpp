#include <iostream>
using namespace std;

int main() {
    int numbers[] = { 3, 9, 1, 7, 5 };
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int maxNum = numbers[0];

    for (int i = 1; i < n; ++i) {
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
    }

    cout << "Maximum: " << maxNum << endl;
    return 0;
}
