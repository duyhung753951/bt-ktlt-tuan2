//check sort string, if sorted down return -1, if sorted up return 1, else return 0
#include<iostream>
using namespace std;
int sort(string str);
int main(){
    string str;
    getline(cin, str);
    cout << sort(str);
    return 0;
}

int sort(string str)
{
    int count1 = 0, count2 = 0;
    for(int i = 0; i < str.size()-1; i++){
        if(str[i] > str[i+1]){
            count1++;
        }
    }
    for(int i = 0; i < str.size()-1; i++){
        if(str[i] < str[i+1]){
            count2++;
        }
    }
    if(count1 == str.size()-1){
        return -1;
    }
    if(count2 == str.size()-1){
        return 1;
    }
    if(count1 != str.size()-1 && count2 != str.size()-1){
        return 0;
    }
}
