#define MODEL 4000

#if MODEL == 4000
    #define NUM_LINES 9
    #define NUM_GPR 1
    #define NUM_XBUS 2
    #define NUM_IO 2
    #define DAT_PRESENT 0
#elif MODEL == 6000
    #define NUM_LINES 14
    #define NUM_GPR 2
    #define NUM_XBUS 4
    #define NUM_IO 2
    #define DAT_PRESENT 1
#endif

typedef enum {
    nop,
    mov,
    jmp,
    slp,
    slx,
    add,
    sub,
    mul,
    not,
    dgt,
    dst,
    teq,
    tgt,
    tlt,
    tcp,
    gen
} InstructionSet;

int ip = 0;
int dat = 0;
int acc = 0;

int time = 0;

void eval(int instr) {
    switch (instr) {
        case nop: {
            
            break;
        }
        case mov: {

            break;
        }
        case jmp: {

            break;
        }
        case slp: {

            break;
        }
        case slx: {

            break;
        }
        case add: {

            break;
        }
        case sub: {

            break;
        }
        case mul: {

            break;
        }
        case not: {

            break;
        }
        case dgt: {

            break;
        }
        case dst: {

            break;
        }
        case teq: {

            break;
        }
        case tgt: {

            break;
        }
        case tlt: {

            break;
        }
        case tcp: {

            break;
        }
        case gen: {

            break;
        }
        default: {
            break;
        }
    }
}


int main() {

}