#include <iostream>
#include <cmath>
using namespace std;
int main() {


    int n;
    cin >> n;
    int min=99999;

    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(abs(arr[i] - arr[j]) < min){
                min = abs(arr[i] - arr[j]);
            }
        }

    }

    cout << min;
    // 여기에 코드를 작성해주세요.
    return 0;
}