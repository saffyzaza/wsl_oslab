#include <stdio.h>
#include <unistd.h>
 
int main() {
    printf("===== ข้อมูลนักศึกษา =====\n");
    printf("ชื่อ: alongkorn chaiyasa \n");
    printf("รหัส: 671540006012-2 \n");
    printf("PID ของโปรแกรมนี้: %d\n", getpid());
    printf("==========================\n");
    return 0;
}
