
//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
string reverseWords(string s) 
{ 
    string reversed="";
    s=s+'.';
    int n = s.length();
    int prev=n-1;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='.'){
          reversed+=s.substr(i+1,prev-i+1); 
          prev=i-1;
        } 
        if(i==0) reversed=reversed+s.substr(i,prev-i+1); 
    }
    return reversed;
} 