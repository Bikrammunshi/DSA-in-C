//WAP to find out the smallest and largest element stored in an array of n integers

void main_small_large_array_538()
{
    int n_small_large_array;
    printf("Enter the value of n \n");
    scanf("%d",&n_small_large_array);

    int a_small_large_array[n_small_large_array];

    printf("Enter the elements of array a \n");

    for(int i_small_large_array=0;i_small_large_array<n_small_large_array;i_small_large_array++)
        scanf("%d",&a_small_large_array[i_small_large_array]);

    int min_small_large_array=a_small_large_array[0];
    int max_small_large_array=a_small_large_array[0];

    for(int i_small_large_array=1;i_small_large_array<n_small_large_array;i_small_large_array++)
        if(a_small_large_array[i_small_large_array]<min_small_large_array)
            min_small_large_array =a_small_large_array[i_small_large_array];

    for(int i_small_large_array=1;i_small_large_array<n_small_large_array;i_small_large_array++)
        if(a_small_large_array[i_small_large_array]>max_small_large_array)
            max_small_large_array =a_small_large_array[i_small_large_array];

    printf("The smallest integer in the array is : %d \n",min_small_large_array);
    printf("The largest integer in the array is : %d \n",max_small_large_array);

}