#include <iostream>
#include <string>
using namespace std;
int main() {
    int a,b,n;
    cin >> a >> b;

    cout << a / b;
    cout << ".";

    a %= b;
    for(int i=0; i<20; i++){
         a*=10;
         cout << a / b;
         a%=b;
         
    }

    // cout << quotient;
    // cout << ".";
    // for(int i=0; i<20; i++){
    //     cout << n;

    //     n = (n*10)/b;

    //     remainder += n;
    // }



    return 0;
}