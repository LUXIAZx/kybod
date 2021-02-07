#include "std.h"
#include "kybot.h"
#include "platform.h"

int main(void)
{
    char c;
    do
    {
        /* code */
        printf("press %c\n", c);
    } while ((c = keyPress()) != 'q') ;
    
    return 0; //
}