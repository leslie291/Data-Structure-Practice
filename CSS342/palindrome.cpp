#include <iostream>
using namespace std;

bool isPalindrome(const string& s){
    //grap the index
    int left = 0; 
    int right = s.size() -1; 
    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true; 
}

int main(){
    cout << isPalindrome("racecar") << endl;
    cout << isPalindrome("hello") << endl;
    return 0;
}