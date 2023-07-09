#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    
    printf("Binary: ");
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    
    printf("\n");
}

// Function to convert binary to decimal
void binaryToDecimal(char* binary) {
    int decimal = 0;
    int power = 1;
    int length = 0;
    
    while (binary[length] != '\0') {
        length++;
    }
    
    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += power;
        }
        
        power *= 2;
    }
    
    printf("Decimal: %d\n", decimal);
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal) {
    char hexadecimal[32];
    int i = 0;
    
    while (decimal > 0) {
        int remainder = decimal % 16;
        
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder - 10 + 'A';
        }
        
        decimal = decimal / 16;
        i++;
    }
    
    printf("Hexadecimal: ");
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    
    printf("\n");
}

// Function to convert hexadecimal to decimal
void hexadecimalToDecimal(char* hexadecimal) {
    int decimal = 0;
    int length = 0;
    
    while (hexadecimal[length] != '\0') {
        length++;
    }
    
    for (int i = 0; i < length; i++) {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
            decimal = decimal * 16 + (hexadecimal[i] - '0');
        } else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
            decimal = decimal * 16 + (hexadecimal[i] - 'A' + 10);
        } else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f') {
            decimal = decimal * 16 + (hexadecimal[i] - 'a' + 10);
        }
    }
    
    printf("Decimal: %d\n", decimal);
}

int main() {
    int choice;
    int decimal;
    char binary[32];
    char hexadecimal[32];
    
    printf("Number System Converter\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Hexadecimal to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            decimalToBinary(decimal);
            break;
        case 2:
            printf("Enter a binary number: ");
            scanf("%s", binary);
            binaryToDecimal(binary);
            break;
        case 3:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            decimalToHexadecimal(decimal);
            break;
        case 4:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hexadecimal);
            hexadecimalToDecimal(hexadecimal);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}
