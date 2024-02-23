#include <iostream>

using namespace std;

struct noda
{
    char value;
    noda* next;
};

int main(){
    noda *head = nullptr;
    string s = "";
    cin >> s;
    if (s == ""){
        cout << "YES";
        return 0;
    }
    for (auto c : s){
        if (c == '(' || c == '{' || c == '[') {
            noda *now = new noda({ c, head });
            head = now;
        }
        else{
            if (head == nullptr){
                cout << "NO";
                return 0;
            }
            switch (c)
            {
            case ')':
                if(head->value =='('){
                    head = head->next;
                    continue;
                }
                else{
                    cout << "NO";
                    return 0;
                }
            case '}':
            if(head->value =='{'){
                    head = head->next;
                    continue;
            }
                else{
                    cout << "NO";
                    return 0;
                }
            case ']':
            if(head->value =='[')
                    head = head->next;
                else{
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    if(head != nullptr){
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}