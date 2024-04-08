#include <iostream>
using namespace std;
int main() {

    int arr [10];
    int a,b;
    cin >> a >> b;

    for(int i=0; i<10; i++){
        if(i==0){
            arr[0] = a;
        } else if(i==1){
            arr[1] = b;
        } else{
            arr[i] = (arr[i-1] + arr[i-2]) % 10;
        }
    }

    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}