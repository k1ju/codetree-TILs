#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    char grade;

    for(int i=n; i<=100; i++){
        if(i>=90){
            grade = 'A';
        } else if(i>=80){
            grade = 'B';
        } else if(i>=70){
            grade = 'C';
        } else if(i>=60){
            grade = 'D';
        } else if(i>=50){
            grade = 'F';
        } 
        cout << grade << " ";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}