#include <stdio.h>
#include <stdlib.h>

struct product
{
    int code;
    int amt;
    char name[16];
    float buy;
    float price;
};

int main()
{
    struct product cadastro[40];
    int opt;
    int i;
    int temp;
    int codetemp;
    
    back:
    system("cls");
    printf("\n--------------------------------------\n");
    printf("1-Novo produto \n2-alterar produto \n3-Listar produtos \n9-Sair \n");
    printf("--------------------------------------\n");
    scanf("%d", &opt);

    switch(opt)
    {
    case 1: //novo produto
        for(i=0; i<1; i++)
            {
                printf("\n--------------------------------------\n");
                
                fflush(stdin);
                printf("Nome:\n");
                gets(cadastro[i].name);

                printf("Codigo:\n");
                scanf("%d", &cadastro[i].code);
                    
                    fflush(stdin);
                printf("Quantidade:\n");
                scanf("%d", &cadastro[i].amt);

                printf("Preco de fabricao/compra:\n");
                scanf("%f", &cadastro[i].buy);

                printf("Preco de venda:\n");
                scanf("%f", &cadastro[i].price);
                printf("--------------------------------------\n");
                
                goto back;
            }
        break;
    
    case 2: //alterar produto
        printf("Qual codigo do produto que vc quer alterar?\n");
        scanf("%d", &codetemp);
            for(i=0; i<40; i++)
            {
                if(cadastro[i].code==codetemp)
                {
                    temp=i;
                }
            }
                printf("\n--------------------------------------\n");
                fflush(stdin);
                printf("Nome:\n");
                gets(cadastro[temp].name);

                printf("Codigo:\n");
                scanf("%d", &cadastro[temp].code);
                    
                    fflush(stdin);
                printf("Quantidade:\n");
                scanf("%d", &cadastro[temp].amt);

                printf("Preco de fabricao/compra:\n");
                scanf("%f", &cadastro[temp].buy);

                printf("Preco de venda:\n");
                scanf("%f", &cadastro[temp].price);
                printf("--------------------------------------\n");
                goto back;
        break;
    
    case 3: //listar produto
        for(i=0; i<1; i++)
            {
                printf("--------------------------------------\n");
                printf("%s:\n", cadastro[i].name);
                printf("%d:\n",cadastro[i].code);
                printf("%d:\n",cadastro[i].amt);
                printf("%f:\n",cadastro[i].buy);
                printf("%f:\n",cadastro[i].price);
                printf("--------------------------------------\n");
            }
            system("pause");
            goto back;
    break;
    
    case 9: //sair
        system("exit");
        break;

    }
}