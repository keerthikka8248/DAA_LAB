#include<iostream>
using namespace std;

void activitySelection(int st[],int fn[],int n){

    int i,j;
    i=0;
    cout << "Activity " <<i+1<<" " ;
    for(j=1;j<n;j++){

        if(st[j]>=fn[i]){
            cout <<"Activity "<< j+1 << " ";
            i=j;
        }
    }


}


int main(){

    int start[] = {2,2,4,1,5,8,9,11,13};
    int finish[] = {3,5,7,8,9,10,11,14,16};

    int n = sizeof(start)/sizeof(start[0]);

    activitySelection(start,finish,n);

}
