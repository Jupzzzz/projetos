#include<stdio.h>
#include<stdlib.h>

int i,j,q,elemento;
int matriz[2][5];


//  função limpar buffer
void limparbuffer(){
    int c;
    while ((c=getchar() != '\n' && c!= EOF);
}

 
//  structs
struct aluno
{
    char nome[100];
    int matricula;
    float nota;
    float media;
};


void menuQuestao()
{
    elemento=1;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            matriz[i][j]=elemento;
        elemento++;
        }
    }
    
    printf("--- MENU QUESTOES ---\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("|%3i",matriz[i][j]);
        }
        printf("|\n");
    }
    
    printf("--- SELECIONE A QUESTAO ---\n");
}

void questao01(){
    struct aluno alunos[5];
    int n;
    printf("Quantos alunos cadastrar? (max 5)");
    scanf("%i",n);

    if (n<5) n=5;
    limparbuffer();
    
    for ( i = 0; i < n; i++)
    {
    printf("Informe o nome do aluno: \n");
    scanf("%s",alunos[i].nome);
    printf("Informe a matricula : \n");
    scanf("%d",&alunos[i].matricula);

    for ( i = 0; i < 3; i++)
    {
        printf("Informe a nota numero %i :\n",i+1);
        scanf("%f",&alunos[i].nota);
    }
    
    alunos[i].media = (alunos[i].nota[0]+alunos[i].nota[1]+alunos[i].nota[2])/3.0;
    limparbuffer();
    }
    
    printf("--- RESULTADO ---");
    for ( i = 0; i < n; i++)
    {
        printf("%-20s | Mat: %i | Media:%.2f | %s\n",alunos[i].nome,alunos[i].matricula,alunos[i].media,alunos[i].media>=7 ? "APROVADO":"REPROVADO");
    } 
    
};
void questao02(){
    
};
void questao03(){
    
};
void questao04(){
    
};
void questao05(){
    
};
void questao06(){

};
void questao07(){
    
};
void questao08(){
    
};
void questao09(){
    
};
void questao10(){
    
};
int main(){
do{
    menuQuestao();
    scanf("%i",&q);
    switch (q)
    {
    case 1:
        questao01();
        break;
    
    case 2:
        questao02();
        break;

    case 3:
        questao03();
        break;
    
    case 4:
        questao04();
        break;

    case 5:
        questao05();
        break;
    
    case 6:
        questao06();
        break;

    case 7:
        questao07();
        break;
    
    case 8:
        questao08();
        break;

    case 9:
        questao09();
        break;
    
    case 10:
        questao10();
        break;

    }
    printf("deseja executar outra questao ou zero p/ sair\n");
    scanf("%i",&q);
} while (q!=0);
    return 0;
}
