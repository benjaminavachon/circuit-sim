#include <stdio.h>
#include <stdarg.h>

struct Input{
    int power;
};

int andGate(struct Input *inputs, int len);
int orGate(struct Input * inputs, int len);
int notGate(int input);

int main(){
    struct Input inputs[2];

    inputs[0].power = 1;
    inputs[1].power = 0;

    printf("%d\n",andGate(inputs,2));
    printf("%d\n",orGate(inputs,2));
    printf("%d\n",notGate(inputs[0].power));

    return 0;
}

int andGate(struct Input *inputs, int len){
    int i;
    for(i = 0; i < len; i++){
        if((inputs[i].power && 1) == 0){
            return 0;
        }
    }
    return 1;
}

int orGate(struct Input * inputs, int len){
    int i;
    for(i = 0; i < len; i++){
        if((inputs[i].power || 0) == 1){
            return 1;
        }
    }

    return 0;
}

int notGate(int input){
    return !input;
}