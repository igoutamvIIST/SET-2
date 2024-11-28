/*
Given an integer array nums, find the subarray with the largest sum, and return its sum. 
Input: nums = [-2,1,-3,4,-1,2,1,-5,4] 
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
*/

#include<stdio.h>
int main(){
    int array1[]={-2,1,-3,4,-1,2,1,-5,4};
    int array2[50];
    int arraysize= sizeof(array1)/sizeof(array1[0]);
    printf("%d\n", arraysize);
    int count=0, temp=0, sum=0;
    int subarray= arraysize*(arraysize+1)/2;
    printf("Sub array :  %d\n", subarray);

    for (int i = 0; i <arraysize; i++){
        for(int j=i;j<arraysize;j++){
            for(int k=i;k<=j;k++){
                printf("%d", array1[k]);
                printf(" ");   
                sum=sum+array1[k];
                if(sum>temp){
                    temp=sum;
                }
            }
            printf("bahar aya");
            printf("  %d\n", sum);
            sum=0;
        }
        printf("Out of small loop %d \n", temp);
        array2[i]=temp;
        printf("\nValue of I: %d", i);
        
        temp=0;
        printf("\n\n");
    }
    printf("//getting the array2 sum of subarrays");
    for(int x=0;x<arraysize;x++){
        printf("\n%d\n", array2[x]);
    }
  
}


