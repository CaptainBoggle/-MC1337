
#include <stdbool.h>
/*
Line Structure:
LABEL CONDITION INSTRUCTION 

Labels:
Labels must appear first on a line, and are followed by a colon. Labels are used as jump targets by the jmp instruction. Labels may only contain letters, and are case sensitive.

Conditions:
Prefixing  an  instruction with a '+' or '-' symbol will cause that instruction to be enabled or disabled by test instructions. When an instruction is disabled by a test instruction, it will be skipped. All conditional instructions start in a disabled state. A test instruction must be executed to enable conditional instructions.

Instruction Operands:
R - Register
I - Integer (-999999999999999999 to 999999999999999999)
L - Label

Registers:
Registers are used as sources and destinations for data manipulated by MC1337 instructions. 
"acc" is the primary general-purpose register. All arithmetic operations implicitly use and modify he value of acc.
"dat" is a second register that can be used in most contexts where acc is permitted. Both acc and dat are initialised as zero.
"null" is a pseudo-register. Reading from null always returns zero, and writing to null has no effect.

*/

typedef enum {
    nop, // no effect
    mov, // R/I R - copy first val to second operand
    jmp, // L - jump to instruction following specified label
    slp, // R/I - stop operation for specified number of milliseconds, negative values are treated as zero
    add, // R/I - add value to acc
    sub, // R/I - subtract value from acc
    mul, // R/I - multiply acc by value
    not, // R/I - if the value in acc is zero, store the value of the first operand in acc, otherwise store zero in acc
    dgt, // R/I - Isolate the specified digit of the value in the acc register and store the result in the acc register (operands greater than 17 will always return 0, and if the operand is negative, the digit will be isolated from the absolute value of the acc register)
    dst, // R/I R/I - Set the digit of acc specified by the first operand to the value of the second operand (values of first operand greater than 17 result in nop)
    teq, // R/I R/I - If the value of the first operand is equal to the value of the second operand, enable "+" conditional instructions, if not equal, disable them.
    tgt, // R/I R/I - If the value of the first operand is greater than the value of the second operand, enable "+" conditional instructions, if not greater, disable them.
    tlt, // R/I R/I - If the value of the first operand is less than the value of the second operand, enable "+" conditional instructions, if not less, disable them.
    tcp, 
    gen
} InstructionSet;

int ip = 0;
int dat = 0;
int acc = 0;
bool cond = false;

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