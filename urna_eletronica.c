/******************************************************************************
// Descricão  : Urna Eletronica em linguagem C
// Professor  : Haylo
// Aluno     : Ryan 
*******************************************************************************/

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int opcao_menu = 0 ;
	int opcao_vereador, opcao_prefeito;
	int vRyan = 0, vDiego = 0, vCarvalho = 0, vVotoNulo = 0, vInvalido = 0;
	int pMuca = 0, pCasimiro = 0, pVotoNulo = 0, pVotoInvalido = 0;	


int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	system("cls");
	printf("-----------MENU----------- \n");
	printf("1 - VOTO \n");
	printf("2 - APURAR OS VOTOS \n");
	printf("3 - Sair \n");
	printf("-------------------------- \n");
	printf("--> ");
	scanf ("%i", &opcao_menu);
	fflush(stdin);
	
	/*exibe um menu de opções*/
	switch (opcao_menu) 
	{
		case 1:
			/*exibe outro menu de opções >vereador<*/
			system("cls");
			printf ("-------------VOTAÇÃO------------- \n");
			printf ("133 - Para votar no Vereador Ryan \n");
			printf ("424 - Para votar na Vereadora Diego \n");
			printf ("153 - Para votar no Vereador Carvalho \n");	
		   	printf ("404 - Para Votar Nulo \n");
		   	printf ("---------------------------------- \n");
			printf ("--> ");
		   	scanf ("%i", &opcao_vereador);
		   	fflush(stdin);
		   	switch (opcao_vereador)
		   	{
				case 133:
		   			printf (" Voto confirmado para Vereador Ryan \n");
		   			vRyan = vRyan + 1; 
		   			break;
		   		case 424:
		   			printf (" Voto confirmado para vereadora Diego \n");
		   			vDiego = vDiego + 1;
		   			break;
				case 153:
					printf (" Voto confirmado para vereador Carvalho \n");
					vCarvalho = vCarvalho + 1; 
					break;
				case 404:
					printf (" Voto confirmado para Nulo \n");
					vVotoNulo = vVotoNulo + 1; 
					break;
				default:
					printf (" Voto Inválido");
					vInvalido = vInvalido = 1;
					break;
			}
			printf (" Pressione Enter para continuar... /n");
		    system("pause");
		    
		   	/* area para votar em prefeitos*/
			system ("cls");
			printf ("-------------VOTAÇÃO-PREFEITO-------------- \n");
			printf ("77 - Para votar no Prefeito Muca \n");
			printf ("13 - Para votar no Prefeito Casimiro \n");
			printf ("10 - Para votar Nulo \n");
			printf ("--> ");
			scanf ("%i", &opcao_prefeito);
			fflush(stdin);
			
			switch (opcao_prefeito) 
			{
				case 77:
					printf (" Voto confirmado para Prefeito Muca \n");
					pMuca = pMuca + 1;
					break;
				case 13:
					printf (" Voto confirmado para Prefeito Casimiro \n");
					pCasimiro = pCasimiro + 1;
					break;
				case 10: 
					printf (" Voto confirmado para Nulo \n");
					pVotoNulo = pVotoNulo + 1;
					break;
					
				default:
					printf (" Voto Invalido \n");
					pVotoInvalido = pVotoInvalido + 1;
					break;		
			}		
			printf (" Pressione Enter para continuar... \n");
			system ("pause");
			main ();
		break;	
			
		case 2:
			system("cls");
			printf ("------- APURAÇÃO DE VOTOS ------- \n");
			
			printf ("----------- VEREADORES ---------- \n");
			printf (" Vereador 133: %d votos.\n", vRyan);
			printf (" Vereadora 424: %d votos. \n", vDiego);
			printf (" Vereador 153: %d votos. \n", vCarvalho);
			printf (" Vereador 404: %d votos. \n", vVotoNulo);
			printf (" Votos Inválidos: %d votos. \n", vInvalido);
			
			printf ("------------ PREFEITOS ------------ \n");
			printf (" Prefeito 77: %d votos. \n", pMuca);
			printf (" Prefeito 13: %d votos. \n", pCasimiro);
			printf (" Prefeito 10: %d votos. \n", pVotoNulo);
			printf (" Votos Inválidos: %d votos. \n", pVotoInvalido);
			printf ("---------------------------------- \n");
			
			printf (" Pressione Enter para voltar ao Menu...");
			system ("pause");
			main ();			
	    	break;
		case 3:
			printf (" Finalizando Programa..."); 
			return 0;

			break;
		
		default:
			printf (" Não entendi, tente novamente...");
			system ("pause");
			main ();
			break;		
		}
		
}
