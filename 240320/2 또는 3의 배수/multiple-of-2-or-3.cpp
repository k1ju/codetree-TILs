#include <iostream>
using namespace std;
int main() {


    int n;

    cin >> n;

for(int i =0; i<n; i++){
        
    if(n%2 ==0 && n%3 ==0){
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
}
    // 여기에 코드를 작성해주세요.
    return 0;
}