#include <iostream>
using namespace std;
int main() {

for(int i=0; i<19; i++){
    for(int j=0; j<10; j++){

        if(j==9){
            cout << (i+1) << " * " << (2*j+1) << " = " << (i+1) * (2*j+1); 
        } else{
            cout << (i+1) << " * " << (2*j+1) << " = " << (i+1) * (2*j+1) << " / " ;
            cout << (i+1) << " * " << (2*j+2) << " = " << (i+1) * (2*j+2); 
        }

        cout << endl;
    }
}
    // 여기에 코드를 작성해주세요.
    return 0;
}