#include <iostream>
#include <cmath>
using namespace std;
int main() {



    string a,b,c;
    cin >> a >> b >> c;

    int minusNum = 0;

    if(abs((int)a.length() - (int)b.length()) > minusNum){
        minusNum = abs((int)a.length() - (int)b.length());
    }

    if (abs((int)a.length() - (int)c.length()) > minusNum){
        minusNum = abs((int)a.length() - (int)c.length());
    }

    if(abs((int)b.length() - (int)c.length()) > minusNum){
        minusNum = abs((int)b.length() - (int)c.length());
    }

    cout << minusNum;

    // 여기에 코드를 작성해주세요.
    return 0;
}