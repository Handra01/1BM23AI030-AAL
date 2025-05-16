#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "you cant see me"; 
    char t[] = "cant";            
    int n = strlen(s);              
    int m = strlen(t);             
    int i, j;
     for (i = 0; i <= n - m; i++) {
        j = 0;
        while (j < m) {
            if (s[i + j] != t[j]) {
                break; 
            }
            j++;
        }
        if (j == m) { 
            printf("Found at index %d\n", i); 
            return 0; 
        }
    }
    
    printf("Substring not found\n"); 
    return 0;
}
