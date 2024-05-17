#include <stdio.h>

int main() {
    char input_string[] = "DepArTment Of CsTE";
    int vowel_count = 0;
    int consonant_count = 0;

    for (int i = 0; input_string[i] != '\0'; i++) {
        char c = input_string[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            // Check if character is a vowel
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }

    printf("\"V = %d\" and \"C = %d\"\n", vowel_count, consonant_count);

    return 0;
}