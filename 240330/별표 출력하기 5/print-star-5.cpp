#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    for(int k=0; k<n; k++){
        for (int j=0; j<n-k; j++){
            for(int i=0; i< n-k; i++){
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}