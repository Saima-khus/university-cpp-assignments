#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    cout << "Enter 9 numbers (Positive):";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
        cout<<endl;
    }
    cout << "Result:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num = arr[i][j];
            int prime = 1; 

            for (int k = 2; k < num; k++) {
                if (num % k == 0) {
                    prime = 0;
                    break;
                }
            }
            if (prime == 1)
                cout << num << " is Prime" << endl;
            else
                cout << num << " is not Prime" << endl;
        }
    }
    return 0;
}