#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int Assignmice(int mice[],int holes[],int m,int n)
{
    if(m!=n)
        return 0;
    sort(mice , mice+m);
    sort(holes,holes+n);
    int maxi = 0;

    for(int i=0;i< n;i++){
        int a = abs(mice[i]-holes[i]);
        if(maxi < a)
            maxi = a;
    }
    return maxi;
}

int main(){
 int mice[] = {3,2,-4};
 int holes[] = {0,-2,4};
 int m = sizeof(mice)/sizeof(mice[0]);
 int n = sizeof(holes)/sizeof(holes[0]);
 int res = Assignmice(mice,holes ,m,n);
 cout << res ;
 return 0;

}
