#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct ficha_client
    {
        char name[40];
        int age;
        int cpf;
        int password;
        int repassword;
    };
    struct ficha_client cadastro;
    
    printf("Escreva o nome do cliente\n");
    gets(cadastro.name);
    
    printf("Escreva a idade do cliente\n");
    scanf("%d",&cadastro.age);
    
    printf("Escreva o CPF sem caracteres especiais\n");
    scanf("%d",&cadastro.cpf);
    
    typedwrong:
    printf("Escreva a senha APENAS NUMEROS\n");
    scanf("%d",&cadastro.password);
    printf("Escreva novamente a senha APENAS NUMEROS\n");
    scanf("%d",&cadastro.repassword);
        if ((cadastro.repassword) != (cadastro.password))
        {
            printf("Voce fez algo errado, tente novamente\n");
            goto typedwrong;
        }
                else
                    printf("Conta criada com sucesso!\n");
                
    system("pause");
    return 0;
}