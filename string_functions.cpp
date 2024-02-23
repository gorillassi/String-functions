#include "string_functions.h"

size_t my_strlen (const char *str){
    assert (str);
    int lenght = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
        lenght++;
    }
    
    return lenght;
}

char *my_strcpy (char *destination, const char *source){
    assert (destination);
    assert (source);

    int i = 0;
    while ((source[i] != '\0'))
    {
        destination[i] = source[i];
        i++;
    }
    return destination;
}

char *my_strncpy (char *destination, const char *source, size_t n){
    assert (destination);
    assert (source);
    
    /*if (n < 0)
    {
        printf("\e[31mWARNING (n < 0)\e[0m");
    }*/
    

    int i = 0;
    while ((source[i] != '\0') && (i < n))
    {
        destination[i] = source[i];
        i++;
    }
    return destination;
}

char *my_strncat (char *destination, const char *append, size_t n){
    assert (destination);
    assert (append);
    int size = my_strlen(destination);

    int i = 0;
    while ((append[i] != '\0') && (i < n))
    {
        destination[size + i] = append[i];
        i++;
    }
    return destination;
}

//To Do

int my_puts (const char *s){
    assert(s);
    int i = 0;
    while (true)
    {
        if (s[i] == '\0')
        {
            putchar(10);
            break;
        }
        
        putchar(s[i]);
        i++;
    }
    return 1;
}

char *my_strchr (const char *str, int ch){
    assert(str);
    char x = ch;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == char(ch))
        {
            return const_cast<char*>(str) + i;
        }
        i++;
    }   
    return nullptr;
}

int my_strcmp (const char *str1, const char *str2){
    assert(str1);
    assert(str2);
    int i = 0;
    while (true){
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }       
        if (str1[i] == '\0')
        {
            return -1;
        }
        if (str2[i] == '\0')
        {
            return 1;
        }
            
        i++;
    }
    return str1[i] - str2[i];
}

char *my_fgets (char *str, int n, FILE *stream){
    assert(str);

    if (stream != NULL){
        int i = 0;
        while((str[i] != EOF) || (str[i] != '\0')){
            str[i] = fgetc(stream);         
            i++;
        }
        return str;
    } else {
        return nullptr;
    }
}

char *my_strdup(const char *str){
    assert(str);

    int lengh = my_strlen(str) + 1;
    char *dubstr = (char *)calloc(lengh, sizeof(char));
    my_strncpy(dubstr,str, lengh);

    return dubstr;
}