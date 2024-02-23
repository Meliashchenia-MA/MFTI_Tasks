#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int n, a, d;
    cin >> n;
    for (int i = 0; i < n; i++){
        scanf("%d", &a);
        d = 2;
        while(d * d <= a){
            if (a % d == 0){
                    printf("%d ", d);
                    a = a / d;
                }
                else{
                    d++;
                }
        }
    if(a != 1){
        printf("%d\n", a);
    }
    }
}