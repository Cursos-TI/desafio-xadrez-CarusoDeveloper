#include <stdio.h>
#include <string.h>

void calculoPecas(char *direcao, char *direcao2, int limite) {
  // Esse loop externo controla quantas casas serão impressos
    for (int i = 1; i <= limite; i++)
    {
        // Se for apenas uma direção
        if (direcao2 == NULL)
        {
            printf(" %s\n", direcao);
        } 
        // Se for Duas direções igual ao do Bispo
        else {
            printf(" %s %s\n", direcao, direcao2);
        }
        
    }

}

void calculoPecasCavalo(char *direcao, char *direcao2, int limite) {   
// Esse loop externo controla quantos "L" serão impressos
    for (int p = 1; p <= limite; p++) {
        
        // Se for Cima ou Baixo (L Vertical)
        if (strcmp(direcao, "Cima") == 0 || strcmp(direcao, "Baixo") == 0) {
            // Imprime: Direção1, Direção1, Direção2
            printf("%s, %s, %s\n", direcao, direcao, direcao2);
        } 
        // Se for Esquerda ou Direita (L Horizontal)
        else {
            // Imprime: Direção1, Direção1, Direção2
            printf("%s, %s, %s\n", direcao, direcao, direcao2);
        }
    }
}



int main() {

    //declaração das variáveis usadas nesse JOGO DE XADREZ!!!
    int opcoes;
    int limitejogadas;

    //Nome das Peças:
    char Torre[30] = "Torre";
    char Bispo[30] = "Bispo";
    char Rainha[30] = "Rainha";
    char Cavalo[30] = "Cavalo";
    char *SelecionadaPeca = 0;

    //Nome das posições a serem movidas: 
    char Cima[30] = "Cima";
    char Baixo[30] = "Baixo";
    char Esquerda[30] = "Esquerda";
    char Direita[30] = "Direita";
    char *direcao_selecionada = 0;
    char *direcao_selecionada2 = 0;
    

    //inicío do Game
    printf("        Seja Bem-Vindo(a) \n");
    printf("         Jogo de Xadrez \n");
    printf("\n");

    //Selecionar qual Peça deve se mover:
    printf("    Selecione qual Peça deseja mover: \n");
    printf("1. %s\n", Torre);
    printf("2. %s\n", Rainha);
    printf("3. %s\n", Bispo);
    printf("4. %s\n", Cavalo);
    scanf("%d", &opcoes);

    if (opcoes == 1)
    {
        //Selecionar a direção da peça selecionada
        printf("Selecione uma direção para mover a Torre: \n");
        printf("1. %s\n", Cima);
        printf("2. %s\n", Baixo);
        printf("3. %s\n", Esquerda);
        printf("4. %s\n", Direita);
        scanf("%d", &opcoes);

        //Quantidade casas mover
        printf("\n");
        printf("    Selecione Quantas casa deseja mover: \n");
        scanf("%d", &limitejogadas);
        
        while (limitejogadas < 1 || limitejogadas > 8)
        {
            printf("Valor inválido, Digite novamente um valor entre 1 e 8!!!");
            scanf("%d", limitejogadas);
        }
        
        //switch das direções selecionadas
        switch (opcoes)
        {
        case 1:
            direcao_selecionada = Cima; 
            break;

        case 2:
            direcao_selecionada = Baixo; 
            break;

        case 3:
            direcao_selecionada = Esquerda; 
            break;
        
        case 4:
            direcao_selecionada = Direita; 
            break;

        default:
            printf("Selecione uma Opção Válida!!!\n");
            break;
        }
        
        calculoPecas(direcao_selecionada, direcao_selecionada2, limitejogadas);

    } else if (opcoes == 2)
    {
        //Selecionar a direção da peça selecionada
        printf("Selecione uma direção para mover a Bispo: \n");
        printf("1. %s\n", Cima);
        printf("2. %s\n", Baixo);
        printf("3. %s\n", Esquerda);
        printf("4. %s\n", Direita);
        scanf("%d", &opcoes);

        //Quantidade casas mover
        printf("\n");
        printf("    Selecione Quantas casa deseja mover: \n");
        scanf("%d", &limitejogadas);
        
        while (limitejogadas < 1 || limitejogadas > 8)
        {
            printf("Valor inválido, Digite novamente um valor entre 1 e 8!!!");
            scanf("%d", limitejogadas);
        }
        
        //switch das direções selecionadas
        switch (opcoes)
        {
        case 1:
            direcao_selecionada = Cima; 
            break;

        case 2:
            direcao_selecionada = Baixo; 
            break;

        case 3:
            direcao_selecionada = Esquerda; 
            break;
        
        case 4:
            direcao_selecionada = Direita; 
            break;

        default:
            printf("Selecione uma Opção Válida!!!\n");
            break;
        }
        
        calculoPecas(direcao_selecionada, direcao_selecionada2, limitejogadas);

        
    }else if (opcoes == 3)
    {
        //Selecionar a direção da peça selecionada
        printf("Selecione uma direção para mover a Bispo: \n");
        printf("1. %s %s\n", Cima, Direita);
        printf("2. %s %s\n", Cima, Esquerda);
        printf("3. %s %s\n", Baixo, Direita);
        printf("4. %s %s\n", Baixo, Esquerda);
        scanf("%d", &opcoes);

        //Quantidade casas mover
        printf("\n");
        printf("    Selecione Quantas casa deseja mover: \n");
        scanf("%d", &limitejogadas);
        
        while (limitejogadas < 1 || limitejogadas > 8)
        {
            printf("Valor inválido, Digite novamente um valor entre 1 e 8!!!");
            scanf("%d", limitejogadas);
        }
        
        //switch das direções selecionadas
        switch (opcoes)
        {
        case 1:
            direcao_selecionada = Cima;
            direcao_selecionada2 = Direita;  
            break;

        case 2:
            direcao_selecionada = Cima; 
            direcao_selecionada2 = Esquerda;
            break;

        case 3:
            direcao_selecionada = Baixo;
            direcao_selecionada2 = Direita; 
            break;
        
        case 4:
            direcao_selecionada = Baixo;
            direcao_selecionada2 = Esquerda;
            break;

        default:
            printf("Selecione uma Opção Válida!!!\n");
            break;
        }
        
        calculoPecas(direcao_selecionada, direcao_selecionada2, limitejogadas);

      
    } else if (opcoes == 4)
    {
        //Selecionar a direção da peça selecionada
        printf("Escolha qual direção quer mover o Cavalo: \n");
        printf("1. %s, %s %s \n", Cima, Esquerda, Esquerda);
        printf("2. %s, %s %s \n", Cima, Direita, Direita);
        printf("3. %s, %s %s \n", Cima, Cima, Esquerda);
        printf("4. %s, %s %s \n", Cima, Cima, Direita);
        printf("5. %s, %s %s \n", Baixo, Esquerda, Esquerda);
        printf("6. %s, %s %s \n", Baixo, Direita, Direita);
        printf("7. %s, %s %s \n", Baixo, Baixo, Esquerda);
        printf("8. %s, %s %s \n", Baixo, Baixo, Direita);
        scanf("%d", &opcoes);
            
        printf("\n");

        //Quantidade casas mover
        printf("\n");
        printf("    Selecione Quantas casa deseja mover: \n");
        scanf("%d", &limitejogadas);
        
        while (limitejogadas < 1 || limitejogadas > 8)
        {
            printf("Valor inválido, Digite novamente um valor entre 1 e 8!!!");
            scanf("%d", limitejogadas);
        }

        //switch das direções selecionadas
        switch (opcoes)
        {
        case 1:
            direcao_selecionada = Cima;
            direcao_selecionada2 = Esquerda;
            break;
            
        case 2:
            direcao_selecionada = Cima;
            direcao_selecionada2 = Direita;
            break;

        case 3:
            direcao_selecionada = Cima;
            direcao_selecionada2 = Esquerda;
            break;
            
        case 4:
            direcao_selecionada = Cima;
            direcao_selecionada2 = Direita;
            break;

        case 5:
            direcao_selecionada = Esquerda;
            direcao_selecionada2 = Baixo;
            break;
            
        case 6:
            direcao_selecionada = Baixo;
            direcao_selecionada2 = Direita;
            break;

        case 7:
            direcao_selecionada = Baixo;
            direcao_selecionada2 = Esquerda;
            break;
            
        case 8:
            direcao_selecionada = Direita;
            direcao_selecionada2 = Baixo;
            break;

        default:
            printf("Selecione uma Opção Válida!!!\n");
        break;
        }
        calculoPecasCavalo(direcao_selecionada, direcao_selecionada2, limitejogadas);
    }
    
}