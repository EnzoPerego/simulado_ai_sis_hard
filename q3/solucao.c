// Seu código da funcao1_solucao
int funcao1_solucao(int edi, int esi){
    int eax = edi;
    int ecx = 0;
    while(eax >= esi){
        eax /= esi;
        ecx += 1;
    }
    eax = ecx;
    return eax;
} 
