#include <bits/stdc++.h>
using namespace std;



int main(){
	int maximo, cantidad,i,n;
	
	cin >> cantidad;
	
	cantidad = cantidad - 1;
	int lista1[cantidad];
	int lista2[cantidad];
	int total1 = 0;
	int total2 = 0;
	int resta;
		
	for (int i=0;i<=cantidad;i++){
		lista1[i] = i+1;
		total1 = total1 + lista1[i];
		
	}
	
	for (int i=0;i<cantidad;i++){
		cin >> lista2[i];
		total2 = total2 + lista2[i];
	}
	
	resta = total1 - total2;
	cout << resta;
	return 0;
}
