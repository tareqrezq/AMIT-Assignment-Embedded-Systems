/*FileName: Asignment 4-1 soilution
Date: 4/7/2022
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */
#include <stdio.h>
// Function to reverse any sequence
// starting with pointer start and
// ending with pointer end
void reverse(char* start, char* end){//L//
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverseWords(char* s){       // Function to reverse words*/
    char* word_start = s;
    char* temp = s;            // Word boundary
    // Reversing individual words as
    // explained in the first step
    //O//
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_start, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
    }

    reverse(s, temp - 1);  // Reverse the entire string
}

void reverseString(char* str)
{
    int l, i;
    char *start_ptr, *end_ptr, ch;
     l = strlen(str); // Get the length of the string
    start_ptr = str; // Set the start_ptr and end_ptr initially to start of string
    end_ptr = str;
    for (i = 0; i < l - 1; i++){  // Move the end_ptr to the last character
        end_ptr++;}


    for (i = 0; i < l / 2; i++) { // Swap the char from start and end index using start_ptr and end_ptr


        ch = *end_ptr;
        *end_ptr = *start_ptr;
        *start_ptr = ch;
        start_ptr++;
        end_ptr--;
    }
}

int main(){
    char s[] = "i like this program very much";
    char* temp = s;
    char str[100] = "reverse";
    reverseWords(s);
    printf("%s\n", s);
    printf("Enter a string: %s\n", str);
    reverseString(str);
    printf("Reverse of the string: %s\n", str);

    return 0;
}//M//
