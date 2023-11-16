#include<iostream>
#include<string.h>

int binarysearch(int arr[],int key,int first,int last)
{
    int mid;
    mid =first+(last-first)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return binarysearch(arr,key,first,mid-1);
    }
    else{
        return binarysearch(arr,key,mid+1,last);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first = 0;
    int last = n-1;
    int key = 6;
    int result;
    result=binarysearch(arr,key,first,last);
    std :: cout <<"Key present in index : "<< result ;
}
