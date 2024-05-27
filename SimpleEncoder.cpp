#include <iostream>
#include <string>

using namespace std; // we define the use of the spacename std

void encode(string& s); // declaration of function prototypes
void decode(string& s); // declaration of function prototypes

int main()
{
    cout << "Simple Encoder/Decoder By Mosix / Github : MosixS" << endl;
    string usersize;

    cout << "Word or phrase to encode ->  ";
    getline(cin, usersize); // using cin.get to be able to store user input in a char variable

    encode(usersize);

    return 0;
}

// encoding which will add + 10 decimal to each letter of the word or phrase entered

void encode(string& s)
{
    char usersize2;

    for (int i = 0; i < s.size(); i++) 
    {
        s[i] += 10;
    }

    cout << "Encoded Word/Phrase ->  " << s << endl;


    cout << "Do you want to decode the word/phrase in question ? (Y/N)";
    cin >> usersize2;

    if (usersize2 == 'Y' || usersize2 == 'y')
    {
        decode(s);
    }

    if (usersize2 == 'N' || usersize2 == 'n')

    {
        exit;
    }
    else
    {
        
    }

}

// decoding which will remove -10 decimal from each letter of the word or sentence entered

void decode(string& s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] -= 10;
    }

    cout << "Decoded Word/Phrase ->  " << s << endl;

    cout << "Press any key to continue...";
    cin.ignore();
    cin.get();

}