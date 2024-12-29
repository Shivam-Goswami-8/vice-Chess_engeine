#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

int main(){

    AllInit();

    int PieceOne = rand();
    int PieceTwo = rand();
    int PieceThree = rand();
    int PieceFour = rand();

    printf("PieceOne:%d\nPieceTwo:%d\nPieceThree:%d\nPieceFour:%d\n",PieceOne,PieceTwo,PieceThree,PieceFour);
    int key = PieceOne ^ PieceTwo ^ PieceThree ^ PieceFour;
    int TempKey = PieceFour;
    TempKey = TempKey ^ PieceTwo;
    TempKey = TempKey ^ PieceThree;
    TempKey = TempKey ^ PieceOne;
    printf("Key:%d\nTempKey:%X\n",key,TempKey);

    return 0;
}