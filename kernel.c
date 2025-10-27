#include "base.h"

void kernel_main()
{
	char *src =scr2; //(char *)0x000b8000L;
	int n=0;

	cls(14);
        for(n=0;n<320;n=n+20)vline(n,0,199,0);
        for(n=0;n<200;n=n+20)hline(0,n,319,0);
        while(1){}
	
	
}


