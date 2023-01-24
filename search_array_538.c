//WAP  to search an element in an array of numbers


void main_search_array_538()
{
    int n_search_array;
    printf("Enter the value of n \n");
    scanf("%d",&n_search_array);

    int a_search_array[n_search_array];

    printf("Enter the elements of array a \n");

    for(int i_search_array=0;i_search_array<n_search_array;i_search_array++)
        scanf("%d",&a_search_array[i_search_array]);

    int b_search_array;
    printf("Enter the number to find \n");
    scanf("%d",&b_search_array);
    int count_search_array=0;
    for(int i_search_array=0;i_search_array<n_search_array;i_search_array++)
    {
        if(a_search_array[i_search_array]==b_search_array)
        {
            count_search_array++;
            break;
        }
    }

    if(count_search_array==1)
        printf("The element is present");
    else    
        printf("The element is not present");

}