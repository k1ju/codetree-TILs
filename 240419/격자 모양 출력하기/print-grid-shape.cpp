#include <iostream>
using namespace std;
int main() {

    int arr [10][10] = {};

    int n,m;
    cin >> n >> m;


    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){

    //         arr[i][j] = 0;

    //     }
    // }

    for(int i=1; i<=m; i++){

        int a,b;
        cin >> a >> b;
        arr[a-1][b-1] = a * b;

    }


    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){

            cout << arr[i][j] << " ";

        }
        cout << endl;
    }




    // 여기에 코드를 작성해주세요.
    return 0;
}