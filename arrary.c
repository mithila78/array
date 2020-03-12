#include<stdio.h>
int main()
{
    int a[100]={2,4,6,7,8,6,5,9,10,15};
    int b[100];
    int i,lenth=10,X, item,P,position,Y,Z;
    printf("Printed Arry :");
    for(i=0;i<10;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("After add a element at index 10 : ");
    a[10]= 79;
    lenth++;
    for(i=0;i<lenth;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Updated value :");
    a[5] = 34;
    for(i=0; i<lenth;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the element that you want to search : ");
    scanf("%d",&X);

    for(i=0; i<lenth;i++){
       if(a[i]==X){
        P=1;
        position = i;
       }
    }

    if(P==1)
        {printf("Index No : %d",position);}
    else
        {printf("Not Found");}
    printf("\n");
    printf("Write down the value that you want to add at index no 3 : ");
    scanf("%d",&Y);
    for(i=lenth-1; i>=3;i--){
       a[i+1] = a[i];
    }

    a[3] = Y;
    lenth++;
    printf("Updated value : ");
    for(i=0; i<lenth;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the index no you want to delete : ");
    scanf("%d",&Z);
    for(i=Z; i<lenth;i++){
        a[i] = a[i+1];
    }
    lenth--;
    printf("After delete the element : ");
    for(i=0; i<lenth;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0; i<lenth;i++){
        b[i] = a[i];
    }
        int maximum = a[0];
    for(i=1;i<lenth;i++){
        if(a[i]>maximum){
            maximum = a[i];
        }
    }
    printf("Maximum element of array : ");
    printf("%d \n",maximum);
    printf("\n");

    int minimum = a[0];
    for(i=1;i<lenth;i++){
        if(a[i]<minimum){
            minimum = a[i];
        }
    }
    printf("Minimum element of array : ");
    printf("%d \n",minimum);
    printf("\n");
   return 0;

}
