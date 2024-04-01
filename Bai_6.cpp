//check phan tu trung nhau trong day, if true -> xoa ptu
#include<iostream>
using namespace std;
void xoaPtu(int &n, int a[], int x);
void input_arr(int n, int a[]);
int checkPtuTrung(int &n, int a[]);
int main(){
    int n;
    cin >> n;
    int a[n];
    input_arr(n, a);
    checkPtuTrung(n, a);
    for(int i = 0; i < n ; i++){
        cout << a[i] << " ";
    }
    return 0;
}

void xoaPtu(int &n, int a[], int x)
{
    for(int i = x+1; i < n; i++){
        a[i-1] = a[i];
    }
    n--;
}

void input_arr(int n, int a[])
{
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int checkPtuTrung(int &n, int a[])
{   
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]){
                xoaPtu(n, a, j);
                i--;
            }
        }
    }
    return -1;
}
