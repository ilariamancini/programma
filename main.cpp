#include <iostream>

using namespace std;
int divisorie(int e,int divisori[100]);
int confronta(int z, int divisori[100],int n);
int main()
{
    int n;
    int divisori[100];
	int e=3;
	int z=27;
	int controllo=0;
	while(e<z)
	{
	    cout<<"\ni divisori di "<<e<<" sono\n";
	   n=divisorie(e,divisori);
	   controllo=confronta(z,divisori,n);
	   if(controllo==0)
	   {
	       e=e+2;
	   }
	   else break;
	}

cout<<"la e e'"<<e;

	return 0;
}
int divisorie(int e,int divisori[100])
{
    int i,h;
	i=0;
	h=e;

  while(h>2)
	{

        if (e%h==0)
        {
            divisori[i]=h;

            cout<<divisori[i]<<"   ";
            i++;
            h=h-2;
        }
        else {
            h=h-2;
        }

	}
	return i;
}
int confronta(int z, int divisori[100],int n)
{
    int i=0;
    while(i<n)
    {
        if(z%divisori[i]==0)
        {
            return 0;
        }
        else {
            i++;


    }
    }
return 1;
}
