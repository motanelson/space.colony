#include "base.h"

void kernel_main()
{
        int n=0;
        int xx;
        char Yellow=14;
        int i=320/2;
        int ii=0;
        int t=0;
        double d=480.00f/640.00f;
        double dd=0.0f;
        char c=Yellow;
        char Black=0;
	cls();
         
        for(xx=0;xx<640;xx++){
             ppixel(xx,dd);
             ppixel(xx,480-dd);
             dd=dd+d;
        }
        
        while(1){}
	
	
}


