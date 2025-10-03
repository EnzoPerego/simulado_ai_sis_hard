int func2(int edi, int esi){
    edi = edi * 250;
    edi -= esi;
    int eax = -6 + edi * 4;
    if (eax == 1914){
        eax = 1;
    }
    return eax;

}