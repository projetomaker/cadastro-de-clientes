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
    
    printf("type the name of the client\n");
    gets(cadastro.name);
    
    printf("type the age of the client\n");
    scanf("%d",&cadastro.age);
    
    printf("type the cpf of the client\n");
    scanf("%d",&cadastro.cpf);
    
    typedwrong:
    printf("type the password\n");
    scanf("%d",&cadastro.password);
    printf("type the password again\n");
    scanf("%d",&cadastro.repassword);
        if ((cadastro.repassword) != (cadastro.password))
        {
            printf("you typed wrong, type again\n");
            goto typedwrong;
        }
                else
                    printf("your account is now created!");
    return 0;
}