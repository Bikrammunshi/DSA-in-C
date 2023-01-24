//WAP to find the next greater integer of each element
#include <stdio.h>

void main_nge_538()
{
    int n_nge;
    printf("Enter the value of n \n");
    scanf("%d",&n_nge);

    int a_nge[n_nge];

    printf("Enter the elements of array a_nge \n");

    for(int i_nge=0;i_nge<n_nge;i_nge++)
        scanf("%d",&a_nge[i_nge]);
    printf("The next greater numbers for each element in the array is \n");
    int max_nge;
    for(int i_nge=0;i_nge<n_nge;i_nge++)
    {
        
        if( i_nge<n_nge-1)
        {
            for(int j_nge=i_nge;j_nge<n_nge;j_nge++)
            {    
                if(a_nge[i_nge]<a_nge[j_nge])
                {
                    max_nge=a_nge[j_nge];
                    break;
                }
                else
                    max_nge=-1;
            }

        printf("for element %d the next greater elemennt is %d \n",a_nge[i_nge],max_nge);
        }
        else
            printf("for element %d the next greater elemennt is -1 \n",a_nge[i_nge]);
    }
}