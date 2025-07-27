#include <iostream>
#include <cstring>

using namespace std;
int maximo(int a, int b, int c, int g){
	int mayor = a;
	
	if (b>mayor)mayor =b;
	if (c>mayor)mayor=c;
	if (g>mayor)mayor=g;

	
	return mayor;
}

int secuenciaMaximaConsecutiva(string letras) {
    int maxSecuencia = 1; // Al menos una letra en secuencia
    int currentSecuencia = 1; // Empezamos con una letra

    for (int i = 1; i < letras.length(); i++) {
        if (letras[i] == letras[i-1]) {
            // Si la letra actual es igual a la anterior, incrementamos la secuencia
            currentSecuencia++;
        } else {
            // Si no, reiniciamos la secuencia actual
            currentSecuencia = 1;
        }
        // Actualizamos el máximo
        if (currentSecuencia > maxSecuencia) {
            maxSecuencia = currentSecuencia;
        }
    }

    return maxSecuencia;
}

int main(){
	int contadorA=0;
	int contadorB=0;
	int contadorC=0;
	int contadorG=0;
	int cantidad = 1000000;
	char letras[cantidad];
	cin>>letras;
	int longitud = strlen(letras);
	
	for(int i=0;i<longitud;i++){
		if(letras[i]=='A'){
			contadorA++;
		}
		if(letras[i]=='C'){
			contadorB++;
		}
		if(letras[i]=='G'){
			contadorC++;
		}
		if(letras[i]=='T'){
			contadorG++;
		}
	}
	int maxSecuencia = secuenciaMaximaConsecutiva(letras);
	int s;
	s=maximo(contadorA,contadorB,contadorC,contadorG);
    bool hayEmpate = 
        (contadorA == contadorB && contadorA > 0) || 
        (contadorA == contadorC && contadorA > 0) || 
        (contadorA == contadorG && contadorA > 0) || 
        (contadorB == contadorC && contadorB > 0) || 
        (contadorB == contadorG && contadorB > 0) || 
        (contadorC == contadorG && contadorC > 0);

    
    if (hayEmpate) {
        s = 1;
    }
	cout << maxSecuencia;;
	return 0;
}