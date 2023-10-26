#include <iostream>
#include <string.h>
//#define d 10
using namespace std;

void rk(char txt[],char patt[],int q){
    int m = strlen(patt);
    int n = strlen(txt);
    int i,j;
    int t=0,p=0;
    int d=26,h=1;
    for(i=0;i<m-1;i++){
        h=(h*d)%q;
    }
    for(int i=0;i<m;i++){
        p=(d*p+patt[i])%q;
        t=(d*p+txt[i])%q;
    }
    for(i=0;i<=n-m;i++){
        if(p==t){
            int flag=0;
            for(j=0;j<m;j++){
                if(txt[i+j]!=patt[j]){
                    flag=1;
                    break;
                }

            }
            if(flag==0){
                cout << "Pattern Found @ "<<i+1<<endl;
            }
        }
        if(i<n-m){
            t=(d*(t-txt[i]*h)+txt[i+m])%q;
            if(t<0)
            t=t+q;
        }
    }
}

int main() {
    char txt[50];
    cout << "Enter Text:";
    cin >> txt;
    char pattern[50];
    cout << "Enter pattern to Search:";
    cin >> pattern;
    int prime=13;
    rk(txt,pattern,prime);

    return 0;
}
