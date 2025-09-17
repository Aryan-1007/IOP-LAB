//LAB-3 Q-32
/*PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS*/
#include<stdio.h>

int main(int argc, char const *argv[])
{   int n,max,second_max;         //DECLARATION OF VARIABLE 
    printf("Enter the number of digits:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the digits\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    second_max=arr[0];
    for(int i=0;i<n-1;i++)  
    {
        if(arr[i]>max)       //CONDITION TO CHECK FOR MAXIMUM AND SECOND MAXIMUM
        {
            second_max=max;
            max=arr[i];
        }
    }
    printf("The maximum of the following is %d\n",max);
    printf("The second maximum number of the following is %d",second_max);
    return 0;
}
//END OF THE PROGRAM
