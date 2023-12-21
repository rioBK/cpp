/* C++ program to count total number of consonants and vowels in a given string**
 ** enter string value of your choice**
 ***enter different string values for different results***
 string values is accepted for both upper and lower case....
 */
#include <iostream>
#include<string.h>

using namespace std;
int main()
{
    char string[80];
    cout<<"Enter string: ";
    cin.getline(string,80);

    int vowel=0,consonant=0;                // variables for count of vowel and consonants

    for(int i=0;i<strlen(string);i++){
        if(isalpha(string[i])){                 // condition for alphabet
            if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||     // condition for vowel
               string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
                vowel++;
            else
                consonant++;
        }
    }

    cout<<"Count of vowels: "<<vowel<<endl;
    cout<<"Count of consonant: "<<consonant<<endl;

    return 0;
}
