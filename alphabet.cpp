/*
 No. 6 | Programming 1 Finals
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //datatypes
    int consonant = 0, space = 0, word = 0, vowel = 0, size = 0;
    string sentence;

    cout << "Enter a phrase or sentence: ";
    getline(cin, sentence);

    // if the size is exceed
    if(sentence.size() > 200)
        size = 200;
    else
        size = sentence.size();

    // looping
    for(int i = 0; i < size; i++){

        if(sentence[i] == ' ')
        {
            space++;
            if(sentence[i + 1] >= 'a' || sentence[i + 1] >= 'A')
                word++;
        } else if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' ||
                   sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' ||
                   sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' ||
                   sentence[i] == 'U')
        {
            vowel++;
        } else if (sentence[i] >= 'a' && sentence[i] <= 'z' || sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            consonant++;
        }
    }

    cout << "Vowels = " << vowel << "\n";
    cout << "Consonants = " << consonant << "\n";
    cout << "Spaces = " << space << "\n";
    cout << "Words = " << word + 1 << endl;

    return 0;
}