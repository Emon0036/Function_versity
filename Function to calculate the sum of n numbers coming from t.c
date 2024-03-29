#include<stdio.h>

void sum(int a , int arr[a]){

    int sum=0;
    for(int i=0 ; i<a ; i++){
        sum += arr[i];
    }

    printf("Sum in function:%d" , sum);
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

    sum(n , arr);

}
