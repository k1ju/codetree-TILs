#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    for(int i=0; i< n*2; i++){
        if(i%2==0){
            for(int j=0; j<i/2+1; j++){ // 1,2,3,4...
                cout << "* ";
            }
        }
        else {
           for(int k=0; k<n-(i-1)/2; k++){ // 4,3,2,1
                cout << "* ";
           } 
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}