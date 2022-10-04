#include <stdio.h> 
#include <string.h> 
void swap(char *a, char *b) 
{ 
    char temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 
void permutations(char *a, int l, int r) 
{ 
   int i; 
   if (l == r) 
     printf("%s\n", a); 
   else 
   { 
       for (i = l; i <= r; i++) 
       { 
          swap((a+l), (a+i)); 
          permutations(a, l+1, r); 
          swap((a+l), (a+i)); 
       } 
   } 
} 
int main() 
{ 
    char a[] = "0"; 
    permutations(a, 0, strlen(a)-1); 
    return 0; 
} 
