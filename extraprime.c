int getPrimaCifra(int n){
	while (n>9){
		n=n/10;
	}
	return n;
}

int nCif(int n){
	int ct=0;
	while (n!=0){
		n=n/10;
		ct=ct+1;
	}
	return ct;
}

int nrFaraPrima(int n){
	n=n%((int)pow(10, nCif(n)-1));
	return n;
}

int shl10(int n){
	int p=getPrimaCifra(n);
	int y=nrFaraPrima(n);
	return y*10+p;
}


int eExtraprim(int x){
	int cpX=x;
	int eExtra=1;
	do{
		x=shl10(x);
		if (!ePrim(x))
			//return 0;
			eExtra=0;
	}while (x!=cpX);
	//return 1;
	return eExtra;
}
