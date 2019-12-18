#include <iostream>
using namespace std;

void yerdegis(int *a, int *b){
	int c=0;
	c=*a;
	*a=*b;
	*b=c;
}
int i, j; 
void bubble(int dizi[], int x){
	int i=1, j=0, n=5, str, stn;
	str=((x-1)*n)+j;
	stn=str+n;
	for(i=1; i <=5; i++)
    	for(j=5; j>=i; j--){
    		for(int k=str+1; k<stn; k++){
   			if(dizi[k-1]>dizi[k])
			yerdegis(&dizi[k], &dizi[k-1]);
		}
	}
	
}

int main(){
	
	int n=5;
	int matris[5][5]={	{1, 7, 3, 6, 5}, 
						{1, 2, 3, 4, 6}, 
						{9, 8, 7, 6, 5}, 
						{6, 8, 3, 4, 7}, 
						{3, 2, 1, 4, 8}};
	int x=0, i, j, s=1;
	int d[25];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
		
			d[x]=matris[i][j];
			x++;
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			
		cout << matris[i][j] << " ,";
		
		}
		cout << endl;
		
	}
	
	for(int i=0; i<n*n; i++){
		cout << d[i] << ", ";
	}
	
	cout << endl;
	cout << "hangi satir siralansin?" << endl ;
	cin >> x;
	bubble(d, x);
	
	for(int i=0; i<n*n; i++){
		cout << d[i] << ", ";
	}
	
	cout << endl << endl ;
}
