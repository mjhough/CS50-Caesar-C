#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Get int key
// Shift letters in plaintext by the number in the key

int main(int argc, string argv[])
{
    // Validate argument vector for argument. If none, tell user.
    if (argc != 2)
    {
        printf("Usage: ./caesar 3\n");
        return 1;
    }

    // Validate that the argument is alphanumeric.
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar 3\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);
    string plaintext = get_string("Plaintext: ");
    printf("ciphertext: ");

    // Loop through plaintext argument.
    for (int i = 0, k = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i])) // Check if current character is alphanumeric.
        {
            int p = (int) plaintext[i] - (isupper(plaintext[i]) ? 65 : 97); // Get index value (0-26) by subtracting the value of a or A.
            int cipher = (p + key) % 26; // Find the ASCII cipher character values.
            printf("%c", cipher + (plaintext[i] - p)); // Convert and then print out the ASCII characters.
            k++;
        }
        else
        {
            printf("%c", plaintext[i]); // Print out non-alphanumeric value if found.
        }
    }
    printf("\n");
}