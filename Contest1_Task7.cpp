#include <iostream>
#include <algorithm>

using namespace std;

struct noda
{
    int value;
    noda* next;
    int mn;
};

int main(){
    noda *head = nullptr;
    noda *back = nullptr;
    int n, num, size;
    num = 0;
    size = 0;
    string s = "";
    cin >> n;
    for (int i = 0; i < n; i++){
        if (back == nullptr){
            while (head != nullptr){
                noda *now = new noda({head->value, back, head->mn});
                back = now;
                if(back->next != nullptr)
                    back->mn = min(back->mn, back->next->mn);
                else
                    back->mn = back->value;
                head = head ->next;
            }
        }
        cin >> s;
        if ((s == "front" || s == "dequeue" || s == "min") && (head == nullptr && back == nullptr)){
            cout << "error" << endl;
            continue;
        }
        else if (s == "enqueue"){
            size++;
            cin >> num;
            if (head == nullptr){
                noda *now = new noda({ num, head, num});
                head = now;
            }
            else{
                noda *now = new noda({ num, head, min(num, head->mn)});
                head = now;
                }
            cout << "ok" << endl;
        }
        else if (s == "dequeue"){
            size--;
            cout << back -> value << endl;
            back = back -> next;
        }        
        else if (s == "front"){
            cout << back -> value << endl;
        }
        else if (s == "size"){
            cout << size << endl;
        }
        else if (s == "min"){
            if(head == nullptr){
                cout << back -> mn << endl;
            }
            else if(back == nullptr){
                cout << head->mn << endl;
            }
            else{
                cout << min(head -> mn, back->mn) << endl;
            }
        }
        else if (s == "clear"){
            head = nullptr;
            back = nullptr;
            size = 0;
            cout << "ok" << endl;
        }
    }
    return 0;
}