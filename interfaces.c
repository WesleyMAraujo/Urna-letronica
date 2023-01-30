#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

void menu_inicial()
{
    system("clear||cls");
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf("1 - Definir quantidade de votantes\n2 - Iniciar votação\n3 - Contabilizar votos\n4 - Sair\nOpção:");
}
void UFERSA()
{
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
}

void menu_autenticacao()
{
    system("clear||cls");
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n");
    printf("\t\t\t\t\t\tSistema de Autenticação\n\n");
    printf("Chave de acesso:");
}

void codigo_incorreto()
{
    system("clear||cls");
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n");
    printf("\t\t\t\t\t\tSistema de Autenticação\n\n");
    printf("Codigo incorreto\n\n");
    system("pause");
}

void determinar_numero_eleitores()
{
    system("clear||cls");
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf("Numero de Eleitores:");
}

void neleitores_insuficiente()
{
    system("clear||cls");
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf("Numero de eleitores insuficiente;\n\n");
    system("pause");
}

void neleitores_cadastrados(int numero_eleitores)
{
    system("clear||cls");
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf("%i Eleitores cadastrados\n\n", numero_eleitores);
    system("pause");
}

void eleitores_ncadastrados()
{
    system("clear||cls");
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf("Eleitores não cadastrados\n\n");
    system("pause");
}

void tela_representante()
{
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf(" ______________________________________________________________________________________________________________________\n");
    printf(" |                VOTO PARA REPRESENTANTE                   ||                    JUSTIÇA ESTUDANTIL                  |\n");
    printf(" |                                                          ||                                                        |\n");
    printf(" |                                                          ||                      1    2    3                       |\n");
    printf(" |                                                          ||                      4    5    6                       |\n");
    printf(" |                                                          ||                      7    8    9                       |\n");
    printf(" |                   _   _   _   _   _                      ||                           0                            |\n");
    printf(" |                                                          ||                                                        |\n");
    printf(" |                                                          ||             BRANCO     CORRIGIR     CONFIRMAR          |\n");
    printf(" |__________________________________________________________||________________________________________________________|\n");
}

void tela_presidente_gramio()
{
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf(" ______________________________________________________________________________________________________________________\n");
    printf(" |             VOTO PARA PRESIDENTE DO GREMIO               ||                    JUSTIÇA ESTUDANTIL                  |\n");
    printf(" |                                                          ||                                                        |\n");
    printf(" |                                                          ||                      1    2    3                       |\n");
    printf(" |                                                          ||                      4    5    6                       |\n");
    printf(" |                                                          ||                      7    8    9                       |\n");
    printf(" |                         _   _                            ||                           0                            |\n");
    printf(" |                                                          ||                                                        |\n");
    printf(" |                                                          ||             BRANCO     CORRIGIR     CONFIRMAR          |\n");
    printf(" |__________________________________________________________||________________________________________________________|\n");
}

void sistema_FIM()
{
    //system("clear||cls");
    printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf("                                                             FIM\n");
}

void sistema_encerrado()
{
    system("clear||cls");
    printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf("\n\nSistema encerrado;\n\n");
}
void quando_comando_invalido()
{
    system("clear||cls");
    printf("\t\t\t\t\tUNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf("\nComando Invalido\n\n");
    system("pause");
}