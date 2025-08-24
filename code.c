#include <stdio.h>
#include <ctype.h>
#include <string.h>   


int strcmp_case_insensitive(const char *str1, const char *str2) {
    
    while (*str1 != '\0' && *str2 != '\0') {
        
        char c1 = tolower(*str1);
        char c2 = tolower(*str2);

        
        if (c1 != c2) {
            return c1 - c2;
        }

        // Move to the next characters
        str1++;
        str2++;
    }

   
    return tolower(*str1) - tolower(*str2);
}

int main() {
    
    char *s1 = "String one";
    char *s2 = "string two";
    char *s3 = "string one";
    char *s4 = "Hello";
    char *s5 = "hello";
    char *s6 = "abc";
    char *s7 = "abcd";
    char *s8 = "";

    
    printf("Compare \"%s\" with \"%s\" = %d\n", s1, s2, strcmp_case_insensitive(s1, s2));
    printf("Compare \"%s\" with \"%s\" = %d\n", s1, s3, strcmp_case_insensitive(s1, s3));
    printf("Compare \"%s\" with \"%s\" = %d\n", s2, s3, strcmp_case_insensitive(s2, s3));
    printf("Compare \"%s\" with \"%s\" = %d\n", s4, s5, strcmp_case_insensitive(s4, s5));
    printf("Compare \"%s\" with \"%s\" = %d\n", s6, s7, strcmp_case_insensitive(s6, s7));
    printf("Compare \"%s\" with \"%s\" = %d\n", s7, s6, strcmp_case_insensitive(s7, s6));
    printf("Compare \"%s\" with \"%s\" = %d\n", s8, s6, strcmp_case_insensitive(s8, s6));
    printf("Compare \"%s\" with \"%s\" = %d\n", s6, s8, strcmp_case_insensitive(s6, s8));

    return 0;
}
