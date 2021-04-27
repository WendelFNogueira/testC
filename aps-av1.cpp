/*
Nome: Wendel Felipe Nascimento Nogueira
Matrícula: 2020101189
Curso: Análise e Desenvolvimento de Sistemas
Disciplina: Estrutura de Dados
Turma: 162
Professor: Manuel Martins Filho
*/
#include<stdio.h>
#include<stdlib.h>

//Limite do vetor
int const tamMax = 10;

//Vetores
int tamanho=0, lista[tamMax], fila[tamMax], pilha[tamMax];

int const elemento = 0;

bool taCheia(){
    if(tamanho==tamMax-1) {	//verifica se a lista esta cheia
        return true;
	}
    else {
        return false;
    }

}

bool taVazia(){
    if(tamanho==0) {//verifica se a lista esta vazia
        return true;
	}
    else {
        return false;
    }
}

int movePraTras(int valor) {
    int i;

    for( i=tamanho; i>0 && valor<lista[i-1]; i--) {// faz com que os elementos deem um passo para tras
        lista[i]=lista[i-1];
	}

    return i;
}

void movePraFrente() {
    int i, j;
        for(j=i;j<tamanho-1;j++) {
            lista[j]=lista[j+1];//faz os elementos darem um passo a frente
        }
}

void inserir(int estrutura){
  int numero, i;
  
  switch (estrutura){
    case 1:
        system("cls");

        printf("\n ========== INSERIR NA LISTA ==========");
        printf("\n\n Digite um item da lista: "); scanf("%d",&numero);

        if (!(taCheia())) {
            
            i = movePraTras(numero);

            lista[i]=numero;//elemento é inserido na posição que o loop parou
            tamanho++;
            printf("\n inserido com sucesso!\n\n");
            system("pause");
        }
        else {
            printf("\n\tErro: Lista cheia!\n\n");
            system("pause");
        }
        break;
    case 2:
        system("cls");

        printf("\n ========== INSERIR NA FILA ==========");
        printf("\n\n Digite um numero: ");scanf("%d",&numero);
        printf("\n inserido com sucesso!\n\n");
        system("pause");
        break;
    case 3:
        system("cls");

        printf("\n ========== PUSH ==========");
        printf("\n\n Digite um numero: ");scanf("%d",&numero);
        printf("\n inserido com sucesso!\n\n");
        system("pause");
        break;
    default:
        system("cls");
        printf("\n\n operacao invalida");
        break;
  }

}

void remover(int estrutura){
    int numero, i, cont=0;
    
    switch (estrutura){
        case 1:
            system("cls");

            printf("\n ========== EXCLUIR NA LISTA ==========");
            printf("\n\n Digite um item da lista: ");scanf("%d",&numero);
            if (!(taVazia())) {
                for(i=0; i<tamanho && numero>=lista[i]; i++) {
                    if(numero==lista[i]) {
                        movePraFrente();
                        tamanho--;
                        i--;//faz o i voltar para o caso de haver numero repetidos
                        cont++;
                    }
                }

                if(cont!=0)
                    printf("\nElemento removido com sucesso!");
                else
                    printf("\n\tERRO: valor nao esta na lista");
                system("pause");
            }
            else {
                printf("\n\tErro: Lista vazia!\n\n");
                system("pause");
            }
            break;
        case 2:
            system("cls");

            printf("\n ========== EXCLUIR NA FILA ==========");
            printf("\n\n Digite um numero: ");scanf("%d",&numero);
            printf("\n excluído com sucesso!\n\n");
            system("pause");
            break;
        case 3:
            system("cls");

            printf("\n ========== POP ==========");
            printf("\n\n Digite um numero: ");scanf("%d",&numero);
            printf("\n excluído com sucesso!\n\n");
            system("pause");
            break;
        default:
            system("cls");
            printf("\n\n operacao invalida");
            break;
    }
}


// Espaço para a função de ordenação dos Vetores


void imprimir(int estrutura){
    int i;
    switch (estrutura){
        case 1:
            system("cls");

            printf("\n ========== IMPRIMIR LISTA ==========\n\n");
                for (i=0; i<=tamMax-1; i++) {
                    printf("[ %d ", lista[i], "]\n\n");
                }
            system("pause");
            break;
        case 2:
            system("cls");

            printf("\n ========== IMPRIMIR FILA ==========\n\n");
            system("pause");
            break;
        case 3:
            system("cls");

            printf("\n ========== IMPRIMIR PILHA ==========\n\n");
            system("pause");
            break;
        default:
            system("cls");
            printf("\n\n operacao invalida");
            break;
    }
}

void menuLista(int opcaoEscolhida){
    int opcao;

    do{
        system("cls");
        printf("\n ========== MENU DA LISTA ==========");
        printf("\n\n Selecione uma opcao: ");
        printf("\n 1 - Inserir dados na Lista");
        printf("\n 2 - Excluir dados da Lista");
        printf("\n 3 - Imprimir Lista");
        printf("\n 0 - Sair");
        printf("\n\n Opcao: "); scanf("%d",&opcao);

        switch (opcao)
        {
            case 0:
                printf("\n Saindo...");
                printf("\n==================================================\n");
                system("pause");
                break;
            case 1:
                inserir(opcaoEscolhida);
                imprimir(opcaoEscolhida);
                break;
            case 2:
                remover(opcaoEscolhida);
                imprimir(opcaoEscolhida);
                break;
            case 3:
                imprimir(opcaoEscolhida);
                break;
            default:
                printf("\n Comando inválido!");
                break;
        }
    }while(opcao!=0);

}

void menuFila(int opcaoEscolhida){
    int opcao;

    do{
        system("cls");
        printf("\n ========== MENU DA FILA ==========");
        printf("\n\n Selecione uma opcao: ");
        printf("\n 1 - Inserir(no final)");
        printf("\n 2 - Excluir(no comeco)");
        printf("\n 3 - Imprimir Fila");
        printf("\n 0 - Sair");
        printf("\n\n Opcao: "); scanf("%d",&opcao);

        switch (opcao)
        {
            case 0:
                printf("\n Saindo...");
                printf("\n==================================================\n");
                system("pause");
                break;
            case 1:
                inserir(opcaoEscolhida);
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                printf("\n Comando inválido!");
                break;
        }
    }while(opcao!=0);

}

void menuPilha(int opcaoEscolhida){
    int opcao;

    do{
        system("cls");
        printf("\n ========== MENU DA PILHA ==========");
        printf("\n\n Selecione uma opcao: ");
        printf("\n 1 - Push");
        printf("\n 2 - Pop");
        printf("\n 3 - Imprimir Pilha");
        printf("\n 0 - Sair");
        printf("\n\n Opcao: "); scanf("%d",&opcao);

        switch (opcao)
        {
            case 0:
                printf("\n Saindo...");
                printf("\n==================================================\n");
                system("pause");
                break;
            case 1:
                inserir(opcaoEscolhida);
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                printf("\n Comando inválido!");
                break;
        }
    }while(opcao!=0);

}

void menuPrincipal(){
    int menu_principal;

    do{
        system("cls");
        printf("\n ========== Bem Vindo a Aps de Estrutura de Dados ==========");
        printf("\n-----------------------------------------by Wendel Nogueira");
        printf("\n\nO que vamos montar hoje?");
        printf("\n\n Selecione uma opcao: ");
        printf("\n 1 - Lista");
        printf("\n 2 - Fila");
        printf("\n 3 - Pilha");
        printf("\n 0 - Sair");
        printf("\n\n Opcao: "); scanf("%d",&menu_principal);

        switch (menu_principal)
        {
            case 0:
                printf("\n Até a próxima!");
                printf("\n==================================================\n");
                system("pause");
                break;
            case 1:
                menuLista(menu_principal);
                break;
            case 2:
                menuFila(menu_principal);
                break;
            case 3:
                menuPilha(menu_principal);
                break;
            default:
                printf("\n Comando inválido!");
                break;
        }
    }while(menu_principal!=0);

}



int main(int argc, char const *argv[])
{
    menuPrincipal();
  
  return 0;
}
