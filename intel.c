#include<stdio.h>
#include<stdlib.h>

void main()
{
	int N[20],W[20];
	int i=0, l=0;
	
	while(i<20)
	{
		scanf("%d",&N[i]);
		i++;
	}
	
	while(i<20)
	{
		scanf("%d",&W[i]);
		i++;
	}
    void NumeroMenor()
    {
    	if(N[20]<W[20])
        {
            printf("Numeros diferentes e menores: %d\n",N[20]<W[20]);
			scanf("%d",&N[l]);	
		}
    	
	}
	
	void NumeroMenor02()
	  	{
    		if(N[20]<W[20])
        	{
            printf("Numeros diferentes e menores: %d\n",N[20]<W[20] );
			scanf("%d",&W[l]);	
			}
		
		}
    	
    void Results()
    {
    	printf("De acordo  com o usuario o vetor vai ser de:%d\n",N[20]);
        printf("De acordo  com o usuario o vetor vai ser de:%d\n",W[20]);
	}
	
	
	int main()
	{
		
		int i;
		printf("Digite o numero a ser verificado pelo software\n");
		while(i<21)
		{
			i++;
			scanf("%d",&N[l]);
			NumeroMenor();
			NumeroMenor02();
		}
	}
	Results();
	system("pause");
	return 0;

}







