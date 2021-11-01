#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int n;
    printf("enter array size n=");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("element-NGE"); printf("\n");
    int next;
    for (int i=0; i<n; i++)
    {
        next = -1;
        for (int j = i+1; j<n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                //break;
            }
}
printf("%d ---- %d", arr[i], next);printf("\n");
}
}
