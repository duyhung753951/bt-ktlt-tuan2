//check day palindrome
#include<iostream>
using namespace std;
bool palindrome_check(string str);
int main(){
    string str;
    getline(cin, str);
    if(palindrome_check(str) == true){
        cout << "Day la Palindrome.";
    }else{
        cout << "Day khong phai la Palindrome.";
    }
    return 0;
}

bool palindrome_check(string str)
{
    int low = 0;
    int high = str.size() - 1;
    while(low < high){
        if(str[low] != str[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}
