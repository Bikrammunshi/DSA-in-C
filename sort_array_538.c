//WAP to sort an array

void main_sort_array_538()
{
    int n_sort_array;
    printf("Enter the value of n \n");
    scanf("%d",&n_sort_array);

    int a_sort_array[n_sort_array];

    printf("Enter the elements of array a \n");

    for(int i_sort_array=0;i_sort_array<n_sort_array;i_sort_array++)
        scanf("%d",&a_sort_array[i_sort_array]);

    

     for (int i_sort_array = 0; i_sort_array < n_sort_array-1; i_sort_array++)
        {
            int min_idx_sort_array = i_sort_array;
            for (int j_sort_array = i_sort_array+1; j_sort_array < n_sort_array; j_sort_array++)
                if (a_sort_array[j_sort_array] < a_sort_array[min_idx_sort_array])
                    min_idx_sort_array = j_sort_array;
  
            int temp = a_sort_array[min_idx_sort_array];
            a_sort_array[min_idx_sort_array] = a_sort_array[i_sort_array];
            a_sort_array[i_sort_array] = temp;
        }
    printf("The sorted array is \n");

    for( int i_sort_array=0;i_sort_array<n_sort_array;i_sort_array++)
        printf("%d ",a_sort_array[i_sort_array]);

}