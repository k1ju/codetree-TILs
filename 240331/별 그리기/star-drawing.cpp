#include <iostream>
using namespace std;
int main() {
    int n;
    cin >>n;

    for(int i=0; i<n;i++){
        for( int k=0; k<n-i-1; k++){
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=0; i<n-1; i++){
        for(int k=0; k<i+1; k++){
            cout << " ";
        }
        for(int j=0; j<2*n-1-2*(i+1); j++){
            cout << "*";
        }
        cout << endl;
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}