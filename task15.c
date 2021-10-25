/*
A consonant is a speech sound that is not a vowel. It also refers to letters
of the alphabet that represent those sounds: Z, B, T, G, and H are all consonants.
 Consonants are all the non-vowel sounds, or their corresponding letters:
  A, E, I, O, U and sometimes Y are not consonants.


15. Напишете програма, която да намери броя на гласни и съгласни букви в
текст, въведен от клавиатурата, като използвате указатели
*/

#include <stdio.h>
//#include <stdlib.h>

int checkVowel(char c);
int checkCons(char c);
int isLetter(char c);

int main()
{

    int counterVowels = 0;
    int counterCons = 0;
    int lineCounter = 1;

    int *pLineCounter = &lineCounter;
    int *pCounterVowels = &counterVowels;
    int *pCounterCons = &counterCons;

    char c = 0;

    printf("Line %d: ", *pLineCounter);

    while (c != EOF)
    {
        c = getchar();

        if (checkVowel(c))
        {
            (*pCounterVowels)++;
        }
        else if (checkCons(c))
        {
            (*pCounterCons)++;
        }
        else if (c == '\n')
        {
            ++(*pLineCounter);
            printf("Line %d: ", *pLineCounter);
        }
    }

    printf(" Vowel letters: %d | Consonants letters: %d \n\n", *pCounterVowels, *pCounterCons);

    return 0;
}

int checkVowel(char c)
{
    int isLowerLetterVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
    int isUpperLetterVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');

    return (isLowerLetterVowel || isUpperLetterVowel);
}

int checkCons(char c)
{
    if (checkVowel(c))
    {
        return 0;
    }

    if(!isLetter(c)) {
        return 0;
    }

    return 1;

}

int isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}