#include<iostream>
#include<string.h>
using namespace std;

void prefixlps(char* pattern,int M,int *lps);

void kmpsearch(char *txt,char *pattern){
    int N = strlen(txt);
    int M = strlen(pattern);
    int lps[M];
    prefixlps(pattern,M,lps);
    int i=0,j=0;
    while((N-i)>=(M-j)){
        if(pattern[j]==txt[i]){
            i++;
            j++;
        }
        if(j==M){
            cout <<"Pattern Found @ index "<<(i-j);
            j=lps[j-1];
        }
        else if(i < N && pattern[j] != txt[i]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i=i+1;
            }
        }
    }
}


void prefixlps(char* pattern,int M,int *lps){
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<M){
        if(pattern[i]==pattern[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }

}


int main(){
    char txt[] = "ababdabacdababcabab";
    char pat[] = "ababcabab";
    kmpsearch(txt,pat);
    return 0;
}
