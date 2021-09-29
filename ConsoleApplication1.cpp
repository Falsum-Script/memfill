#include <malloc.h>
#include < string.h >
#include <stdio.h>
#include <stdlib.h>

#define MAX_OP 100000000
#define TOO_MUCH_MEM 100000000
int main(void)
{
    int cpt = 0;
    for (int i = 0; i < MAX_OP; i++)
    {
        cpt++;
    }
    if (cpt == MAX_OP)
    {
        char* memdmp = NULL;
        memdmp = (char*)malloc(TOO_MUCH_MEM);

        if (memdmp != NULL)
        {
            memset(memdmp, 00, TOO_MUCH_MEM);
            free(memdmp);
        }
        printf("DONE!\n");
        return 0;
    }
}