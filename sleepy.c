/*
    Preston Tighe
    Professor Evans
    5343 Operating Systems

    It has a different PID every run. The process transitions into a waiting state when you call sleep(1).
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[ ]) {
    int count;
    if (argc == 2) {
        count = atoi(argv[1]);
    } else {
        count = 5;
    }

    pid_t pid = getpid();

    printf("%d-START\n", pid);
    for(int i = 0 ; i < count ; i++){
        sleep(1);
        printf("%d-TICK %d\n", pid, i + 1);
    }
}