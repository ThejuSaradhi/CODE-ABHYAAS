# CODE-ABHYAAS
I am learning about the Datastructures and Algorithms through Code Abhyaas helding By our beloved Seniors through the cooperation of Training and Placement Cell of Rgukt Srikakulam
#include<stdio.h>
int main()
{
    int n, element,count=0;
    int arr[6]={12,4,8,4,6,4};
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&element);
    for(int i=0;i<6;i++)
    {
        if(element==arr[i]){
            count++;

        }
        
    }
    printf("%d",count);
        return 0;
}
