#include <stdio.h>
int main(){
    
    int n,m;

    scanf("%d",&n);
    int N[n];
    for(int i=0;i<n;i++){
        scanf("%d",&N[i]);
    }

    scanf("%d",&m);
    int M[m];
    for(int i=0;i<m;i++){
        scanf("%d",&M[i]);
    }

    int arr[n+m];
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(N[i]<=M[j]){
            arr[k]=N[i];
            i++;
            k++;
        }else{
            arr[k]=M[j];
            j++;
            k++;
        }
    }
    while(i<n){
        arr[k]=N[i];
        k++;
        i++;
    }
    while(j<m){
        arr[k]=M[j];
        k++;
        j++;
    }

    for(int i=0;i<n+m;i++){
        if(i<n+m-1){
            printf("%d ",arr[i]);
        }else{
            printf("%d",arr[i]);
        }
    }

    return 0;
}