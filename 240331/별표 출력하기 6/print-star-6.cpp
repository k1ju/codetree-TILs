#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int k=0; k<2*n-1 - 2*i; k++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    for(int i=0; i< n-1; i++){
        for(int j=0; j<n-2-i; j++){
            cout << "  ";
        }
        for(int k=0; k<2*i+3; k++){
            cout << "* ";
        }
        cout << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}