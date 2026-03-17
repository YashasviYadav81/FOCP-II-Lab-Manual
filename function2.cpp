#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 1; i <= n; i++){

       for(int t = 1; t <= n - 1; t++){
            cout << " ";
        }

       for(int j = 1; j <= 2*i - 1; j++){
            cout << "* ";
        }

        cout << endl;
    }
}

int main(){
    pattern(5);
    return 0;
}