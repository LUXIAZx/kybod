#include "std.h"
#include "platform/linux.h"

#define EXIT 'q'
int main(void)
{
    char c;
    
    while((c = keyPress()) != EXIT)
    {
        printf("test press %c\n", c);
    }
    printf("Exit\n");
    
    return 0; //
}