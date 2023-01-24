//WAP to take input integers in an unsorted array and to find the elements between two elements


void main_find_array()
{
    int nn_find_array;
    printf("Enter the value of n \n");
    scanf("%d",&nn_find_array);

    int a_find_array[nn_find_array];

    printf("Enter the elements of array a_find_array \n");
    
    for(int i_find_array=0;i_find_array<nn_find_array;i_find_array++)
        scanf("%d",&a_find_array[i_find_array]);

    int b_find_array,c_find_array;
    printf("Enter the lower range \n");
    scanf("%d",&b_find_array);
    printf("Enter the upper range \n");
    scanf("%d",&c_find_array);

    int count_find_array=0;
    printf("The elements between the numbers are \n");
    for(int i_find_array=0;i_find_array<nn_find_array;i_find_array++)
    {
        if(a_find_array[i_find_array]>=b_find_array && a_find_array[i_find_array]<=c_find_array)
        {
            printf("%d \n",a_find_array[i_find_array]);
            count_find_array++;
        }
    }

    if(count_find_array>0)
        printf("The number of elements  present is %d", count_find_array);
    else    
        printf("The elements  not present");
}