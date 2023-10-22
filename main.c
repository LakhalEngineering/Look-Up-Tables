
#include <stdio.h>


const char *messages[] = {
    "Not a party, You are alone.\n",
    "One is the loneliest number.\n",
    "Not lonely, but not a party.\n",
    "Now we're talking",
    "Ah, yeah...",
    "Whoa. violated fire code!"
};


const int NUM_MESSAGES = (sizeof(messages) / sizeof(char *));

void print_party_size_info(size_t people){

    if(people>NUM_MESSAGES-1){
        printf("%s\n", messages[NUM_MESSAGES-1]);
    }else{
        printf("%s\n", messages[people]);
    }
}

int main(){

    print_party_size_info(2);
    printf("NUM_MESSAGES : %d\n The size of messages : %d\n The sizeof char : %d",NUM_MESSAGES, sizeof(messages), sizeof(char *));

    return 0;
}