#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int var1 = 0, senha1, senha2, senha3, senha4, senha5;
    printf("Descubra a senha do cofre.\n");
    while (var1 == 0)
    {
        printf("Digite a primeira senha\n");
        scanf("%d", &senha1);
        if (senha1 == 02)
        {
            printf("Digite a segunda senha\n");
            scanf("%d", &senha2);
            if (senha2 == 00)
            {
                printf("Digite a terceira senha\n");
                scanf("%d", &senha3);
                if (senha3 == 77)
                {
                    printf("Digite a quarta senha\n");
                    scanf("%d", &senha4);
                    if (senha4 == 34)
                    {
                        printf("Digite a quinta senha\n");
                        scanf("%d", &senha5);
                        if (senha5 == 15)
                        {
                            printf("Cofre aberto!!");
                            var1 = 1;
                        }
                        else
                            var1 = 0;
                    }
                    else
                        var1 = 0;
                }
                else
                    var1 = 0;
            }
            else
                var1 = 0;
        }
    }
}