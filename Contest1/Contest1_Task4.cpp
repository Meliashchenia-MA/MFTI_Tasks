#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <stdlib.h>

using namespace std;

vector <int> a;

bool BinarySearch(const int* begin, const int* end, int target){
    int left, right, mid;   
    left = 0;
    right = end - begin;

    mid = (left + right) / 2;

    while (left < right) {
            if (target > *(begin + mid)) {
                left = mid + 1;
            }
            else if (target < *(begin + mid)) {
                right = mid;
            }
            else {
                return true;
            }
            mid = (left + right) / 2;
        }
        return false;
    }

int main(){
    int n, now, x, y, z;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> now;
        a.push_back(now);
    }
    int *nums = &a[0];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y >> z;
        int *first = nums + x;
        int *end = nums + y;
        if (BinarySearch(first, end, z)){
            cout << "YES\n";
        }
        else{
            cout <<"NO\n";
        }
    }
}