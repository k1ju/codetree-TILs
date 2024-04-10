#include <iostream>
using namespace std;
int main() {

    int a,b,c,d;
    a=0, b=0, c=0, d=0;

    for(int i=0; i<3; i++){

        char cold;
        cin >> cold;
        int temperature;
        cin >> temperature;

        // cout << cold << " " << temperature << " ";
        if( cold == 'Y' && temperature >=37){
            a++;
        } else if( cold == 'N' && temperature >=37){
            b++;
        } else if( cold == 'Y' && temperature <37) {
            c++;
        } else {
            d++;
        } 

    }
        cout << a << " " << b << " " << c << " " << d << " ";
        if(a>=2){
            cout << "E";
        }


    // 여기에 코드를 작성해주세요.
    return 0;
}