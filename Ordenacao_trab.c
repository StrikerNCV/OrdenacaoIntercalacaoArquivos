#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Endereco Endereco;

struct _Endereco
{
	char logradouro[72];
	char bairro[72];
	char cidade[72];
	char uf[72];
	char sigla[2];
	char cep[8];
	char lixo[2];
};

int compara(const void *e1, const void *e2)
{
	return strncmp(((Endereco*)e1)->cep, ((Endereco*)e2)->cep, 8);
}

int main(int argc, char**argv)
{
	FILE *f, *saida;
	Endereco *e;
	long posicao, qtd, metade, parte1, parte2, parte3, parte4, parte5, parte6, parte7, parte8, parte9, parte10, parte11, parte12, parte13, parte14, parte15, parte16;
	 

	f = fopen("cep.dat","r");
	fseek(f, 0, SEEK_END);
	posicao = ftell(f);
	qtd = posicao/sizeof(Endereco);
    parte1 = qtd/16;
    e = (Endereco*) malloc(metade*sizeof(Endereco));
	rewind(f);
	if(fread(e, sizeof(Endereco), parte1, f) == parte1)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p1.dat","w");
	fwrite(e, sizeof(Endereco), parte1, saida);
	fclose(saida);
    printf("Escrito = OK\n");
	free(e);
    
    qtd = qtd - parte1;
    parte2 = qtd/15;
    e = (Endereco*) malloc((parte2)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),parte2,f) == parte2)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p2.dat","w");
	fwrite(e, sizeof(Endereco), parte2, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte2;
    parte3 = qtd/14;
    e = (Endereco*) malloc((parte3)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte3, f) == parte3)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p3.dat","w");
	fwrite(e, sizeof(Endereco), parte3, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte3;
    parte4 = qtd/13;
    e = (Endereco*) malloc((parte4)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco), parte4, f) == parte4)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p4.dat","w");
	fwrite(e, sizeof(Endereco), parte4, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte4;
    parte5 = qtd/12;
    e = (Endereco*) malloc((parte5)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte5, f) == parte5)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p5.dat","w");
	fwrite(e, sizeof(Endereco), parte5, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte5;
    parte6 = qtd/11;
    e = (Endereco*) malloc((parte6)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte6, f) == parte6)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p6.dat","w");
	fwrite(e, sizeof(Endereco), parte6, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte6;
    parte7 = qtd/10;
    e = (Endereco*) malloc((parte7)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte7, f) == parte7)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p7.dat","w");
	fwrite(e,sizeof(Endereco), parte7, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte7;
    parte8 = qtd/9;
    e = (Endereco*) malloc((parte8)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),parte8,f) == parte8)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p8.dat","w");
	fwrite(e, sizeof(Endereco), parte8, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte8;
    parte9 = qtd/8;
    e = (Endereco*) malloc((parte9)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte9, f) == parte9)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p9.dat","w");
	fwrite(e, sizeof(Endereco), parte9, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte9;
    parte10 = qtd/7;
    e = (Endereco*) malloc((parte10)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte10, f) == parte10)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p10.dat","w");
	fwrite(e, sizeof(Endereco), parte10, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte10;
    parte11 = qtd/6;
    e = (Endereco*) malloc((parte11)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte11, f) == parte11)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p11.dat","w");
	fwrite(e, sizeof(Endereco), parte11, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte11;
    parte12 = qtd/5;
    e = (Endereco*) malloc((parte12)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte12, f) == parte12)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p12.dat","w");
	fwrite(e, sizeof(Endereco), parte12, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte12;
    parte13 = qtd/4;
    e = (Endereco*) malloc((parte13)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte13, f) == parte13)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p13.dat","w");
	fwrite(e, sizeof(Endereco), parte13, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte13;
    parte14 = qtd/3;
    e = (Endereco*) malloc((parte14)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte14, f) == parte14)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p14.dat","w");
	fwrite(e, sizeof(Endereco), parte14, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte14;
    parte15 = qtd/2;
    e = (Endereco*) malloc((parte15)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte15, f) == parte15)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p15.dat","w");
	fwrite(e, sizeof(Endereco), parte15, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-parte15;
    parte16 = qtd;
    e = (Endereco*) malloc((parte16)*sizeof(Endereco));
	if(fread(e, sizeof(Endereco), parte16,f) == parte16)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_p16.dat","w");
	fwrite(e, sizeof(Endereco), parte16, saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);
	fclose(f);
}