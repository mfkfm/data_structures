#include <stdio.h>
#include<stdlib.h>

struct n{
	int data;
	struct n * sol;
	struct n * sag;
};

typedef struct n node;

node * ekle (node *agac, int x){
	if(agac==NULL){
		node *root= (node *)malloc(sizeof(node));
		root->sol=NULL;
		root->sag=NULL;
		root->data=x;
		return root;
	}
	if(agac->data < x){
		agac->sag=ekle(agac->sag, x);
		return agac;
	}
	agac->sol=ekle(agac->sol, x);
	return agac;
}

int lc=0, rc=0;

void dolassay(node *agac){
	if(agac==NULL)
	return;
	dolassay(agac->sol);
	if(agac->sol!=NULL)
	lc++;
	dolassay(agac->sag);
	if(agac->sag!=NULL)
	rc++;
}

int main(){
	node * agac=NULL;
	agac=ekle(agac, 12);
	agac=ekle(agac, 200);
	agac=ekle(agac, 190);
	agac=ekle(agac, 213);
	agac=ekle(agac, 215);
	agac=ekle(agac, 216);
	agac=ekle(agac, 56);
	agac=ekle(agac, 24);
	agac=ekle(agac, 18);
	agac=ekle(agac, 27);
	agac=ekle(agac, 28);
	agac=ekle(agac, 17);
	agac=ekle(agac, 19);
	
	dolassay(agac);
	printf("sol= %d sag= %d" , lc, rc);
	

}
