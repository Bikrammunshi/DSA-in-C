/*
C program to read a one dimensional array, print sum of all elements along with
inputed array elements using Dynamic Memory Allocation.
*/


void main_dma1_538()
{
    int n_dma1_538;
    printf("Ennter the length of an one d array \n");
    scanf("%d",&n_dma1_538);

    int *array_dma1_538=(int *) malloc(n_dma1_538 * sizeof(int));
    int sum_dma1_538=0;
    printf("Enter the elements of the array \n");
    for(int i_dma1_538=0;i_dma1_538<n_dma1_538;i_dma1_538++)
    {
        scanf("%d",&array_dma1_538[i_dma1_538]);
        sum_dma1_538=sum_dma1_538+array_dma1_538[i_dma1_538];
    }

    printf("The elements in the array are \n");
    for(int i_dma1_538=0;i_dma1_538<n_dma1_538;i_dma1_538++)
    {
        printf("%d \n",array_dma1_538[i_dma1_538]);
    }

    printf("The sum of the elements of the array is %d. \n",sum_dma1_538);

}