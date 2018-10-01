#include <iostream>

using namespace std;

int isprime(int m){
    if(m==2)
        return 1;
    if(m==3)
        return 1;
    if(m%2==0)
        return 0;
    if(m%3==0)
        return 0;
    int i = 5;
    int w = 2;
    while(i*i<=m){
        if(m%i==0)
            return 0;
        i += w;
        w = 6 - w;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a==1){
            a++;
        }
        while(a<b+1){
            if(isprime(a)){
                cout << a << endl;
            }
            a++;
        }
        cout << "" << endl;
    }
    
}
