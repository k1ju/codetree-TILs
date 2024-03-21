#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;

    int sum=0;
    if(b>=a){

        for(a; a<=b; a++){
            if(a%5==0){

                sum += a;
            }
        }
    } else{
        for(b; b<=a; b++){
            if(b%5==0){

                sum += b;
            }
        }
    }    
        cout << sum;
        
    // 여기에 코드를 작성해주세요.
    return 0;
}