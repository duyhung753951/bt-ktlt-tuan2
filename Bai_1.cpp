//tinh ucln(a,b), ap dung ham tren de tinh ucln cua 1 day so nguyen
#include<iostream>
using namespace std;
int ucln(int a, int b);
void input_arr(int n, int a[]);
int main(){
    int n, tmp;
    cin >>  n;
    int a[n];
    input_arr(n, a);
    tmp = ucln(a[0], a[1]);
    for(int i = 2; i < n; i++){
        tmp = ucln(tmp, a[i]);
    }
    cout << "ket qua = " << tmp;
    return 0;
}

int ucln(int a, int b)
{
    if(b == 0){
        return a;
    }
    return ucln(b, a % b);
}

void input_arr(int n, int a[])
{
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
