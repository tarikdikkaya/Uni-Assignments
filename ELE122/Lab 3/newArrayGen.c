#include <stdio.h>
int newArrayMultiplied(int arr[], int size);
int main(){
    int i=0,j=0,temp = 0,len=0;
    puts("Length of the array:");
    scanf("%d", &len);
    int arr[len];
    printf("Enter %d numbers:",len);

    for (i=0;i<len;i++){
        scanf("%d", &temp);
        arr[i] = temp;
    }
    newArrayMultiplied(arr, len);
    return 0;
}

int newArrayMultiplied(int arr[], int size){
    int i = 0;
    int a[size];
    for (i=0; i<size;i++){
        if (i == 0)
            a[i] = arr[i]*arr[i+1];

        else if (i == size-1)
            a[i] = arr[i-1]*arr[i];
        
        else 
            a[i] = arr[i-1]*arr[i+1];
    }

    for (i=0;i<size;i++)
        printf("%d " , a[i]);

        return 0;
}