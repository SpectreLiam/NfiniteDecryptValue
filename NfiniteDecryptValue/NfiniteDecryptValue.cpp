#include <iostream>

int __fastcall DecryptValue(int address, int dec_key) {
    int v2; // r7
    int v3; // r11
    int v4; // ctr
    int v5; // r8
    int v6; // r10
    int v7; // r8
    int v8; // r9
    int v9; // r11
    int v10; // ctr
    int v11; // r10
    int v12; // r11
    int v13; // ctr
    int v14; // r9

    v2 = 2911;
    v3 = 0;
    v4 = 218;
    v5 = (dec_key + 0xBB6E) ^ (dec_key + 0x100) ^ address ^ 0xDE5;
    v6 = 12;
    do
    {
        v7 = v3 ^ v5;
        v8 = 0x8D;
        if (v6 <= 41)
            v8 = 154;
        v5 = v8 ^ v7;
        ++v3;
        v6 += 0xCF;
        --v4;
    } while (v4);
    v9 = 0;
    v10 = 0xEB;
    do
    {
        v11 = (((unsigned int)(0xCD * dec_key + 12) <= 0x64) - 1 + 0xC) ^ v9++;
        v2 ^= v11;
        --v10;
    } while (v10);
    v12 = 0;
    v13 = 156;
    do
    {
        v14 = ((unsigned int)(0xDC * dec_key + 41) <= 0x64 ? 1 : 0xD) ^ v12++;
        v2 ^= v14;
        --v13;
    } while (v13);
    return v2 ^ v5 ^ dec_key;
}

int main() {
    printf("Nfinite Decrypted Value: 0x%08X\n", DecryptValue(0x923201C7, 0x1925));

    system("pause");
    return 0;
}