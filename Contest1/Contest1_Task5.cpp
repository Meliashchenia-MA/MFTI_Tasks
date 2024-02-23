#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, q, i, j;
    long double k, product;
    cin >> n;
    vector<long double> a(n);
    vector<long double> prefix_product(n + 1, 1.0);
    
    for (int i = 0; i < n; i++) {
        cin >> k;
        a[i] = k;
        prefix_product[i + 1] = prefix_product[i] * k;
    }
    
    cin >> q;
    for (int m = 0; m < q; m++) {
        cin >> i >> j;
        if (j < i) {
            swap(i, j);
        }
        product = prefix_product[j] / prefix_product[i - 1]; // Calculate the product in the range [i, j]
        long double geometric_mean = pow(product, 1.0 / (j - i + 1)); // Calculate the geometric mean
        cout << fixed << setprecision(6) << geometric_mean << endl; // Output with 6 decimal places
    }
}