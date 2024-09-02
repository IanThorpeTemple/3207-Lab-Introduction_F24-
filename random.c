#include <stdlib.h>

char randchar(){
    char* letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return letters[rand() % 26];
}