#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 0; i < n; i++) {
        for(int s = 0; s < i; s++) {
            cout << " ";
        }
        for(int j = 0; j < (2*n - 1) - 2*i; j++) {
            cout << "*";
        }

        cout << endl;
    }
    for(int i = n-2; i >= 0; i--) {

        for(int s = 0; s < i; s++) {
            cout << " ";
        }

        for(int j = 0; j < (2*n - 1) - 2*i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}