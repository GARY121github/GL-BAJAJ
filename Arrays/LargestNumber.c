#include<stdio.h>
int largestNumber(int arr[] , int n){
    int max = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[5] = {1 , 5 , 2 , 10 , 1};
    int ans = largestNumber(arr , 5);
    printf("Largest Number in array is %d\n" , ans);
    return 0;
}