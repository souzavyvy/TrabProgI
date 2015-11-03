#include<stdio.h>
int main()

{
    int i, j;
    int x=0;
    int y=0;
    
    printf("Informe uma altura""\n");
    scanf("%d", &x);
    
    printf("Informe uma largura""\n");
    scanf("%d", &y);
    
    printf("Ola meu nome eh Viviane e o retangulo ficou assim:""\n");
    
    for(j=0; j,x; j++)
        
    {
        for(i=0; i<y; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}