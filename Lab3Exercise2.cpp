#include <stack>
#include <iostream>

using namespace std;
bool checkparent(string s){

    stack <char> obj;
    int flag = 0;
    for(int i =0; i<s.length(); i++){

        if (s[i] == '{' || s[i] =='(' || s[i] =='['){

            obj.push(s[i]);
            flag = 1;

        }
        if (!obj.empty()){
            if (s[i] == '}'){
                if (obj.top()== '{'){

                    obj.pop();
                    continue;
                }
                else 
                    break;
            }
            if (s[i] == ']'){
                if (obj.top()== '['){

                    obj.pop();
                    continue;
                }
                else 
                    break;
            }
            if (s[i] == ')'){
                if (obj.top()== '('){

                    obj.pop();
                    continue;
                }
                else 
                    break;
            }
        }
    }
    if (obj.empty() && flag==1){

        return true;
    }
    else 
        return false;

}
int main()
{
    string input;
    cout<<"input: ";
    cin>>input;
    if (checkparent(input) == 1){

        cout<<"true";
    }
    else 
        cout<<"false";
}
