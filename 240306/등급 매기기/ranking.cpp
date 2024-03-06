#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

string grade;
    if(n>=90) {
        grade = "A";
    }else if(n>=80) {
        grade = "B";
    }else if(n>=70) {
        grade = "C";
    }else if(n>=60) {
        grade = "D";
    }else {
        grade = "F";
    }
    cout << grade;
    

    // 여기에 코드를 작성해주세요.
    return 0;
}