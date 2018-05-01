#include <stdio.h>
#include <time.h>
#define quant 36000
#define faces 6
#define dados 2

int main(){
	int res_soma[quant] = {0};
	int val[dados][quant] = {0};
	int j, i, x=0;
	
	int res_pos[faces*dados] = {0};
	int cont[faces*dados] = {0};
	
	srand(time(NULL));
	
	for (i=0;i<dados;i++){
		for (j=0;j<quant;j++){
			val[i][j] = (1+rand()%faces);
		}
	}
	_sleep(1500);
	srand(time(NULL));
	
	for (i=0;i<dados;i++){
		for (j=0;j<quant;j++){
			res_soma[j] = (res_soma[j]+(val[i][j]));
		}
	}
	
	for (j=0;j<quant;j++){
		x=res_soma[j];
		res_pos[x] = cont[x]++;
	}
	
	for (i=dados;i<=(faces*dados);i++){
		printf("Resultado %d = %d + %2.2f%%\n", i, cont[i], (float)cont[i]/quant*100);
	}
	getch();
	return 0;
}