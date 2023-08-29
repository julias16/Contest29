#include<stdio.h>
int main()
{
	int a, b=2002, i;
	for(; ;)
    {
        scanf("%d", &a);
        if(a==b)
            printf("Acesso Permitido\n");
        else
            printf("Senha Invalida\n");
    }
	return 0;
}
