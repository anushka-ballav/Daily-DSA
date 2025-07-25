#include<iostream>
using namespace std;

bool checkPalindrome(int i,string &s) {
    if(i>=s.size()/2) {
        return true;
    }
    if(s[i]!=s[s.size()-i-1]) {
        return false;
    }
    return checkPalindrome(i+1,s);
}

int main() {
    string s;
    cout << "Enter a word: ";
    getline(cin,s);
    bool palindrome=checkPalindrome(0,s);
    if(palindrome) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is not a palindrome" << endl;
    }
    return 0;
}