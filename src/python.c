#include <stdio.h>


void run();
void runFile();

void main(int argc, char** argv) {
    if (argc == 1) run();
    if (argc == 2) runFile(argv[0]);
    if (argc > 2) {
        printf("Usage: %s [file]\n", argv[0]);
        return;
    }
}

void run() {

}


void runFile(char* fileName) {

}