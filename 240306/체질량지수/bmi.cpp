#include <iostream>
using namespace std;

int main() {

double  m;
int kg,bmi;

cin >> m >> kg;
m /= 100;

bmi = kg / (m * m);


cout << bmi << endl;

if (bmi > 25){
    cout << "Obesity";    
}


    // 여기에 코드를 작성해주세요.
    return 0;
}