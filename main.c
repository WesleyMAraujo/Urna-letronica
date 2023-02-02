#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include "interfaces.c"
#include "sons.c"

int apurar_votos();

int main()
{
    // VARIAVEIS
    char senha[10];
    int menu1 = 0, numero_eleitores = 0, votos = 0, representante[5], certo = 0, confirmar = 0, VotoRepresentante = 0, VotoPresidente = 0;
    int BrancoRepresentante = 0, NuloRepresentante = 0, BrancoPresidente = 0, NuloPresidente = 0;
    int David = 0, Vinicius = 0, Pollyana = 0, Karla = 0, Dyego = 0, Hadija = 0, Lavinia = 0;

    do // INICIO
    {
        // MENU PRINCIPAL
        printf("E: %d", numero_eleitores);
        menu_inicial();
        scanf("%i", &menu1);
        som1();
        switch (menu1)
        {
        case 1: // DETERMINAR ELEITORES
            while (certo != 1)
            {
                certo = 0;
                menu_autenticacao();
                scanf("%s", &senha);
                som1();
                if (strcmp(senha, "magno") == 0)
                {
                    certo = 1;
                }
                else
                {
                    codigo_incorreto();
                    som1();
                    certo = 0;
                }
            }
            certo = 0;
            while (certo != 1)
            {
                determinar_numero_eleitores();
                scanf("%i", &numero_eleitores);
                som1();
                if (numero_eleitores < 31)
                {
                    neleitores_insuficiente(numero_eleitores);
                    som1();
                    numero_eleitores = 0;
                    certo = 0;
                }
                else
                {
                    neleitores_cadastrados(numero_eleitores);
                    som1();
                    certo = 1;
                }
            }
            break;
        case 2:
            // PAINEL DE VOTAÇÃO
            printf("%d", numero_eleitores);
            if (numero_eleitores == 0)
            {
                eleitores_ncadastrados();
                som1();
            }
            else
            {
                do
                {
                    certo = 0;
                    while (certo != 1)
                    {
                        menu_autenticacao();
                        scanf("%s", &senha);
                        som1();
                        if (strcmp(senha, "magno") == 0)
                        {
                            certo = 1;
                        }
                        else
                        {
                            codigo_incorreto();
                            som1();
                            certo = 0;
                        }
                    }
                    numero_eleitores--;
                    votos++;
                    confirmar = 0;
                    while (confirmar != 1)
                    {
                        system("clear||cls");
                        tela_representante();
                        printf("Voto: ");
                        scanf("%i", &VotoRepresentante);
                        // parte de confirmação de VotoRepresentante
                        if (VotoRepresentante == 00000)
                        {
                            printf("Branco // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                BrancoRepresentante++;

                                break;
                            case 2:
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                        else if (VotoRepresentante == 12345)
                        {
                            printf("David // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                David++;
                                break;
                            case 2:
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                        else if (VotoRepresentante == 67890)
                        {
                            printf("Vinicius // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                Vinicius++;
                                break;
                            case 2:
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                        else if (VotoRepresentante == 98765)
                        {
                            printf("Pollyana // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                Pollyana++;
                                break;
                            case 2:
                                Pollyana = Pollyana;
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                        else if (VotoRepresentante == 43210)
                        {
                            printf("Karla // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                Karla++;
                                break;
                            case 2:
                                Karla = Karla;
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                        else if (VotoRepresentante == 48444)
                        {
                            printf("Dyego // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                Dyego++;
                                break;
                            case 2:
                                Dyego = Dyego;
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                        else
                        {
                            printf("Nulo // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                NuloRepresentante++;
                                break;
                            case 2:
                                Dyego = Dyego;
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                    }
                    confirmar = 0;
                    while (confirmar != 1)
                    {
                        system("clear||cls");
                        tela_presidente_gramio();

                        printf("Voto: ");
                        scanf("%i", &VotoPresidente);
                        if (VotoPresidente == 00)
                        {
                            printf("Branco // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                BrancoPresidente++;

                                break;
                            case 2:
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                        else if (VotoPresidente == 40)
                        {
                            printf("Hadija // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                Hadija++;
                                break;
                            case 2:
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                        else if (VotoPresidente == 80)
                        {
                            printf("Lavinia // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                Lavinia++;
                                break;
                            case 2:
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                        else
                        {
                            printf("NuloRepresentante // CONFIRMAR? [1]SIM [2]NÃO: ");
                            scanf("%i", &confirmar);
                            som1();
                            switch (confirmar)
                            {
                            case 1:
                                NuloPresidente++;
                                break;
                            case 2:
                                break;
                            default:
                                printf("Comando invalido");
                            }
                        }
                    }
                    sistema_FIM();
                    som2();
                    system("pause");
                } while (numero_eleitores > 0);
            }
            break;
        case 3:
            // apurar_votos(David, Vinicius, Pollyana, Karla, Dyego, Hadija, Lavinia);

            break;
        case 4:
            // ENCERRAMENTO DO SISTEMA
            sistema_encerrado();
            som1();
            break;
        default:
            // COMANDO INVALIDO
            quando_comando_invalido();
            som1();
        }
    } while (menu1 != 4);
    return 0;
}

/*int apurar_votos(int David, int Vinicius, int Pollyana, int Karla, int Dyego, int Hadija, int Lavinia)
{
    // APURAÇÃO DE VOTOS
    system("clear||cls");
    printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
    printf("                                                    Apuração dos votos\n");
    printf("Total de votos_____________________:%i\n\n", votos);
    printf("Representantes.\n");
    printf("David Else_________________________:%i\n", David);
    printf("Vinicius While_____________________:%i\n", Vinicius);
    printf("Pollyana Return____________________:%i\n", Pollyana);
    printf("Karla Float________________________:%i\n", Karla);
    printf("Dyego Main_________________________:%i\n", Dyego);
    printf("Brancos para representante_________:%i\n", BrancoRepresentante);
    printf("Nulos para representante___________:%i\n\n", NuloRepresentante);
    printf("Presidencia\n");
    printf("Hadija Printf______________________:%i\n", Hadija);
    printf("Lavinia Scanf______________________:%i\n", Lavinia);
    printf("Brancos para representante_________:%i\n", BrancoPresidente);
    printf("Nulos para representante___________:%i\n\n", NuloPresidente);
    system("pause");
}*/