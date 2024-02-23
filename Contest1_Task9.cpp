#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> deque1;
    char c;
    int num, n, len, mid;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> c;
        if (c != '-'){
            cin >> num;
        }
        if (c == '+'){
            deque1.push_back(num);
        }
        else if (c == '*'){
            if (deque1.size() == 0){
                deque1.push_back(num);
            }
            else if (deque1.size() % 2 == 0){
                len = deque1.size() / 2 + 1;
            }
            else{
                len = deque1.size() / 2 + 2;
            }
            mid = 0;
            for (auto iter = deque1.begin(); iter != deque1.end(); iter++){
                mid++;
                if (mid == len){
                    deque1.emplace(iter, num);
                    len--;
                }
            }
        }
        else if (c == '-'){
            cout << deque1.front() << endl;
            deque1.pop_front();
        }
    }
    return 0;
}