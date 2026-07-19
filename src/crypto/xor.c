void encryptXOR(char command[], int length, unsigned char key)
{
    for (int i = 0; i < length; i++)
    {
        command[i] ^= key;
    }
}