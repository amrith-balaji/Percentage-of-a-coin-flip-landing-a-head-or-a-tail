# Percentage-of-a-coin-flip-landing-a-head-or-a-tail
here is the code
```
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
//      printf("number of heads =  %d\n",o);
//      printf("number of tails = %f\n",COUNT-o);
        int t = COUNT - o;
        float perone = o / COUNT * 100 ;
        float perzer = t / COUNT * 100 ;
        printf("percent of tails = %.2f %",perone);
        printf("percent of heads = %.2f\n %",perzer);
        return 0;
}
```
the above two lines can be uncommented to print the number of heads and tails too 
it calculates the number of heads and tails out of a million coin flips and then calculates their percentages. 
here is the output after upload :



![image](https://user-images.githubusercontent.com/124582454/220929199-cba7b21a-1e96-4f59-a3ba-4331faf8448a.png)

