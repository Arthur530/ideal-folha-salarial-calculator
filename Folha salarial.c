#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()


{	
	int salliqud, desctot,porcendesc, irpf, porceirpf, calculosal, salbruto, faltas, transportedesc, dsfaltas, inss, fgts, fgtsper, resp=1;
	
	char vtrans;
	
	setlocale(LC_ALL, "Portuguese");
	system(" color 1f");
	
	
	while(resp == 1){
	
	
	printf("Folha de Pagamento");
	
	printf("\n\n\n");
	
	printf("Salario Bruto: ");
	
	scanf("%d", &salbruto);
	
	
    printf("\n\n");
    
   
    printf("Quantidade de Faltas em dias: ");
    scanf("%d", &faltas);
    
    if(faltas == 0)
    {
    	
    	dsfaltas = 0;
	}
    
	if(faltas>=1)
	
	{
		
		dsfaltas =(salbruto/30)*faltas;
	}
	
	printf("\n\n");
	
	

	printf("Utiliza vale transporte(S/N): ");
		
		scanf("%1s", &vtrans);
		
		if(vtrans == 's')
		
		
		{
			
		transportedesc = salbruto *0.06;	
		    if(transportedesc>200)
	
            transportedesc = 200;
		        	
		}
		
		if(vtrans == 'n')
		
		
		{
			
			transportedesc= 0;
		}
	
	
	system("cls");
	
	
	printf("Folha de Pagamento\n\n");
	
	printf("Salario:.............................. %d",salbruto);
	
	
	printf("\n");
	
	calculosal = salbruto - dsfaltas;
	
	printf("Valor descontado das faltas:.......... %d",dsfaltas);
	
	printf("\n");
	
	printf("Valor Descontado do Vale Transporte.. %d",transportedesc);
	
	printf("\n");
	
	
	if(salbruto <= 400.00)
	{
	
	inss = salbruto * 0.08;
	
	porcendesc = 8;
 
     printf("Valor Descontado do INSS: %d%%........... %d",porcendesc,inss);
 
 
}
	if(salbruto >= 400.01 && calculosal <=800.00){
	
	
	inss = salbruto * 0.10;

    porcendesc = 10;	

     printf("Valor Descontado do INSS: %d%%.......... %d",porcendesc,inss);

}
	
	if(salbruto >= 800.01 && calculosal <= 1350.00){
	
	
	inss= salbruto * 0.11;
	
	porcendesc = 11;
	
	 printf("Valor Descontado do INSS: %d %%......... %d",porcendesc,inss);
	
}
	
	if(salbruto>=1350.01){
	
	
	inss = 146;
	

		
 printf("Valor Descontado do INSS: 146 reais.. %d",inss);	
	
}
 
	
	printf("\n");
	
	
	fgts = salbruto * 0.08;
	

	
	printf("Valor do FGTS: ...................... %d", fgts);
	
	printf("\n");
	
	
	if(salbruto <=900.00){
	
	
	
	irpf = 0;
	
	porceirpf = 0;
	
    printf("Valor descontado do IRPF: %d %%.......... %d",porceirpf,irpf);
	
	printf("\n");
	
	
	 }
	
	if(salbruto >=900.01 && calculosal <=2000.00){
	
	
	irpf = salbruto*0.15;
	
	porceirpf= 15;
	
	printf("Valor descontado do IRPF: %d %%......... %d",porceirpf,irpf);
	
	printf("\n");
	
     }
	
	if(salbruto >= 2000.01){
	
	
	irpf = (salbruto * 0.27)-390;
	 
	porceirpf= 27; 
    
	printf("Valor descontado do IRPF: %d %%......... %d",porceirpf,irpf );
	
	printf("\n");
	
	 
}
	
	desctot = irpf + fgts + inss + dsfaltas + transportedesc;
	
	
	printf("\n\n\nTotal dos Descontos:................. %d", desctot);
	
	printf("\n");
	
	salliqud = salbruto - desctot;
	
	printf("\n\n");
	
	printf("Salario Liquido:.................... %d", salliqud);
	
	printf("\n\n\n\n");
	

	printf("Deseja Continuar?");
	printf("\n\nDigite [1] para Sim ou [2] para Não: ");
	scanf("%d", &resp);
	
	if(resp != 1 && resp != 2){
	
	
	while(resp != 1 && resp != 2){
	
	printf("\n\n Erro! Opção Incorreta, Digite uma opção entre as opções apresentadas\n\n");
	
	
	printf("Deseja Continuar?");
	printf("\n\nDigite [1] para Sim ou [2] para Não: ");
	scanf("%d", &resp);
	
}
}
	
	
	
	system("cls");
	getchar();
	
}

if(resp == 2){

	
	return 0;


}

	
	
}
