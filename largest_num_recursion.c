#include <stdio.h>

int main( int argc, char *argv[] )  {

   printf("Program name %s\n", argv[0]);
 
   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
}# include <stdio.h>

int min(int a, int b)
{
    if(a < b) return a;
    else if(a > b) return b;
    else return a;
}

int max(int a, int b)
{
    if(a < b) return b;
    else if(a > b) return a;
    else return a;
}

int largest_recursive(int *arr, int n)
{
    if(n == 1) return arr[0];
    
    return max(arr[n-1], largest_recursive(arr, n-1));
}

int smallest_recursive(int *arr, int n)
{
    if(n == 1) return arr[0];
    
    return min(arr[n-1], largest_recursive(arr, n-1));
}

int main()
{
    int arr[] = {1,2,3,44,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Largest using recursion = %d\n", largest_recursive(arr, size));
    
    return 0;
}
    
    
    
    
