
#include <stdio.h>

void file1_myfun(void);
static int mainprivatedata;
int main()

{
    mainprivatedata=100;
    printf("mainprivatedata = %d \n",mainprivatedata);
    file1_myfun();
    // printf("mainprivatedata = %d \n",mainprivatedata);

    return 0;
}

static void change_system_clock(int sys_clock)
{
 printf("System clock is = %d \n",sys_clock);   
}