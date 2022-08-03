#include <stdio.h>

int main()
{
    int i, nunVendas, nunPrazo=0, nunVista=0, nunCard=0;
    float valor, porcentagem, totalVendas=0, totalPrazo=0, totalVista=0, totalCard=0;
    char pgto;
//    int pgto;
    
    printf ("Quantidade de vendas total?\n");
    scanf ("%d", &nunVendas);
    
    for (i=1; i<=nunVendas; i++) {
        printf ("Venda: %d \n", i);
        printf ("Total vendido: \n");
        scanf ("%f", &valor);
        printf ("Forma de pagamento ([P]razo, a [V]ista ou [C]artão):");
//        printf ("\n\tForma de pagamento (Prazo[1], à Vista[2] ou Cartão[3]):");
        //fgets(pgto, sizeof(pgto), stdin);
        ///gets(pgto);
        //scanf ("%s", &pgto);
        getchar();
        scanf ( "%s[^\n]", &pgto);
//        scanf ("%d", &pgto);
        
        
        totalVendas+=valor;
//        if (pgto==1){  // 
        if (pgto=='p'||pgto=='P'){
            nunPrazo++;
            totalPrazo+=valor;
        }
//        if(pgto==2){  
        if (pgto=='v'||pgto=='V'){
            nunVista++;
            totalVista+=valor;
        }
//        if(pgto==3){  
        if (pgto=='c'||pgto=='C'){
            nunCard++;
            totalCard+=valor;
        }
    }
    
    printf("O total vendido foi de R$ %2.f em %d vendas! \n", totalVendas, nunVendas);
    porcentagem=((float)nunPrazo/(float)nunVendas*100);
    printf("O total vendido a prazo foi de R$ %.2f em %d vendas (%.2f %%) \n", totalPrazo, nunPrazo, porcentagem);

    porcentagem=((float)nunVista/(float)nunVendas*100);
    printf("O total vendido a vista foi de R$ %.2f em %d vendas (%.2f %%) \n", totalVista, nunVista, porcentagem);

    porcentagem=((float)nunCard/(float)nunVendas*100);
    printf("O total vendido no cartao foi de R$ %.2f em %d vendas (%.2f %%) \n", totalCard, nunCard, porcentagem);

    return 0;
}