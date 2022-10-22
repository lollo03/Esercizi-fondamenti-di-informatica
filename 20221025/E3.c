int nCifre(int num){
    int nCifre, i, cCifre[10], ind, ris;
    
    for(i=0; i<10; i++)
        cCifre[i] = 0;

    for(nCifre=0, i=1; num/i!=0; i*=10, nCifre++);

    ris = 0;
    for(i=nCifre-1; i>=0; i--){
        ind = num/pow(10, i);
        num = num - (ind*pow(10, i));
        cCifre[ind]++;
        if(cCifre[ind] == 2)
            ris++;
    }
    return ris;
}
