#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main(){
	
int dizi[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int matris[5][5]={};
int k=0;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			
			matris[i][j]=dizi[k];
			if(i<=j)
			k++;
			else
			matris[i][j]={0};
		}
	}
	for(int i=0;i<5;i++){
		cout << endl;
		for(int j=0;j<5;j++){
			cout << matris[i][j] << " ,";
		}
	}
	cout << endl << "max icin sutun secin: " << endl;
	int n;
	cin >> n;
	cout << "max alinacak sutun: " << n << endl;
	n=n-1;
	for(int i=0; i<5; i++){		
		cout << matris[i][n] << endl;
	}
	cout << endl;
	int max=matris[0][n];
	if(matris[1][n]>max) max=matris[1][n];
	if(matris[2][n]>max) max=matris[2][n];
	if(matris[3][n]>max) max=matris[3][n];
	if(matris[4][n]>max) max=matris[4][n];
	cout << "sutunun max degeri: " << max;
}
