#include <stdlib.h>
#include <stdio.h>

int sum(int a, int b) {
        if(a < 100) {
                return a + b;
        } else if(100 <=  a && a  < 10000) {
                return 250 + b;
        } else {
                return 450 + b;
        }
}

int main() {


        int a = 100;
        int b =200;
        int c  = sum(a, b);


        if (c > 250) {

                printf("you are a fool\n");
        } else if(c > 400) {
                printf("you are pretity\n");
        } else {
                printf("you are a clever\n");
        }

        return 0;
}

