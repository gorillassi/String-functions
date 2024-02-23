#include <stdio.h>
#include "string_functions.h"

int main(){
    /*char test[] = "";
    printf ("%ld\n",my_strlen(test));
        //printf("%s %s %s\n\n", source, &source[7], destination);
    char src[]="qwerty";
    char dst[]="              ";
    char app[] = "12345";
    //my_strncpy (dst, src, -1);
    my_strncat(src, app, 5);
    printf ("%s\n",src);*/

   
    //char str[] = "pro112";
    // int ch = 'g';
    // char *foun = my_strchr(str, ch);
    // printf("%s", foun);

    // char str1[] = "12345";
    // char str2[] = "123";
    // printf("%d", my_strcmp(str1, str2));
    
    //fgets
    FILE *mf;
    char str[50];
    char *estr;
    mf = fopen ("text.txt","r");
    estr = my_fgets (str, sizeof(str), mf);
    fclose(mf);
    printf("%s", estr);
    return 0;


    //strdub
    // char str[] = "pro112";

    // char *istr = my_strdup (str);
    // printf ("%s\n", istr);
    // free(istr);

    //
}