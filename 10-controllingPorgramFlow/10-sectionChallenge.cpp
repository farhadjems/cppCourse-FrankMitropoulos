#include <iostream>

using namespace std;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string inputMessage{};
    cout << " Insert your message: ";
    getline(cin, inputMessage, '\n');
    string encryptedMessage{};

    cout << " encrypting...\n";
    for (char cI : inputMessage)
    {
        size_t i = alphabet.find(cI);
        if (i != string::npos)
        {
            encryptedMessage += key[i];
        }
        else
        {
            encryptedMessage += cI;
        }
    }
    cout << " encrypted message is:\n " << encryptedMessage << endl;

    cout << " decrypting the encrypted message...\n";
    string decryptedMessage{};
    for (char cE : encryptedMessage)
    {
        size_t i = key.find(cE);
        if (i != string::npos)
        {
            decryptedMessage += alphabet[i];
        }
        else
        {
            decryptedMessage += cE;
        }
    }
    cout << " decrypted message is:\n " << decryptedMessage << endl;
}