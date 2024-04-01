//cho 2 day tang dan, xep lai thanh 1 day tang dan
#include<iostream>
using namespace std;

int main(){
    int n, m, i=0, j=0, cnt=0;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int j = 0; j < m; j++) cin >> b[j];
    int c[n+m];
    while(i < n && j < m){
        //so sanh 2 gia tri, neu thoa man thi cho c[0]=a[0]....
        if(a[i] <= b[j]){
            c[cnt++] = a[i];
            ++i;
        }else{
            c[cnt++] = b[j];
            ++j;
        }
    }
    //bo sung not phan con lai cua mang
    while (i < n){
        c[cnt++] = a[i++];
    }
    while(j < m){
        c[cnt++] = b[j++];
    }
    for(int i = 0; i < n+m; i++){
        cout << c[i] << " ";
    }
    return 0;
}

