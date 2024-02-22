#include <iostream>
using namespace std;

void reverseString(string &str,int i , string & newString){
    if(i>0){
        newString = newString + str[i-1];
        reverseString(str,i-1,newString);
    }
    
}



bool isPalindrome(string& str) {
    // Write your code here.
    string newString = "";
    reverseString(str,str.length(),newString);
    if(newString == str){
        return true;
    }else{
        return false;
    }

}



int main(){
    string str = "abbba";
    cout<<isPalindrome(str)<<endl;
}