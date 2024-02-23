#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    int n, q, i, j;
    double k, sum, c;
    cin >> n;
    vector <double> a(n);
    for(int i = 0; i < n; i++){
        scanf("%lf", &k);
        a[i] = k;
    }
    cin >> q;
    for(int m = 0; m < q; m++){
        scanf("%d %d", &i, &j);
        if(j < i){
            swap(i, j);
        }
        sum = 1;
        c = j - i + 1;
        if (c == 0){
            c++;
        }
        for(int l = i; l <= j; l++){
            sum *= pow(a[l], 1 / c);
        }
        printf("%.6lf\n", sum);
    }
}