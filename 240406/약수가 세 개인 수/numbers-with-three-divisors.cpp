#include <iostream>
using namespace std;
int main() {

    int a,b;
    cin >> a >> b;
    int cnt = 0;
    for(int i=a; i<b+1; i++){

        int num = 0; 
        for(int j=1; j<=i; j++){
            if(i%j == 0){
                num ++;
            }
            if(j==i && num==3){
                cnt ++;
            }
        }
    }
    cout << cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}