#include <iostream>
#include "Sculptor.h"
#include <fstream>

using namespace std;

int main()
{
    Sculptor quadra(30,30,30);



//campo

    quadra.setColor(0, 1, 0, 1);
    quadra.putBox(10, 25, 10, 25,0, 1);


//gol
    quadra.setColor(1,1,1,0.8);

    quadra.putVoxel(10,14,1);
    quadra.putVoxel(10,14,2);
    quadra.putVoxel(10,14,3);
    quadra.putVoxel(10,14,4);
    quadra.putVoxel(10,14,5);

    quadra.putVoxel(10,14,5);
    quadra.putVoxel(10,15,5);
    quadra.putVoxel(10,16,5);
    quadra.putVoxel(10,17,5);
    quadra.putVoxel(10,18,5);
    quadra.putVoxel(10,19,5);
    quadra.putVoxel(10,20,5);


    quadra.putVoxel(10,20,4);
    quadra.putVoxel(10,20,3);
    quadra.putVoxel(10,20,2);
    quadra.putVoxel(10,20,1);

    quadra.putVoxel(24,14,1);
    quadra.putVoxel(24,14,2);
    quadra.putVoxel(24,14,3);
    quadra.putVoxel(24,14,4);
    quadra.putVoxel(24,14,5);


    quadra.putVoxel(24,15,5);
    quadra.putVoxel(24,16,5);
    quadra.putVoxel(24,17,5);
    quadra.putVoxel(24,18,5);
    quadra.putVoxel(24,19,5);
    quadra.putVoxel(24,20,5);

    quadra.putVoxel(24,20,1);
    quadra.putVoxel(24,20,2);
    quadra.putVoxel(24,20,3);
    quadra.putVoxel(24,20,4);
    quadra.putVoxel(24,20,5);


    //faixar brancas


    quadra.cutVoxel(10,13,0);
    quadra.cutVoxel(11,13,0);
    quadra.cutVoxel(12,13,0);
    quadra.cutVoxel(13,13,0);
    quadra.cutVoxel(14,13,0);

    quadra.cutVoxel(14,14,0);
    quadra.cutVoxel(14,15,0);
    quadra.cutVoxel(14,16,0);
    quadra.cutVoxel(14,17,0);
    quadra.cutVoxel(14,18,0);
    quadra.cutVoxel(14,19,0);
    quadra.cutVoxel(14,20,0);
    quadra.cutVoxel(14,21,0);


    quadra.cutVoxel(10,21,0);
    quadra.cutVoxel(11,21,0);
    quadra.cutVoxel(12,21,0);
    quadra.cutVoxel(13,21,0);
    quadra.cutVoxel(14,21,0);

    quadra.putVoxel(10,13,0);
    quadra.putVoxel(11,13,0);
    quadra.putVoxel(12,13,0);
    quadra.putVoxel(13,13,0);
    quadra.putVoxel(14,13,0);

    quadra.putVoxel(14,14,0);
    quadra.putVoxel(14,15,0);
    quadra.putVoxel(14,16,0);
    quadra.putVoxel(14,17,0);
    quadra.putVoxel(14,18,0);
    quadra.putVoxel(14,19,0);
    quadra.putVoxel(14,20,0);
    quadra.putVoxel(14,21,0);

    quadra.putVoxel(10,21,0);
    quadra.putVoxel(11,21,0);
    quadra.putVoxel(12,21,0);
    quadra.putVoxel(13,21,0);
    quadra.putVoxel(14,21,0);


    quadra.cutVoxel(24,13,0);
    quadra.cutVoxel(23,13,0);
    quadra.cutVoxel(22,13,0);
    quadra.cutVoxel(21,13,0);
    quadra.cutVoxel(20,13,0);

    quadra.cutVoxel(20,14,0);
    quadra.cutVoxel(20,15,0);
    quadra.cutVoxel(20,16,0);
    quadra.cutVoxel(20,17,0);
    quadra.cutVoxel(20,18,0);
    quadra.cutVoxel(20,19,0);
    quadra.cutVoxel(20,20,0);
    quadra.cutVoxel(20,21,0);

    quadra.cutVoxel(21,21,0);
    quadra.cutVoxel(22,21,0);
    quadra.cutVoxel(23,21,0);
    quadra.cutVoxel(24,21,0);

    quadra.putVoxel(24,13,0);
    quadra.putVoxel(23,13,0);
    quadra.putVoxel(22,13,0);
    quadra.putVoxel(21,13,0);
    quadra.putVoxel(20,13,0);

    quadra.putVoxel(20,14,0);
    quadra.putVoxel(20,15,0);
    quadra.putVoxel(20,16,0);
    quadra.putVoxel(20,17,0);
    quadra.putVoxel(20,18,0);
    quadra.putVoxel(20,19,0);
    quadra.putVoxel(20,20,0);
    quadra.putVoxel(20,21,0);

    quadra.putVoxel(21,21,0);
    quadra.putVoxel(22,21,0);
    quadra.putVoxel(23,21,0);
    quadra.putVoxel(24,21,0);

    quadra.cutVoxel(10,11,0);
    quadra.cutVoxel(11,11,0);
    quadra.cutVoxel(12,11,0);
    quadra.cutVoxel(13,11,0);
    quadra.cutVoxel(14,11,0);
    quadra.cutVoxel(15,11,0);
    quadra.cutVoxel(16,11,0);
    quadra.cutVoxel(17,11,0);
    quadra.cutVoxel(18,11,0);
    quadra.cutVoxel(19,11,0);
    quadra.cutVoxel(20,11,0);
    quadra.cutVoxel(21,11,0);
    quadra.cutVoxel(22,11,0);
    quadra.cutVoxel(23,11,0);
    quadra.cutVoxel(24,11,0);



    quadra.cutVoxel(10,23,0);
    quadra.cutVoxel(11,23,0);
    quadra.cutVoxel(12,23,0);
    quadra.cutVoxel(13,23,0);
    quadra.cutVoxel(14,23,0);
    quadra.cutVoxel(15,23,0);
    quadra.cutVoxel(16,23,0);
    quadra.cutVoxel(17,23,0);
    quadra.cutVoxel(18,23,0);
    quadra.cutVoxel(19,23,0);
    quadra.cutVoxel(20,23,0);
    quadra.cutVoxel(21,23,0);
    quadra.cutVoxel(22,23,0);
    quadra.cutVoxel(23,23,0);
    quadra.cutVoxel(24,23,0);

    quadra.putVoxel(10,11,0);
    quadra.putVoxel(11,11,0);
    quadra.putVoxel(12,11,0);
    quadra.putVoxel(13,11,0);
    quadra.putVoxel(14,11,0);
    quadra.putVoxel(15,11,0);
    quadra.putVoxel(16,11,0);
    quadra.putVoxel(17,11,0);
    quadra.putVoxel(18,11,0);
    quadra.putVoxel(19,11,0);
    quadra.putVoxel(20,11,0);
    quadra.putVoxel(21,11,0);
    quadra.putVoxel(22,11,0);
    quadra.putVoxel(23,11,0);
    quadra.putVoxel(24,11,0);



    quadra.putVoxel(10,23,0);
    quadra.putVoxel(11,23,0);
    quadra.putVoxel(12,23,0);
    quadra.putVoxel(13,23,0);
    quadra.putVoxel(14,23,0);
    quadra.putVoxel(15,23,0);
    quadra.putVoxel(16,23,0);
    quadra.putVoxel(17,23,0);
    quadra.putVoxel(18,23,0);
    quadra.putVoxel(19,23,0);
    quadra.putVoxel(20,23,0);
    quadra.putVoxel(21,23,0);
    quadra.putVoxel(22,23,0);
    quadra.putVoxel(23,23,0);
    quadra.putVoxel(24,23,0);




    quadra.setColor(0.5,0.8,0.2,0.6);

    quadra.putVoxel(17,17,1);



    quadra.setColor(0,0,0,1);

    quadra.putBox(11,12,16,18,1,4);
    quadra.putVoxel(11,18,1);
    quadra.putVoxel(11,18,2);
    quadra.cutVoxel(11,16,3);
    quadra.cutVoxel(11,17,1);
    quadra.putVoxel(12,16,2);
    quadra.putVoxel(12,18,2);

    quadra.putBox(23,24,16,18,1,4);
    quadra.putVoxel(23,18,1);
    quadra.putVoxel(23,18,2);
    quadra.cutVoxel(23,16,3);
    quadra.cutVoxel(23,17,1);
    quadra.putVoxel(22,16,2);
    quadra.putVoxel(22,18,2);



    quadra.writeOFF("Quadra.off");


    return 0;
}
