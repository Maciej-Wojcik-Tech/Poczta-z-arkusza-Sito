#include <bits/stdc++.h>
using namespace std;
//**************************************************************
//nazwa: sito
//parametry: tab - prechowuje wartości true 
//wartość zwracana: brak
//funkcja do pierwiastka z n sprawdza czy wartość w tabliy wynosi true,
// jeśli tak, to wykreśla wszystkie wielokrotności tej liczby
//autor: 5930592039
//******************************************************
void sito(bool tab[])
{
for(int i=2;i*i<101;i++)
{
	if(tab[i]==true)
	{
		for(int j=i+i;j<101;j=j+i)
		{
			tab[j]=false;
		}
	}
}
}
main()
{
	bool tab[101];
	for(int i=0;i<101;i++)
	{
		tab[i]=true;
	}
	
	
cout<<"liczby pierwsze są następujące: "<<endl;
sito(tab);
for(int i=2;i<=100;i++)
{
	if(tab[i]==true)
	cout<<i<<", ";
}
}