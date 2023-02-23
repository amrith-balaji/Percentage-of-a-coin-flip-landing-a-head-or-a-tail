#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 0
#define MAX 2
#define INTERVAL 100
#define COUNT 1000000.00
int main() {
        int o;
        int i;
        int num;
        srand(time(NULL));
        for (i = 0; i < COUNT; i++) {
                num = MIN + (int) rand() / ((int) RAND_MAX / (MAX - MIN) ) ;
                //num = MIN + (int) rand() / ((int) RAND_MAX / (MAX - MIN) * INTERVAL) / INTERVAL;
                if (num == 1) {
                        o = o+1;
                }
        }
//      printf("number of ones =  %d\n",o);
//      printf("number of zeros = %f\n",COUNT-o);
        int t = COUNT - o;
        float perone = o / COUNT * 100 ;
        float perzer = t / COUNT * 100 ;
        printf("percent of ones = %.2f %",perone);
        printf("percent of zeros = %.2f\n %",perzer);
        return 0;
}
