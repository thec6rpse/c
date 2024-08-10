#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (void) {
    bool keep_going = true; // Could also be `bool keep_going = 1;
    while(keep_going){
        printf("This will run as long as keep_going is true.\n");
        keep_going =false;      // Could be 0
    }
    printf("Stopping!\n");
    return EXIT_SUCCESS;

}
