#include <cstdio> 
    int main() { 
     char c; 
     while ((c = getchar()) && c != EOF) { 
         printf("%c",c); 
     } 
     return 0; 
} // Just input / even if first word of sentence is null(empty / ' '), Don't care 
