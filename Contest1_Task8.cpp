#include <iostream>
#include <cctype>

using namespace std;

struct noda
{
    string value;
    noda* next;
};

int main(){
    noda *head = nullptr;
    string s;
    int a, b, k;
    getline(cin, s);
    for (auto c:s){
        if (isdigit(c)){
            string s1 = "";
            noda *now = new noda({s1 + c, head});
            head = now;
            continue;
        }
        if (c == ' ')
            continue;
        switch (c)
        {
        case '+':
            b = stoi(head->value);
            head = head->next;
            a = stoi(head->value);
            head = head->next;
            k = a + b;
            break;
        case '-':
            b = stoi(head->value);
            head = head->next;
            a = stoi(head->value);
            head = head->next;
            k = a - b;
            break;
        case '*':
            b = stoi(head->value);
            head = head->next;
            a = stoi(head->value);
            head = head->next;
            k = a * b;
            break;
        }
        noda* now = new noda({to_string(k), head});
        head = now;
    }
    cout << head->value;
    return 0;
}