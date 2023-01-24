#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

#include"array_reverse_538.c"
#include"binary_search_538.c"
#include"BST_538.c"
#include"clist1__538.c"
#include"complex_538.c" 
#include"cqueue_538.c"
#include"dequeue1_538.c" 
#include"dequeue2_538.c" 
#include"determinant_538.c" 
#include"diff_in_array_538.c" 
#include"distance1_538.c" 
#include"dll1_538.c" 
#include"dll2_538.c" 
#include"dll4_538.c"
#include"dll5_538.c"
#include"dlll3_538.c"
#include"dma1_538.c"
#include"employee_538.c"
#include"find_array_538.c"
#include"frequecy_538.c"
#include"hunt_538.c"
#include"infixtopostfix_538.c"
#include"infixtoprefix_538.c"
#include"largest_538.c"  
#include"linear_search_538.c"
#include"llist1_538.c"
#include"llist2_538.c" 
#include"llist3_538.c"
#include"matix1_538.c"
#include"matrix2_538.c"
#include"nge_538.c"
#include"polynomial_538.c"
#include"polynomial2_538.c"
#include"polynomial3_538.c"
#include"polynomial4_538.c"
#include"queue1_538.c"
#include"queue2_538.c"
#include"search_array_538.c"
#include"small_large_array_538.c"
#include"sort_array_538.c"
#include"sparse_538.c"
#include"sparse2_538.c"
#include"students1_538.c"
#include"stack_538.c"
#include"stack2_538.c"
#include"time1_538.c"
#include"transpose_538.c"

int main()
{ 
    int C;
    printf("Enter your choice: "); 
    scanf("%d", &C);
switch(C)
{
    case 1:
        main_small_large_array_538(); 
        break;
    case 2:
        main_array_reverse_538(); 
        break;
    case 3:
        main_search_array_538(); 
        break;
    case 4:
        main_sort_array_538(); 
        break;
    case 5:
        main_find_array(); 
        break;
    case 6:
        main_nge_538(); 
        break;
    case 7:
        main_matrix1_538(); 
        break;
    case 8:
        main_diff_in_array_538(); 
        break;
    case 9:
        main_employee_538(); 
        break;
    case 10:
        main_distance1_538(); 
        break;
    case 11:
        main_complex_538(); 
        break;
    case 12:
        main_time1_538(); 
        break;
    case 13:
        main_dma1_538(); 
        break;
    case 14:
        main_polynomial_538(); 
        break; 
    case 15:
        main_polynomial2_538(); 
        break; 
    case 16:
        main_sparse_538(); 
        break;
    case 17:
        main_polynomial2_538(); 
        break;
    case 18:
        main_polynomial3_538(); 
        break; 
    case 19:
        main_sparse2_538(); 
        break; 
    case 20:
        main_transpose_538(); 
        break;
    case 21:
        main_determinant_538(); 
        break; 
    case 22:
        main_largest_538(); 
        break; 
    case 23:
        main_frequecy_538(); 
        break; 
    case 24:
        main_matrix2_538(); 
        break; 
    case 25:
        main_llist1_538(); 
        break;
    case 26:
        main_llist2_538(); 
        break;
    case 27:
        main_llist3_538(); 
        break; 
    case 28:
        main_clist1__538(); 
        break; 
    case 29:
        main_dll1_538();
        break;
    case 30:
        main_dll2_538(); 
        break;
    case 31:
        main_dlll3_538(); 
        break;
    case 32:
        main_dll4_538(); 
        break;
    case 33:
        main_dll5_538(); 
        break; 
    case 34:
        main_stack_538(); 
        break;
    case 35:
        main_stack2_538(); 
        break;
    case 36:
        main_infixtopostfix_538(); 
        break;
    case 37:
        main_infixtoprefix_538(); 
        break;
    case 38:
        main_queue1_538(); 
        break;
    case 39:
        main_queue2_538(); 
        break; 
    case 40:
        main_cqueue_538(); 
        break;
    case 41:
        main_dequeue1_538(); 
        break;
    case 42:
        main_dequeue2_538(); 
        break;
    case 43:
        main_linear_search_538(); 
        break;
    case 44:
        main_binary_search_538(); 
        break;
    case 45:
        main_hunt_538(); 
        break;
    case 46:
        main_bst_538(); 
        break;
    case 47:
        main_students1_538(); 
        break;
    case 48:
        main_distance1_538(); 
        break;
    default:
        printf("Wrong choicee");
    }
    return 0;
}