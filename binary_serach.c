#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int n;
     clock_t start,finish;
  start =clock();
    printf("Enter the size of the array:");
    scanf("%d",&n);
    if(n<=0)
    {
      printf("Array size is 0 , hence no elements can be entered");
      exit(0);
    }

    int a[n];
    printf("Enter the sorted elements into the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int beg=0,end=n-1;
   
    int k;
    printf("Enter the element to be searched:");
    scanf("%d",&k);
    while(beg<=end)
    {    
         int mid=(beg+end)/2;
        if(k==a[mid])
        {
            printf("Serach successful");
             finish=clock();
    double d=((double)finish-start)/CLOCKS_PER_SEC;
    printf("\nTime taken for the result: %f",d);
          exit(0);
        }
    else if(k<a[mid])
    {
         
         end=mid-1;
    }
    else if(k>a[mid])
    {
        beg=mid+1;
        end=n-1;
    }
    }
        printf("Search unsuccessful");
        finish=clock();
    double d=((double)finish-start)/CLOCKS_PER_SEC;
    printf("\nTime taken for the result: %f",d);
}
