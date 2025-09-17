//LAB-3 Q-33
/*PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,max,mini;            //DECLARATION OF VARIABLES
    printf("Enter the number of digits:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the digits\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    mini=arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>max)      //CONDITION TO CHECK FOR MAXIMUM
        {
            max=arr[i];
        }
        if(arr[i]<mini)     //CONDITION TO CHECK FOR MINIMUM
        {
            mini=arr[i];
        }
    }
    printf("The maximum of the following is %d\n",max);
    printf("The minimum of the following is %d",mini);
    return 0;
}
//END OF THE PROGRAM
