#include<stdio.h>
#include<stdlib.h>


//Declarando o nó
typedef struct node{
    int num;
    struct node *proximo;
} no;

//Função para criar novos nós
node* criar_no(){
    no *novo = (node*)malloc(sizeof(node));
    return novo;
}

//Inserindo os dados no vetor Lista
node* inserirNoInicio(node* lista, int dado){
    node *novo_no = criar_no();
    novo_no->num = dado;

    if(lista == NULL){
        lista = novo_no;
        novo_no->proximo = NULL;
    }
    else{
        novo_no->proximo = lista;
        lista = novo_no;
    }

    return lista;
}

void imprimirLista(node* lista){
    node *aux = lista; 
    int contador = 1;

    system("cls");
    printf("\n ========== Lista ============\n\n");
    while(aux != NULL){
        printf("[ %d - %d ]", contador, aux->num);
        aux = aux->proximo;
        contador = contador+1;
    }
    printf("\n\n");
    system("pause");
}

int inserir(){
    int numero;

    system("cls");

    printf("\n ========== INSERIR NA LISTA ==========");
    printf("\n\n Digite um item da lista: ");scanf("%d",&numero);
    printf("\n inserido com sucesso!\n\n");
    system("pause");
    return numero;

}

void menu(node* lista){
    int opcao;
    int num;

    do{
        system("cls");
        printf("\n ========== MENU DA LISTA ==========");
        printf("\n\n Selecione uma opção: ");
        printf("\n 1 - Inserir dados na Lista");
        printf("\n 2 - Excluir dados da Lista");
        printf("\n 3 - Imprimir Lista");
        printf("\n 0 - Sair");
        printf("\n\n Opção: "); scanf("%d",&opcao);

        switch (opcao)
        {
            case 0:
                printf("\n Até a próxima!");
                printf("\n==================================================\n");
                system("pause");
                break;
            case 1:
                num = inserir();
                lista = inserirNoInicio(lista, num);
                break;
            case 2:
                break;
            case 3:
                imprimirLista(lista);
                break;
            default:
                printf("\n Comando inválido!");
                break;
        }
    }while(opcao!=0);

}

//Principal
int main(){
    no *lista = NULL;
    menu(lista);
}