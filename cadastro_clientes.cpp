#include <stdio.h>
#include <stdlib.h>

struct ficha_client
{
    char name[20];
    char login[20];
    char cpf[12];   
    int age;
    int password;
    int repassword;
};

int main()
{   
    struct ficha_client cadastro[20]; 
    int opc;
    int i;
    
    backopc:
    printf("opcao 1 - cadastrar clientes \nopcao 2 - ver clientes\nopcao 3 - Sair\n");
    scanf("%d",&opc);
    system("cls");
    switch(opc)
    {
        case 1:
            for(i=0; i<1; i++)
            {    
                fflush(stdin);
                printf("\nEscreva o nome do cliente\n");
                gets(cadastro[i].name);
                    
                printf("Escreva a idade do cliente\n");
                scanf("%d",&cadastro[i].age);
                fflush(stdin);
                    
                printf("Escreva o CPF(SEM caracteres especiais)\n");
                gets(cadastro[i].cpf);
                fflush(stdin);
                    
                printf("Escreva o login\n");
                gets(cadastro[i].login);
                    
                typedwrong:
                printf("Escreva a senha(APENAS NUMEROS)\n");
                scanf("%d",&cadastro[i].password);
                
                fflush(stdin);
                printf("Escreva novamente a senha(APENAS NUMEROS)\n");
                scanf("%d",&cadastro[i].repassword);
                    if((cadastro[i].repassword) != (cadastro[i].password))
                    {
                        printf("Voce fez algo errado, tente novamente\n");
                        goto typedwrong;
                    }
                            else
                            {
                                printf("\nConta criada com sucesso!\n\n");
                                goto backopc;
                            }
            }
        break;
        
        case 2:            
            for(i=0; i<1; i++)
            {
                printf("\nClientes: %s\n",cadastro[i].name);
                fflush(stdin);
                printf("Idade: %d\n",cadastro[i].age);
                fflush(stdin);
                printf("Cpf: %s\n",cadastro[i].cpf);
                fflush(stdin);                
            }            
        break;
    
        case 3:
            system("exit");
        break;
    }
    
    return 0;
}