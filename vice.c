#include <stdio.h>
#include "defs.h"

int main(){

    AllInit();

    U64 playBitBoard = 0ULL;
    printf("\nStart:\n");
    PrintBitBoard(playBitBoard);

    playBitBoard |= (1ULL << SQ64(D2));

    printf("\nSet D2:\n");
    PrintBitBoard(playBitBoard);

    playBitBoard |= (1ULL << SQ64(G2));
    printf("\nSet G2:\n");
    PrintBitBoard(playBitBoard);

    return 0;
}