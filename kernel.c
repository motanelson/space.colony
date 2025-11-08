#include "base.h"

void kernel_main()
{
        int n=0;
        int xx;
        char Yellow=14;
        int i=320/2;
        int ii=0;
        int t=0;
        double d=200.00f/320.00f;
        double dd=0.0f;
        char c=Yellow;
        char Black=0;
	cls(Yellow);
         
        for(xx=0;xx<320;xx++){
             ppixel(xx,dd,Black);
             ppixel(xx,200-dd,Black);
             dd=dd+d;
        }
        while(1){}
	
	
}


