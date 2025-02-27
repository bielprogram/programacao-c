#include <stdio.h>


    int main(){
        printf("desafio cartas super trunfo carta1!:\n ");
        printf("vamos iniciar, agora voce vai inserir os dados da carta1:\n");
    
        
    
        
        int ptturisticos01, ptturisticos02;
        char estado01[50],estado02[50];
        char codigo01[50],codigo02[50];
        char cidade01[50],cidade02[50];
        int populacao01,populacao02;
        float areaemkm01,areaemkm02;
        float PIB01,PIB02;
        float densidade01,densidade02;
        float PIBpecapta1,PIBpercapta02;
        float quociente;
    
    
        //cadastro carta 01 inserxoes de dados
        
        printf("Digite o estado da carta01 (sigla, ex:SP):\n ");
        scanf("%s",estado01);
        
        printf("digite o codigo:\n ");
        scanf("%s",codigo01);
        
        printf("digite a cidade:\n ");
        scanf("%s",cidade01);
        
        printf("digite a populacao:\n ");
        scanf("%d",&populacao01);
        
        printf("digite a area:\n ");
        scanf("%f",&areaemkm01);
    
        printf("digite o pib sem ponto e sem virgula:\n ");
        scanf("%f",&PIB01);
        
        printf("digite o turismo:\n ");
        scanf("%d",&ptturisticos01);
    
    
        //visulizacao dos dados inseridos para a carta 01
         
        printf("qual o estado: %s \n", estado01);
    
        printf("qual o codigo: %s \n", codigo01);
    
        printf("qual a cidade: %s \n", cidade01);
    
        printf("qual a populacao: %d \n", populacao01);
    
        printf("qual a area: %f \n", areaemkm01);
    
        printf("qual o PIB: %f \n", PIB01);
    
        printf("qual o ptturisticos: %d \n", ptturisticos01);
    
        quociente = populacao01/areaemkm01;
    
        printf("densidade: %.2f\n", quociente);
    
        quociente = PIB01/populacao01;
    
        printf("imprimir PIB percapita: %.2f \n", quociente);
    
    
    
        printf("agora vamos inserir os dados da carta2!: ");
    
    
    
        printf("Digite o estado (sigla, ex: SP): ");
        scanf("%s",estado02);
        
        printf("digite o codigo:\n ");
        scanf("%s",codigo02);
        
        printf("digite a cidade:\n ");
        scanf("%s",cidade02);
        
        printf("digite a populacao:\n ");
        scanf("%d",&populacao02);
        
        printf("digite a area:\n ");
        scanf("%f",&areaemkm02);
    
        printf("digite o pib sem ponto e sem virgula:\n ");
        scanf("%f",&PIB02);
        
        printf("digite o turismo:\n ");
        scanf("%d",&ptturisticos02);
    
    
        //visulizacao dos dados inseridos para a carta 02
         
        printf("qual o estado: %s \n", estado02);
        printf("qual o codigo: %s \n", codigo02);
        printf("qual a cidade: %s \n", cidade02);
        printf("qual a populacao: %d \n", populacao02);
        printf("qual a area: %f \n", areaemkm02);
        printf("qual o PIB: %f \n", PIB02);
        printf("qual o ptturisticos: %d \n", ptturisticos02);
        quociente = populacao02/areaemkm02;
        printf("densidade: %.2f\n", quociente);
        quociente = PIB02/populacao02;
        printf("imprimir PIB percapita: %.2f \n",quociente);
    
        return 0;
    
    
        
    
            
    
    
    }