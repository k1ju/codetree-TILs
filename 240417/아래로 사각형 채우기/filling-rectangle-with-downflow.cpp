#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    int num = 1;
    int arr[10][10] = {};

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[j][i] = num;
            num++;
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}