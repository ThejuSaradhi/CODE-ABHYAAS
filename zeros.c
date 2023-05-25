#include<stdio.h>
int main()
{
    int arr[]={9,0,3,4,0,0,1,0};
    int newarr[8],j=0;
    for(int i=0;i<8;i++){
        if(arr[i]!=0){
            newarr[j]=arr[i];
            j++;
        }
    }
    while(j<8){
        newarr[j]=0;
        j++;
    }
    for(int k=0;k<8;k++){
        printf("%d",newarr[k]);

    }
}