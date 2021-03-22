#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

 #1
int main() {
    printf("hello, world!\n");
    return 0;
}

 #2
int main() {
    printf("%30s", "hello world");
    printf("\n");
    printf("%-30s", "hello world");
    return 0;
}

 #3
int main() {
    printf("%c", 'J');
    printf("%c", 'o');
    printf("%c", 's');
    printf("%c", 'h');
    return 0;
}

 #4
int main() {
    for (int i = 1; i < 101; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 1; i < 101; i++) {
        printf("%d*%d = %d\n", i, i, i*i);
    }
    return 0;
}

 #5
int main() {
    clock_t time;
    time = clock();
    for (int i = 0; i < 5; i++) {
        system("sleep 5");
    }
    time = clock() - time;
    double time_taken = ((double) time) / CLOCKS_PER_SEC;
    printf("Time Taken: %f", time_taken);
    return 0;
}

// #6
int main() {
    clock_t time;
    time = clock();
    for (int i = 0; i < 5; i++) {
        system("sleep 5 &");
    }
    time = clock() - time;
    double time_taken = ((double) time) / CLOCKS_PER_SEC;
    printf("Time Taken: %f", time_taken);
    return 0;
}


 #7
int main() {
    fork();
    printf("Hello World\n");
    return 0;
}

 #8
int main() {
    if (fork() == 0) {
        printf("Levy ");
    }
    else {
        printf("Josh ");
    }
    return 0;
}

 #9
int main() {
    if (fork() == 0) {
        sleep(5);
        printf("CHILD PROCESS\n");
    }
    else {
       sleep(4);
        printf("PARENT PROCESS\n");
        kill(fork(), SIGKILL);
    }
    return 0;
}