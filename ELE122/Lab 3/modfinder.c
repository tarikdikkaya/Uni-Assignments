#include <stdio.h>

int main(){
    int i=0,j=0,temp = 0,len=0, current = 0,count = 1, maxCount = 0;
    puts("Length of the array:");
    scanf("%d", &len);
    int a[len];
    for (i=0;i<len;i++){
        scanf("%d", &temp);
        a[i] = temp;
    }
    for (i=0;i<len;i++){
        for (j=0;j<len-i-1;j++){
            if (a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp; 
            }
        }
    }
    for (i=0;i<len;i++)
        printf("%d " , a[i]);
    
    for (i=0;i<len;i++){
        if (a[i]==a[i+1]){
            count++;
        }
        else {
            if (count >= maxCount){ 
                maxCount = count;
                current = a[i];
            }
            count = 1;
        }
    }
    
    printf("The most recurrent number is: %d", current);
    return 0;
}