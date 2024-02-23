#include <iostream>
#include <algorithm>

using namespace std;

struct noda
{
    int value;
    noda* next;
    int mn;
    int size;
};

int main(){
    noda *head = nullptr;
    int n, num;
    num = 0;
    string s = "";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        if ((s == "back" || s == "pop" || s == "min") && head == nullptr){
            cout << "error" << endl;
            continue;
        }
        else if (s == "push"){
            cin >> num;
            if (head == nullptr){
                noda *now = new noda({ num, head, num, 1 });
                head = now;
            }
            else{
                noda *now = new noda({ num, head, min(num, head->mn), head->size + 1 });
                head = now;
                }
            cout << "ok" << endl;
        }
        else if (s == "pop"){
            cout << head -> value << endl;
            head = head -> next;
        }
        else if (s == "back"){
            cout << head -> value << endl;
        }
        else if (s == "size"){
            if (head == nullptr){
                cout << 0 << endl;
            }
            else{
                cout << head -> size << endl;
            }
        }
        else if (s == "min"){
            cout << head -> mn << endl;
        }
        else if (s == "clear"){
            head = nullptr;
            cout << "ok" << endl;
        }
    }
    return 0;
}