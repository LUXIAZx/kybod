#include "std.h"
#include "platform/linux.h"

#define EXIT 'q'
int main(void)
{
    char c;
    
    while((c = keyPress()) != EXIT)
    {
        printf("press %c\n", c);
    }
    
    return 0; //
}