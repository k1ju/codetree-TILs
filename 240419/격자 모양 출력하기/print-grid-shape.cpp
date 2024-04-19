#include <iostream>
using namespace std;
int main() {

    int arr [10][10] = {};

    int n;
    cin >> n >> n;


    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){

            arr[i][j] = 0;

        }
    }

    for(int i=1; i<=n; i++){

        int a,b;
        cin >> a >> b;
        arr[a][b] = a * b;

    }


    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){

            cout << arr[i][j] << " ";

        }
        cout << endl;
    }




    // 여기에 코드를 작성해주세요.
    return 0;
}