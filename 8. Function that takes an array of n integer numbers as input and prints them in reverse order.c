#include<stdio.h>

void reverse(int a , int arr[a]){
    for(int i=a-1; i>=0; i-- ){
       printf("%d " , arr[i]);
    }
}

int main(){
    int n;

    printf("Enter the size of array:");
    scanf("%d" , &n);

    int arr[n];

    for(int i=0 ; i<n ; i++){
        printf("arr[%d]=",i);
        scanf("%d" , &arr[i]);
    }

    reverse(n , arr);
}
