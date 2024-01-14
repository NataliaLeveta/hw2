#include <stdio.h>
#include <stdlib.h>

int main () {
    int r = 1; // round number

    while (r <= 1000000) { // Loop for each round, up to 1,000,000 rounds
        if (r % 2 == 1) { // if round is odd 
            putchar ('C'); // print 'C'
            putchar('\n'); // change line 
            fflush (stdout); // flush the output buffer to ensure immediate display
        }
        if (r % 2 == 0) { // if round is even
            putchar ('D'); // print 'D'
            putchar('\n');
            fflush (stdout);
        }

        char move; // enemy move
        re = getchar();

        while(re != 'C' && re != 'D' && re != EOF) {
            re = getchar(); // wait for user input ('C', 'D', or EOF)
        }

        if (re == EOF) break; // if End Of File then exit the loop

        r++; // move to the next round
    }
}
