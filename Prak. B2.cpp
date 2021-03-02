#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

void jumlah(int a[],int b[],int c,int e)
{
	int k,l;
	if(c<=e)
	l=e;
	else
		l=c;
	if(l==c)
	{
		k=e+1;
		for( ;k<=l;k++)
		{
			b[k]=0;
		}
	}
	else if(l==e)
	{
		k=c+1;
		for( ;k<=l;k++)
		{
			a[k]=0;
		}
	}
	int z;
	for(z=0;z<=l;z++)
	{
		a[z]=a[z]+b[z];
	}
		for(z=0;z<=l;z++)
		if(z!=l)
		{
			cout<<a[z]<<"x^"<<z<<"+";
		}
		else
		{
			cout<<a[z]<<"x^"<<z;
		}
		cout<<endl;
}
void kurang(int a[],int b[],int e,int c)
{
	int k,l;
	if(c<=e)
	l=e;
	else
		l=c;
	if(l==c)
	{
		k=e+1;
		for( ;k<=l;k++)
		{
			b[k]=0;
		}
	}
	else if(l==e)
	{
		k=c+1;
		for( ;k<=l;k++)
		{
			a[k]=0;
		}
	}
	int z;
	for(z=0;z<=l;z++)
	{
		a[z]=a[z]-b[z];
	}
	for(z=0;z<=l;z++)
		if(z!=l)
		{
			cout<<a[z]<<"x^"<<z<<"+";
		}
		else
		{
			cout<<a[z]<<"x^"<<z;
		}
		cout<<endl;
}
void kali(int a[],int b[],int c,int e)
{
	int f,g,h[21],i=0,j[21];
	for(f=0;f<=c;f++)
		for(g=0;g<=e;g++)
		{
			h[i]=b[g]*a[f];
			j[i]=f+g;
			i++;
		}
	for(f=0;f<i;f++)
	{
		if(f!=i-1)
		{
			cout<<h[f]<<"x^"<<j[f]<<"+";
		}
		else
		{
			cout<<h[f]<<"x^"<<j[f];
		}
	}
	cout<<endl;
}
void turunan(int a[],int b[],int c,int e)
{
	int f;
	for(f=0;f<=c;f++)
	{
		a[f]=a[f+1]*(f+1);
	}
	cout<<"turunan polinom pertama adalah: "<<" ";
	for(f=0;f<c;f++)
	{
		if(f!=c-1)
		{
			cout<<a[f]<<"x^"<<f<<"+";
		}
		else
		{
			cout<<a[f]<<"x^"<<f;
		}
	}
		for(f=0;f<=e;f++)
	{
		b[f]=b[f+1]*(f+1);
	}
	cout<<endl<<endl<<"turunan polinom kedua adalah: "<<" ";
	for(f=0;f<e;f++)
	{
		if(f!=e-1)
		{
			cout<<b[f]<<"x^"<<f<<"+";
		}
		else
		{
			cout<<b[f]<<"x^"<<f;
		}
	}
	cout<<endl;
}
void eror()
{
	cout<<"Kode salah, silahkan coba kembali!"<<endl;
}
int main()
{
	char hasil;
	do
{
	int a[21],b[21],c,d,e,f;
	cout<<"Masukkan Derajat Tertinggi Polinom Pertama: ";
	cin>>c;
	cout<<"Masukkan Koofisien x Mulai Dari x Pangkat 0"<<endl;
	for(d=0;d<=c;d++)
	{
		cout<<"\nKoofisien x Pangkat "<<d<<" : ";
		cin>>a[d];
		cout<<endl;
	}
	cout<<"Masukkan Polinom Kedua"<<endl;
	cout<<"\nMasukkan Derajat Tertinggi Polinom Kedua: ";
	cin>>e;
	cout<<"\nMasukkan Koofisien x Mulai dari x Pangkat 0"<<endl;
	for(d=0;d<=e;d++)
	{
		cout<<"\nKoofisien x Pangkat "<<d<<" : ";
		cin>>b[d];
		cout<<endl;
	}
	cout<<"1. PENJUMLAHAN	\n2.PENGURANGAN \n3.PERKALIAN	\n4. TURUNAN"<<endl;
	cout<<"Masukkan Kode Operasi : ";
	cin>>f;
	switch(f)
	{
	case 1:
		{
			jumlah(a,b,e,c);
			break;
		}
	case 2:
		{
			kurang(a,b,e,c);
			break;
		}
	case 3:
		{
			kali(a,b,c,e);
			break;
		}
	case 4:
		{
			turunan(a,b,c,e);
			break;
		}
	default:
		{
			eror();
			break;
		}
	}
		printf("\n Coba Lagi ? [y/t] ");
		scanf("%s",&hasil);
	}
	while ((hasil=='Y' || hasil=='y'));
	printf("SELESAI!");
}
