#include <iostream>
using namespace std;
int main() {

int a = 5, b = 6, c = 7;
int temp;

temp = a;
a = c; // a=7
c = temp; // c = 5
temp = b; // temp =6 
b = c; // b = 5



c = temp;





cout << a << endl << b << endl << c;
    return 0;
}