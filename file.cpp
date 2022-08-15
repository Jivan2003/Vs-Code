#include <iostream>
Using namespace std;
// This function receives text and shift and
// returns the encrypted text
String encrypt(string text, int s)
{
    String result = “”;
    // traverse text
    For (int i=0;i<text.length();i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        If (isupper(text[i]))
            Result += char(int(text[i]+s-65)%26 +65);
    // Encrypt Lowercase letters
    Else
        Result += char(int(text[i]+s-97)%26 +97);
    }
    // Return the resulting string
    Return result;
}
// Driver program to test the above function
Int main()
{
    String text=”ATTACKATONCE”;
    Int s = 4;
    Cout << “Text : “ << text;
    Cout << “\nShift: “ << s;
    Cout << “\nCipher: “ << encrypt(text, s);
    Return 0;
}
