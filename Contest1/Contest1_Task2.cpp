#include <iostream>
#include <cmath>

using namespace std;


int main(){
    long long a, b, a1, b1, k;
    cin >> a >> b;
    a1 = a;
    b1 = b;
    if(a1 < b1){
        swap(a1, b1);
    }
    while(a1 % b1 != 0){
        k = a1 % b1;
        a1 = b1;
        b1 = k;
    }
    cout << a / b1 * b;
}