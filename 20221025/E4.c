void minmaxstr(char str[], char *pmin, char *pmax){
    int i, temp;
    char min, max;
    min = str[0];
    max = str[0];

    for(i=0; str[i] != '\0'; i++){
        if(str[i] < 'a' || str[i] > 'z'){
            temp = str[i] - 'A';
            str[i] = 'a' + temp;
        }


        if(str[i] > max)
            max = str[i];
        if(str[i] < min)
            min = str[i];
    }
    *pmin = min;
    *pmax = max;
}