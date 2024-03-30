#include <iostream>
#include <string>
using namespace std;
int main() {


    int n;
    cin >> n;
    string result = "N";

    for(int i=2;i<n-1;i++){
        if(n%i==0){
            result = 'C';
            break;
        }
    }

    cout << result;

    // 여기에 코드를 작성해주세요.
    return 0;
}