#include <stdio.h>
int main()
{
    int quantidade_produto_001 = 0;
    int quantidade_produto_002 = 0;
    int quantidade_produto_003 = 0;
    int quantidade_produto_004 = 0;
    int quantidade_produto_005 = 0;
    int quantidade_produto_006 = 0;
    int quantidade;
    int codigo;
    float total = 0;

    printf("Produto                   Código  Custo"
           "\n-------------------------------------------"
           "\nCola PL600              001     R$ 75,00"
           "\nCavilha pct 100         002     R$ 3,35"
           "\nPuxador Perfil mt       003     R$ 170,00"
           "\nMDF Branco TX 270x270   004     R$ 345,00"
           "\nTapa furo pct 100       005     R$ 35,00"
           "\nFita de Borda branco    006     R$ 53,00\n");

    while (true)
    {
        printf("Digite o codigo do produto (ou 0 para encerrar): ");
        scanf("%d", &codigo);
        if (codigo == 0)
            break;
        if (codigo > 006 || codigo < 001)
        {
            printf("O codigo não consta no sistema\n");
            continue;
        }

        printf("Quantidade do Produto: ");
        scanf("%d", &quantidade);
        if (codigo == 001)
            quantidade_produto_001 += quantidade;
        else if (codigo == 002)
            quantidade_produto_002 += quantidade;
        else if (codigo == 003)
            quantidade_produto_003 += quantidade;
        else if (codigo == 004)
            quantidade_produto_004 += quantidade;
        else if (codigo == 005)
            quantidade_produto_005 += quantidade;
        else
            quantidade_produto_006 += quantidade;
        }
        printf("\nfechamento da compra"
        		"\nCodigo - Quantidade - Custo - Custo Unidade - Custo Total");
        if (quantidade_produto_001 > 0)
       	{
       		printf("\n001\t-\t%d\t- R$ 75,00\t-, quantidade_produto_001");
       		printf("\tR$ % 2f", quantidade_produto_001 * 75);
       		total += quantidade_produto_001*75;
		}
		
		if (quantidade_produto_002 > 0)
       	{
       		printf("\n002\t-\t%d\t- R$ 3,35\t-, quantidade_produto_002");
       		printf("\tR$ % 2f", quantidade_produto_002 * 3.35);
       		total += quantidade_produto_002 * 3.35;
		}
		
		if (quantidade_produto_003 > 0)
       	{
       		printf("\n003\t-\t%d\t- R$ 170,00\t-, quantidade_produto_003");
       		printf("\tR$ % 2f", quantidade_produto_003 * 170);
       		total += quantidade_produto_003 * 170;
		}
		
		if (quantidade_produto_004 > 0)
       	{
       		printf("\n004\t-\t%d\t- R$	345,00\t-, quantidade_produto_004");
       		printf("\tR$ % 2f", quantidade_produto_004 * 345);
       		total += quantidade_produto_004 * 345;
		}
		
		if (quantidade_produto_005 > 0)
       	{
       		printf("\n005\t-\t%d\t- R$ 35,00\t-, quantidade_produto_005");
       		printf("\tR$ % 2f", quantidade_produto_005 * 35);
       		total += quantidade_produto_005 * 35;
		}
		
		if (quantidade_produto_006 > 0)
       	{
       		printf("\n006\t-\t%d\t- R$ 53,00\t-, quantidade_produto_006");
       		printf("\tR$ % 2f", quantidade_produto_006 * 53);
       		total += quantidade_produto_006 * 53;
		}
		
		printf("\nTotal da Compra: R$ %.2f", total);
		
		return 0;
		 }
    
