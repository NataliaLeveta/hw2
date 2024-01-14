#include <stdio.h>
#include <stdlib.h>

int main () {
    int r = 1; // round number

    while (r <= 1000000) { // Loop for each round, up to 1,000,000 rounds
        if (r % 2 == 1) {
            putchar ('C'); // Print 'C' for odd rounds
            putchar('\n');
            fflush (stdout); // Flush the output buffer to ensure immediate display
        }
        if (r % 2 == 0) {
            putchar ('D'); // Print 'D' for even rounds
            putchar('\n');
            fflush (stdout);
        }

        int re;
        re = getchar();

        while(re != 'C' && re != 'D' && re != EOF) {
            re = getchar(); // Wait for user input ('C', 'D', or EOF)
        }

        if (re == EOF) break; // If End of File is encountered, exit the loop

        r++; // Move to the next round
    }
}
