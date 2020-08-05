#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

/*int main()
{
    string s;
    cout<< "enter string : ";
    getline (cin, s);
    int j=0; // Storing consonants separately
    string c;
    for (int i=0; s[i]!='\0'; i++)
        if ((s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') || (s[i] != 'A' && s[i] != 'E' && s[i] != 'I'&& s[i] != 'O' && s[i] != 'U'))
            c[j++] = s[i];

    for (int i=0; s[i]!='\0'; i++)
        {
        if ((s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') || (s[i] != 'A' && s[i] != 'E' && s[i] != 'I'&& s[i] != 'O' && s[i] != 'U'))
            s[i] = c[--j] ;}//reversing the consonants in the original string using the 2nd string
        cout<<s;
    return 0;

}*/

bool check(char c)
{
    return (c=='a' || c=='A' || c=='e' ||
            c=='E' || c=='i' || c=='I' ||
            c=='o' || c=='O' || c=='u' ||
            c=='U');
}

string consonant(string s)
{
    int j=0;// Storing consonants separately
    string c;
    for (int i=0; s[i]!='\0'; i++)
        if (!check(s[i]))
            c[j++] = s[i];

    // Placing the vowels in the reverse
    // order in the string
    for (int i=0; s[i]!='\0'; i++)
        if (!check(s[i]))
            s[i] = c[--j] ;

     cout<<s;

}

// Driver function
int main()
{
    string s;
    cout<< "enter string : ";
    getline (cin, s);
    consonant(s);
    return 0;
}
