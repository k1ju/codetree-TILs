#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j%2==0){
                cout << (i+1);
            } else{
                cout << n-i;
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}