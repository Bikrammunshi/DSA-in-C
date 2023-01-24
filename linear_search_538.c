//WAP to read an array of integers and search for an element using linear search

int main_linear_search_538()
{
    int n_linear_search_538;
    printf("Enter the size of the array:    ");
    scanf("%d",&n_linear_search_538);
    int *a_linear_search_538=(int *)malloc(n_linear_search_538*sizeof(int));
    printf("Enter the elements of the array:    \n");
    for(int i_linear_search_538=0;i_linear_search_538<n_linear_search_538;i_linear_search_538++)
    {
        scanf("%d",&a_linear_search_538[i_linear_search_538]);
    }
    int find_linear_search_538; int count_linear_search_538=0;
    printf("Enter the number you want to search for in the array \n");
    scanf("%d",&find_linear_search_538);
    for(int i_linear_search_538=0;i_linear_search_538<n_linear_search_538;i_linear_search_538++)
    {
        if(a_linear_search_538[i_linear_search_538]==find_linear_search_538)
            count_linear_search_538++;
    }
    if(count_linear_search_538!=0)
        printf("The element is present in the array.");
    else
        printf("The element is not present in the array");
    return 0;
}