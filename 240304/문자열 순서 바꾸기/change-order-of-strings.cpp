#include <iostream>
#include <string>
using namespace std;

int main() {

    string tmp;
    string s,t;
    cin >> s >> t;
    
    tmp = s;
    s = t;
    t = tmp;
    cout << s << endl << t;

    // 여기에 코드를 작성해주세요.
    return 0;
}