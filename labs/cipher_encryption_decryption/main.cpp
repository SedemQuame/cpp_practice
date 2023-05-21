#include <iostream>
#include <string>

using namespace std;

char PLAIN_TEXT[] = {
    'A',
    'B',
    'C',
    'D',
    'E',
    'F',
    'G',
    'H',
    'I',
    'J',
    'K',
    'L',
    'M',
    'N',
    'O',
    'P',
    'Q',
    'R',
    'S',
    'T',
    'U',
    'V',
    'W',
    'X',
    'Y',
    'Z'};

char CIPHER_TEXT[] = {
    'E',
    'K',
    'M',
    'F',
    'L',
    'G',
    'D',
    'Q',
    'V',
    'Z',
    'N',
    'T',
    'O',
    'W',
    'Y',
    'H',
    'X',
    'U',
    'S',
    'P',
    'A',
    'B',
    'C',
    'R',
    'J'};

// Function Prototypes
string getInputData();
string encryptText(string plainText);
string decryptText(string encryptedText);
int findIndexOfChar(char ch, char arr[]);

int main()
{
    string message = getInputData();
    int choice;

    cout << "Please choose a operation to perform." << endl;
    cout << "1. Encrypt text." << endl;
    cout << "2. Decrypt text." << endl;

    cin >> choice;

    if (choice == 1)
    {
        cout << "Encrypting message ..." << endl;
        string encryptedMessage = encryptText(message);
        cout << "Encrypted message: " << encryptedMessage << endl;
    }

    if (choice == 2)
    {

        cout << "Decrypting message ..." << endl;
        string decryptedMessage = decryptText(message);
        cout << "Decrypted message: " << decryptedMessage << endl;
    }

    return 0;
}

string getInputData()
{
    string message;
    cout << "Please enter user message ";
    getline(cin, message);
    return message;
}

string encryptText(string plainText)
{
    string encryptedMessage = "";
    int currentCharIndex = 0;
    for (char ch : plainText)
    {
        int cipherTextChar = findIndexOfChar(ch, PLAIN_TEXT);
        encryptedMessage += CIPHER_TEXT[cipherTextChar];
    }
    return encryptedMessage;
}

string decryptText(string encryptedText)
{
    string encryptedMessage = "";
    int currentCharIndex = 0;
    for (char ch : encryptedText)
    {
        int cipherTextChar = findIndexOfChar(ch, CIPHER_TEXT);
        encryptedMessage += PLAIN_TEXT[cipherTextChar];
    }
    return encryptedMessage;
}

int findIndexOfChar(char ch, char arr[])
{
    int characterArrLen = strlen(arr);
    for (int i = 0; i < characterArrLen; i++)
    {
        if (ch == ' ')
        {
            continue;
        }
        if (ch == arr[i])
        {
            cout << "ch: " << arr[i] << " @ index i " << i << endl;
            return i;
        }
    }
    return -1;
}