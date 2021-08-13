#include <stdio.h>
#include <stdlib.h>
int NoOfInversions(int a[], int n)
{
    int count = 0;
    
    for (int i = 0; i < n - 1; i++)
    
    {
        for (int j = i + 1; j < n; j++)
        {    
            if (a[i] > a[j])
            {         
                count++;
            }   
        }        
    }
    return count;
}
 

int main()
{
    int n;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
     
    
    printf(" Total inversions: %d \n",
           NoOfInversions(a, n));
    return 0;
}