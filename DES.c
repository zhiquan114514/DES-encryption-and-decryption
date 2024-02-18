#include<stdio.h>

void convertToBinaryArr(unsigned long long input, char* binaryInput){
    for(int i = 63; i >=0; i--){
        binaryInput[i] = (input & 1) ? '1' : '0'; // bitwise AND operation
        input >>= 1; //R shift 1
    }
}
unsigned long long convertToULL(char* preCipherText, int size){
    unsigned long long CipherText = 0ULL;
    for(int i = 0; i < size; i++){
        CipherText <<= 1;
        CipherText |= (preCipherText[i]-'0');
        
    }
    return CipherText;
}
void initialPermutation(char* binaryInput){
    char tmp[64];
    tmp[0] = binaryInput[57];   tmp[1] = binaryInput[49];   tmp[2] = binaryInput[41];   tmp[3] = binaryInput[33];
    tmp[4] = binaryInput[25];   tmp[5] = binaryInput[17];   tmp[6] = binaryInput[9];    tmp[7] = binaryInput[1];

    tmp[8] = binaryInput[59];   tmp[9] = binaryInput[51];   tmp[10] = binaryInput[43];  tmp[11] = binaryInput[35];
    tmp[12] = binaryInput[27];  tmp[13] = binaryInput[19];  tmp[14] = binaryInput[11];  tmp[15] = binaryInput[3];

    tmp[16] = binaryInput[61];  tmp[17] = binaryInput[53];  tmp[18] = binaryInput[45];  tmp[19] = binaryInput[37];
    tmp[20] = binaryInput[29];  tmp[21] = binaryInput[21];  tmp[22] = binaryInput[13];  tmp[23] = binaryInput[5];

    tmp[24] = binaryInput[63];  tmp[25] = binaryInput[55];  tmp[26] = binaryInput[47];  tmp[27] = binaryInput[39];
    tmp[28] = binaryInput[31];  tmp[29] = binaryInput[23];  tmp[30] = binaryInput[15];  tmp[31] = binaryInput[7];

    tmp[32] = binaryInput[56];  tmp[33] = binaryInput[48];  tmp[34] = binaryInput[40];  tmp[35] = binaryInput[32];
    tmp[36] = binaryInput[24];  tmp[37] = binaryInput[16];  tmp[38] = binaryInput[8];   tmp[39] = binaryInput[0];

    tmp[40] = binaryInput[58];  tmp[41] = binaryInput[50];  tmp[42] = binaryInput[42];  tmp[43] = binaryInput[34];
    tmp[44] = binaryInput[26];  tmp[45] = binaryInput[18];  tmp[46] = binaryInput[10];  tmp[47] = binaryInput[2];

    tmp[48] = binaryInput[60];  tmp[49] = binaryInput[52];  tmp[50] = binaryInput[44];  tmp[51] = binaryInput[36];
    tmp[52] = binaryInput[28];  tmp[53] = binaryInput[20];  tmp[54] = binaryInput[12];  tmp[55] = binaryInput[4];

    tmp[56] = binaryInput[62];  tmp[57] = binaryInput[54];  tmp[58] = binaryInput[46];  tmp[59] = binaryInput[38];
    tmp[60] = binaryInput[30];  tmp[61] = binaryInput[22];  tmp[62] = binaryInput[14];  tmp[63] = binaryInput[6];

    memcpy(binaryInput, tmp, sizeof(tmp));
}

void PC1(char* binaryKey, char* PC1Key){
    char tmp[56];
    //0
    tmp[0] = binaryKey[56];   tmp[1] = binaryKey[48];   tmp[2] = binaryKey[40];   tmp[3] = binaryKey[32];
    tmp[4] = binaryKey[24];   tmp[5] = binaryKey[16];   tmp[6] = binaryKey[8];    tmp[7] = binaryKey[0];
    // 1
    tmp[8] = binaryKey[57];   tmp[9] = binaryKey[49];   tmp[10] = binaryKey[41];  tmp[11] = binaryKey[33];
    tmp[12] = binaryKey[25];  tmp[13] = binaryKey[17];  tmp[14] = binaryKey[9];   tmp[15] = binaryKey[1];
    // 2
    tmp[16] = binaryKey[58];  tmp[17] = binaryKey[50];  tmp[18] = binaryKey[42];  tmp[19] = binaryKey[34];
    tmp[20] = binaryKey[26];  tmp[21] = binaryKey[18];  tmp[22] = binaryKey[10];  tmp[23] = binaryKey[2];
    // 3
    tmp[24] = binaryKey[59];  tmp[25] = binaryKey[51];  tmp[26] = binaryKey[43];  tmp[27] = binaryKey[35];
    tmp[28] = binaryKey[62];  tmp[29] = binaryKey[54];  tmp[30] = binaryKey[46];  tmp[31] = binaryKey[38];
    // 4
    tmp[32] = binaryKey[30];  tmp[33] = binaryKey[22];  tmp[34] = binaryKey[14];  tmp[35] = binaryKey[6];
    tmp[36] = binaryKey[61];  tmp[37] = binaryKey[53];  tmp[38] = binaryKey[45];   tmp[39] = binaryKey[37];
    // 5
    tmp[40] = binaryKey[29];  tmp[41] = binaryKey[21];  tmp[42] = binaryKey[13];  tmp[43] = binaryKey[5];
    tmp[44] = binaryKey[60];  tmp[45] = binaryKey[52];  tmp[46] = binaryKey[44];  tmp[47] = binaryKey[36];
    // 6
    tmp[48] = binaryKey[28];  tmp[49] = binaryKey[20];  tmp[50] = binaryKey[12];  tmp[51] = binaryKey[4];
    tmp[52] = binaryKey[27];  tmp[53] = binaryKey[19];  tmp[54] = binaryKey[11];  tmp[55] = binaryKey[3];


    memcpy(PC1Key, tmp, sizeof(tmp));
}

void PC2Compression(char* PC2Key, char* PC2Compressed){
        char tmp[48];
    //0
    tmp[0] = PC2Key[13];   tmp[1] = PC2Key[16];   tmp[2] = PC2Key[10];   tmp[3] = PC2Key[23];
    tmp[4] = PC2Key[0];    tmp[5] = PC2Key[4];    tmp[6] = PC2Key[2];    tmp[7] = PC2Key[27];
    // 1
    tmp[8] = PC2Key[14];   tmp[9] = PC2Key[5];   tmp[10] = PC2Key[20];  tmp[11] = PC2Key[9];
    tmp[12] = PC2Key[22];  tmp[13] = PC2Key[18]; tmp[14] = PC2Key[11];  tmp[15] = PC2Key[3];
    // 2
    tmp[16] = PC2Key[25];  tmp[17] = PC2Key[7];  tmp[18] = PC2Key[15];  tmp[19] = PC2Key[6];
    tmp[20] = PC2Key[26];  tmp[21] = PC2Key[19]; tmp[22] = PC2Key[12]; tmp[23] = PC2Key[1];
    // 3
    tmp[24] = PC2Key[40];  tmp[25] = PC2Key[51];  tmp[26] = PC2Key[30];  tmp[27] = PC2Key[36];
    tmp[28] = PC2Key[46];  tmp[29] = PC2Key[54];  tmp[30] = PC2Key[29];  tmp[31] = PC2Key[39];
    // 4
    tmp[32] = PC2Key[50];  tmp[33] = PC2Key[44];  tmp[34] = PC2Key[32];  tmp[35] = PC2Key[47];
    tmp[36] = PC2Key[43];  tmp[37] = PC2Key[48];  tmp[38] = PC2Key[38];  tmp[39] = PC2Key[55];
    // 5
    tmp[40] = PC2Key[33];  tmp[41] = PC2Key[52];  tmp[42] = PC2Key[45];  tmp[43] = PC2Key[41];
    tmp[44] = PC2Key[49];  tmp[45] = PC2Key[35];  tmp[46] = PC2Key[28];  tmp[47] = PC2Key[31];
   /*
    // 6
    tmp[48] = PC1Key[28];  tmp[49] = PC1Key[20];  tmp[50] = PC1Key[12];  tmp[51] = PC1Key[4];
    tmp[52] = PC1Key[27];  tmp[53] = PC1Key[19];  tmp[54] = PC1Key[11];  tmp[55] = PC1Key[3];   
   */ 

    memcpy(PC2Compressed, tmp, sizeof(tmp));
}

void split(char* from, char* leftHalf, char* rightHalf, int size){
    memcpy(leftHalf, from, size); // Copy left half
    memcpy(rightHalf, from + size, size); // Copy right half
}

void expansion(char* roundKey,char* outKey){
    
    //0
    outKey[0] = roundKey[31];  outKey[1] = roundKey[0];  outKey[2] = roundKey[1];   outKey[3] = roundKey[2];
    outKey[4] = roundKey[3];   outKey[5] = roundKey[4];   outKey[6] = roundKey[3];    outKey[7] = roundKey[4];
    // 1
    outKey[8] = roundKey[5];   outKey[9] = roundKey[6];   outKey[10] = roundKey[7];  outKey[11] = roundKey[8];
    outKey[12] = roundKey[7];  outKey[13] = roundKey[8];  outKey[14] = roundKey[9];  outKey[15] = roundKey[10];
    // 2
    outKey[16] = roundKey[11];  outKey[17] = roundKey[12];  outKey[18] = roundKey[11];  outKey[19] = roundKey[12];
    outKey[20] = roundKey[13];  outKey[21] = roundKey[14]; outKey[22] = roundKey[15];  outKey[23] = roundKey[16];
    // 3
    outKey[24] = roundKey[15];  outKey[25] = roundKey[16];  outKey[26] = roundKey[17];  outKey[27] = roundKey[18];
    outKey[28] = roundKey[19];  outKey[29] = roundKey[20];  outKey[30] = roundKey[19];  outKey[31] = roundKey[20];
    // 4
    outKey[32] = roundKey[21];  outKey[33] = roundKey[22];  outKey[34] = roundKey[23];  outKey[35] = roundKey[24];
    outKey[36] = roundKey[23];  outKey[37] = roundKey[24];  outKey[38] = roundKey[25];  outKey[39] = roundKey[26];
    // 5
    outKey[40] = roundKey[27];  outKey[41] = roundKey[28];  outKey[42] = roundKey[27];  outKey[43] = roundKey[28];
    outKey[44] = roundKey[29];  outKey[45] = roundKey[30];  outKey[46] = roundKey[31];  outKey[47] = roundKey[0];    

}

void IPInverse(char* in){
        char tmp[64];
    tmp[0] = in[39];   tmp[1] = in[7];   tmp[2] = in[47];   tmp[3] = in[15];
    tmp[4] = in[55];   tmp[5] = in[23];   tmp[6] = in[63];    tmp[7] = in[31];

    tmp[8] = in[38];   tmp[9] = in[6];   tmp[10] = in[46];  tmp[11] = in[14];
    tmp[12] = in[54];  tmp[13] = in[22];  tmp[14] = in[62];  tmp[15] = in[30];

    tmp[16] = in[37];  tmp[17] = in[5];  tmp[18] = in[45];  tmp[19] = in[13];
    tmp[20] = in[53];  tmp[21] = in[21];  tmp[22] = in[61];  tmp[23] = in[29];

    tmp[24] = in[36];  tmp[25] = in[4];  tmp[26] = in[44];  tmp[27] = in[12];
    tmp[28] = in[52];  tmp[29] = in[20];  tmp[30] = in[60];  tmp[31] = in[28];

    tmp[32] = in[35];  tmp[33] = in[3];  tmp[34] = in[43];  tmp[35] = in[11];
    tmp[36] = in[51];  tmp[37] = in[19];  tmp[38] = in[59];   tmp[39] = in[27];

    tmp[40] = in[34];  tmp[41] = in[2];  tmp[42] = in[42];  tmp[43] = in[10];
    tmp[44] = in[50];  tmp[45] = in[18];  tmp[46] = in[58];  tmp[47] = in[26];

    tmp[48] = in[33];  tmp[49] = in[1];  tmp[50] = in[41];  tmp[51] = in[9];
    tmp[52] = in[49];  tmp[53] = in[17];  tmp[54] = in[57];  tmp[55] = in[25];

    tmp[56] = in[32];  tmp[57] = in[0];  tmp[58] = in[40];  tmp[59] = in[8];
    tmp[60] = in[48];  tmp[61] = in[16];  tmp[62] = in[56];  tmp[63] = in[24];
    memcpy(in, tmp, sizeof(tmp));
}

  int  boxes[8][4][16] = {
{   //S1
    {14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7},
    {0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8},
    {4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0},
    {15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13}
},
{   //S2
    {15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10},
    {3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5},
    {0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15},
    {13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9}
},
{   //S3
    {10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8},
    {13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1},
    {13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7},
    {1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12}
},
{   //S4
    {7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15},
    {13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9},
    {10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4},
    {3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14}
},
{   //S5
    {2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9},
    {14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6},
    {4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14},
    {11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3}
},
{   //S6
    {12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11},
    {10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8},
    {9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6},
    {4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13}
},
{   //S7
    {4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1},
    {13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6},
    {1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2},
    {6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12}
},
{   //S8
    {13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7},
    {1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2},
    {7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8},
    {2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11}
}
    
};

void P(char* in){
    char tmp[32];
    //0
    tmp[0] = in[15];   tmp[1] = in[6];   tmp[2] = in[19];   tmp[3] = in[20];
    tmp[4] = in[28];    tmp[5] = in[11];    tmp[6] = in[27];    tmp[7] = in[16];
    // 1
    tmp[8] = in[0];   tmp[9] = in[14];   tmp[10] = in[22];  tmp[11] = in[25];
    tmp[12] = in[4];  tmp[13] = in[17]; tmp[14] = in[30];  tmp[15] = in[9];
    // 2
    tmp[16] = in[1];  tmp[17] = in[7];  tmp[18] = in[23];  tmp[19] = in[13];
    tmp[20] = in[31];  tmp[21] = in[26]; tmp[22] = in[2]; tmp[23] = in[8];
    // 3
    tmp[24] = in[18];  tmp[25] = in[12];  tmp[26] = in[29];  tmp[27] = in[5];
    tmp[28] = in[21];  tmp[29] = in[10];  tmp[30] = in[3];  tmp[31] = in[24];
    memcpy(in, tmp, sizeof(tmp));
}

void binaryToInt(int* row, int* column, int* outs){
        for (int i = 0; i < 2; i++) {
            outs[0] = outs[0] * 2 + row[i];
        }
        for (int i = 0; i < 4; i++) {
            outs[1] = outs[1] * 2 + column[i];
        }

}

void intToBinary(int* input, char* output){
    char tmp[8][4];
     for(int i = 0; i < 8; i++){
        int tmp1 = input[i];
        for(int j = 3; j >= 0 ; j--){
            tmp[i][j] = (tmp1 & 1) +'0';
            tmp1 >>= 1;
            
        }
    }
    int counter = 0;

    for(int i = 0; i < 8; i++)
        memcpy(output + (i * 4), tmp[i], sizeof(tmp[i]));

}

void SBoxesSubstitution(char* processingR, char* finalF){
    int values[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    char s[8][6];
    for(int i = 0; i < 8; i++){
        memcpy(s[i], processingR + (i*6), sizeof(s[i]));
    }


    // A0 A5 = row
    // A1 A2 A3 A4 = column
    for(int i = 0; i < 8; i++){
        int row[2] = {s[i][0] - '0', s[i][5] - '0'};
        int column[4] = {s[i][1] - '0', s[i][2] - '0', s[i][3] - '0', s[i][4] - '0'};
        int axis[2] = {0, 0};
        binaryToInt(row, column, axis);
        values[i] = boxes[i][axis[0]][axis[1]];

    }
    printf("round substitution: ");
    for(int i = 0; i < 8; i++)
        printf("%d ", values[i]);
    
    intToBinary(values, finalF);


}

int main(){


    unsigned long long input;
    unsigned long long key;
    char mode;
    char binaryInput[64];
    char binaryKey[64];
    char PC1Key[56];
    char L[32];
    char R[32];
    char PC2Key[56];
    char C[28];
    char D[28];
    printf("input your message: ");
            scanf("%llx", &input);
    printf("\ninput your key: ");
            scanf("%llx", &key);    
    printf("\nenter mode, e for encryption and d for decryption: ");
            scanf(" %c",&mode);

    convertToBinaryArr(input, binaryInput);
    convertToBinaryArr(key, binaryKey);

    printf("mode: %c\n", mode);

    printf("message converted to binary: ");
    for(int i = 0; i < 64; i++){
        printf("%c", binaryInput[i]);
    }   printf("\n");

    printf("key converted to binary: ");
    for(int i = 0; i < 64; i++){
        printf("%c", binaryKey[i]);
    }   printf("\n");

    if(mode == 'e')
        initialPermutation(binaryInput);
    else if(mode == 'd')
        //IPInverse(binaryInput);
        initialPermutation(binaryInput);

    printf("message after IP: ");
    for(int i = 0; i < 64; i++){
        printf("%c", binaryInput[i]);
    }   printf("\n");

    // build L, R, C, D
    if(mode == 'e')
    split(binaryInput,L, R, sizeof(L));
    if(mode =='d')
    split(binaryInput,R, L, sizeof(R));

    printf("L: ");
    for(int i = 0; i < 32; i++){
        printf("%c", L[i]);
    }printf("\n");

    printf("R: ");
    for(int i = 0; i < 32; i++){
        printf("%c", R[i]);
    }printf("\n");




    PC1(binaryKey, PC1Key);

    printf("PC1 key: ");
    for(int i = 0; i < sizeof(PC1Key)/ sizeof(PC1Key[0]); i++){
        printf("%c",PC1Key[i]);
    } printf("\n");

    split(PC1Key, C, D, sizeof(C));

    printf("C: ");
    for(int i = 0; i < 28; i++){
        printf("%c", C[i]);
    }printf("\n");

    printf("D: ");
    for(int i = 0; i < 28; i++){
        printf("%c", D[i]);
    }printf("\n");

    char keys[16][48];
    // 16 keys generation
    for (int i = 0; i < 16; i++)
    {
        printf("key generation round: %d\n",i+1);
        //C D rotating

        if((i + 1) == 1 || (i + 1) == 2 || (i + 1) == 9 || (i + 1) == 16) { // left rotate 1 bit
            char tmp = C[0];
            char tmp1 = D[0];
            for(int a = 0; a < (sizeof(C)/sizeof(C[0]))-1; a++){
                C[a] = C[a+1];
                D[a] = D[a+1];
            }
            C[27] = tmp;
            D[27] = tmp1;
        } else { // left rotate 2 bits


            char tmp[2] = {C[0], C[1]};
            char tmp1[2] = {D[0], D[1]};
            for(int b = 0; b < (sizeof(C)/sizeof(C[0]))-2; b++){
                C[b] = C[b+2];
                D[b] = D[b+2];
            }
            C[26] = tmp[0];
            C[27] = tmp[1];
            D[26] = tmp1[0];
            D[27] = tmp1[1];
 

        }
        memcpy(PC2Key, C, sizeof(C));
        memcpy(PC2Key + 28, D, sizeof(D));
        PC2Compression(PC2Key,keys[i]);
        printf("round key generated: ");
        for (int j = 0; j < sizeof(keys[i])/sizeof(keys[i][0]); j++)
        {
            printf("%c", keys[i][j]);
        }printf("\n");
        unsigned long long keysHex = convertToULL(keys[i],48);
        printf("round key hex: %llx\n",keysHex);
        
    }
    // rearrange key array
    if(mode == 'd'){
        printf("\nrearranging key array\n");
        char tmpKey[48];
        for(int i = 15; i >= 8; i--){
            memcpy(tmpKey, keys[i], sizeof(keys[i]));
            memcpy(keys[i], keys[15 - i], sizeof(keys[15 - i]));
            memcpy(keys[15-i], tmpKey, sizeof(tmpKey));
        }
    }

    //F function
    char expanded[48];
    char processingR[48];
    char finalF[32];
    for(int i = 0; i < 16; i++){
        printf("\n\n\n");
        printf("F function round: %d\n",i+1);

        printf("old L: ");
        for(int i = 0; i < 32; i++){
            printf("%c", L[i]);
        }printf("\n");
        unsigned long long oldLhex= convertToULL(L,32);
        printf("old L hex: %llx\n",oldLhex);

        printf("old R: ");
        for(int i = 0; i < 32; i++){
            printf("%c", R[i]);
        }printf("\n");
        unsigned long long oldRhex = convertToULL(R,32);
        printf("old R hex: %llx\n",oldRhex);




        if(mode == 'e'){

        expansion(R,expanded);
        printf("expanded R: ");
        for (int a = 0; a < 48; a++)
        {
            printf("%c", expanded[a]);
        } printf("\n");

        } else if (mode == 'd'){

        expansion(L,expanded);
        printf("expanded L: ");
        for (int a = 0; a < 48; a++)
        {
            printf("%c", expanded[a]);
        } printf("\n");
        }




        printf("round Key:  ");
        for (int a = 0; a < 48; a++)
        {
            printf("%c", keys[i][a]);
        } printf("\n"); 
        unsigned long long roundKeyHex = convertToULL(keys[i],48);
        printf("round key hex: %llx\n",roundKeyHex);
        //XOR with round key
        for(int j = 0; j < 48; j++) {
            if((expanded[j] == '1' && keys[i][j] =='1') || (expanded[j] == '0' && keys[i][j] == '0')){
                processingR[j] = '0';
            } else if((expanded[j] == '1' && keys[i][j] == '0') || (expanded[j] == '0' && keys[i][j] == '1')){
                processingR[j] = '1';
            }
        }

        printf("XOR result: ");
        for (int a = 0; a < 48; a++)
        {
            printf("%c", processingR[a]);
        } printf("\n");
        unsigned long long XORresultHex = convertToULL(processingR,48);
        printf("XOR result hex: %llx\n", XORresultHex);
        SBoxesSubstitution(processingR, finalF);

        // need permutation
        P(finalF);
        printf("\nF value: ");
        for(int i = 0; i < 32; i++){
            printf("%c", finalF[i]);
        }printf("\n");
        unsigned long long fHex = convertToULL(finalF,32);
        printf("F value hex: %llx\n",fHex);

        

        char tmpRes[32];

        if( mode == 'e'){

        //XOR with old L
        for(int j = 0; j < 32; j++) {
            if((finalF[j] == '1' && L[j] =='1') || (finalF[j] == '0' && L[j] == '0')){
                tmpRes[j] = '0';
            } else if((finalF[j] == '1' && L[j] == '0') || (finalF[j] == '0' && L[j] == '1')){
                tmpRes[j] = '1';
            }
        }            

        } else if(mode =='d'){

        //XOR with old R    
        for(int j = 0; j < 32; j++) {
            if((finalF[j] == '1' && R[j] =='1') || (finalF[j] == '0' && R[j] == '0')){
                tmpRes[j] = '0';
            } else if((finalF[j] == '1' && R[j] == '0') || (finalF[j] == '0' && R[j] == '1')){
                tmpRes[j] = '1';
            }
        }  
        }

    if(mode == 'e'){

        // new L = old R
        memcpy(L, R, sizeof(R));

        printf("new L%d: ",i+1);
        for(int i = 0; i < 32; i++){
            printf("%c", L[i]);
        }   printf("\n");      
        // new R = L XOR F(old R, nth key) = tmpRes
        memcpy(R, tmpRes, sizeof(tmpRes));
        
        printf("new R%d: ",i+1);
        for(int i = 0; i < 32; i++){
            printf("%c", R[i]);
        }   printf("\n");

    } else if(mode == 'd'){

        // new R = old L
        memcpy(R, L, sizeof(L));

        printf("new L%d: ",i+1);
        for(int i = 0; i < 32; i++){
            printf("%c", L[i]);
        }   printf("\n");      
        // new L = R XOR F(old L, nth key) = tmpRes
        memcpy(L, tmpRes, sizeof(tmpRes));
        
        printf("new R%d: ",i+1);
        for(int i = 0; i < 32; i++){
            printf("%c", R[i]);
        }   printf("\n");


    }



        
        unsigned long long newLhex= convertToULL(L,32);
        printf("new L hex: %llx\n",newLhex);
        unsigned long long newRhex= convertToULL(R,32);
        printf("new R hex: %llx\n",newRhex);
        printf("\n\n\n");


    }

    // final permutation
    char preCipherText[64];


    if( mode == 'e'){

        memcpy(preCipherText, R, sizeof(R));
        memcpy(preCipherText + 32, L, sizeof(L));
        unsigned long long cipherBeforeInv = convertToULL(preCipherText,64);
        printf("cipher tex hex before IP inverse: %llx\n", cipherBeforeInv);
        IPInverse(preCipherText);

    }

    else if( mode == 'd'){
        memcpy(preCipherText, L, sizeof(L));
        memcpy(preCipherText + 32, R, sizeof(R));
        unsigned long long cipherBeforeInv = convertToULL(preCipherText,64);
        printf("cipher tex hex before IP inverse: %llx\n", cipherBeforeInv);
        IPInverse(preCipherText);
        //memcpy(preCipherText, L, sizeof(L));
        //memcpy(preCipherText + 32, R, sizeof(R));
        //initialPermutation(preCipherText);
    }
        
    unsigned long long cipherText = 0;
    cipherText =  convertToULL(preCipherText,64);
    printf("Cipher Text in binary: ");
    for(int i = 0; i < 64; i++){
        printf("%c",preCipherText[i]);
    }   printf("\n");
    printf("Cipher Text: %llx", cipherText);
    
    

    return 0;
}