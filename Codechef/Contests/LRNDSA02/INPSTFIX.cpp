#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int tc; cin >> tc;
    while(tc--){
        int N; cin >> N;
        string expression,ans; cin >> expression;
        expression.push_back(')');
        stack<char> postfix;
        postfix.push('(');
        for(int i=0; i<=N; ++i){
            switch(expression[i]){
                case 'A'...'Z':
                    ans +=  expression[i] ;
                    break;
                case '*':
                case '/':
                    while(postfix.top() == '*' || postfix.top() == '/' || postfix.top() == '^'){
                        cout << postfix.top();
                        postfix.pop();
                    }
                    postfix.push(expression[i]);
                    break;
                case '-':
                case '+':
                    while(postfix.top() == '+' || postfix.top() == '-' || postfix.top() == '*' || postfix.top() == '/' || postfix.top() == '^'){
                        ans += postfix.top();
                        postfix.pop();
                    }
                    postfix.push(expression[i]);
                    break;
                case '^':
                case '(':
                    postfix.push(expression[i]);
                    break;
                case ')':
                    while(postfix.top() != '('){
                        ans+= postfix.top();
                        postfix.pop();
                    }
                    postfix.pop();
                    break;
                default:
                    break;
            }
        }
       cout <<ans<< endl;
    }
    return 0;
}
