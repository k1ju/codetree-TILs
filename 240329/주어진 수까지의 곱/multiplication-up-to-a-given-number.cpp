#include <iostream>
using namespace std;
int main() {

int a,b;
int sum = 1;

cin >> a >> b;
for(a; a<=b; a++){
    sum *= a;
}

cout << sum;

    // 여기에 코드를 작성해주세요.
    return 0;
}