#include <stdio.h>

unsigned char modifyRegister(unsigned char reg) {
    // Set 3rd bit (bit index 2)
    reg |= (1 << 2);

    // Clear 6th bit (bit index 5)
    reg &= ~(1 << 5);

    // Toggle 1st bit (bit index 0)
    reg ^= (1 << 0);

    return reg;
}

int main() {
    unsigned char reg = 0b00101101; // Example value
    unsigned char result = modifyRegister(reg);
    printf("Modified register: 0x%02X\n", result);
    return 0;
}
