#include<stdio.h>
int main(){
    int arr[] = {9 , 5 , 6 , 9 ,1 ,2};
    int max = -1;
    int second_max = -1;
    for(int i = 0 ; i < 6 ; i++){
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        }
        else if(arr[i] > second_max && arr[i] != max){
            second_max = arr[i];
        }
    }
    printf("Second Max is -> %d\n" , second_max);
    return 0;
}