#include <stdio.h>

#define NGIORNI 20

int main(int argc, char const *argv[])
{
    int valI, var[NGIORNI], i, maxVal, minVal, temp, iMaxVal, iMinVal, c, nAz;

    scanf("%d", &valI);

    scanf("%d", &c);

    for(i=0; i<NGIORNI; i++)
        scanf("%d", &var[i]);

    maxVal = valI;
    minVal = valI;
    iMaxVal = 0;
    nAz = 0;
    for(i=0; i<NGIORNI; i++){
        temp = valI + var[i];
        if(temp < minVal){
            iMinVal = i;
            minVal = temp;
            nAz = c/minVal;
        }
        if(temp > maxVal){
            iMaxVal = i;
            maxVal = temp;
        }
    }
    if(iMaxVal == 0)
        printf("Non comprare mai \n");
    else
        printf("A: %d@%d, V: %d@%d, Guadagno: %d \n", iMinVal, minVal, iMaxVal, maxVal, (maxVal-minVal)*nAz);

    return 0;
}

