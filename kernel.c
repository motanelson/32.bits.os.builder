#include "base.h"

void kernel_main()
{
        int n=0;
        char Yellow=14;
        char Black=0;
	cls(Yellow);
        
        for(n=0;n<320;n=n+20)vline(n,0,199,Black);
        for(n=0;n<200;n=n+20)hline(0,n,319,Black);
        while(1){}
	
	
}


