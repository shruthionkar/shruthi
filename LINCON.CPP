#include<iostream.h>
#include<math.h>
main()
{
int x[10],h1[10],y1[10],y2[10],h2[10],y3[10],y4[10],y5[10],y6[10],N2,L,M,k,N,n,P,N1,N3,h3[10],N4,N5,y7[10],N6,N7,N8,N9,y8[10],y9[10];
cout<<"enter the length of x[n]\n";
cin>>L;
cout<<"enter the value of x[n]\n";
for(n=0;n<L;n++)
cin>>x[n];
cout<<"enter the length of h1[n]\n";
cin>>M;
cout<<"enter the value of h1[n]\n";
for(n=0;n<M;n++)
cin>>h1[n];
cout<<"enter the length of h2[n]\n";
cin>>P;
cout<<"enter the value of h2[n]\n";
for(n=0;n<P;n++)
cin>>h2[n];
N=L+M-1;
for(n=L;n<N;n++)
{
x[n]=0;
}
for(n=M;n<N;n++)
{
h1[n]=0;
}
for(n=P;n<N;n++)
{
h2[n]=0;
}
for(n=0;n<N;n++)
{
y1[n]=0;
for(k=0;k<=n;k++)
{
y1[n]=y1[n]+x[k]*h1[n-k];
}
}
for(n=0;n<N;n++)
cout<<"y1["<<n<<"]="<<y1[n]<<"\n";
for(n=0;n<N;n++)
{
y2[n]=0;
for(k=0;k<=n;k++)
{
y2[n]=y2[n]+h1[k]*x[n-k];
}
}
for(n=0;n<N;n++)
cout<<"y2["<<n<<"]="<<y2[n]<<"\n";
if(y1[n]==y2[n])
cout<<"commutative property is verified\n";
N1=M+P-1;
for(n=0;n<N1;n++)
{
y3[n]=0;
for(k=0;k<=n;k++)
{
y3[n]=y3[n]+h1[k]*h2[n-k];
}
}
N2=N1+L-1;
for(n=N1;n<N2;n++)
{
y3[n]=0;
}
for(n=L;n<N2;n++)
{
x[n]=0;
}
for(n=0;n<N2;n++)
{
y4[n]=0;
for(k=0;k<=n;k++)
{
y4[n]=y4[n]+x[k]*y3[n-k];
}
}
for(n=0;n<N2;n++)
cout<<"y4["<<n<<"]="<<y4[n]<<"\n";
for(n=0;n<N;n++)
{
y5[n]=0;
for(k=0;k<=n;k++)
{
y5[n]=y5[n]+x[k]*h1[n-k];
}
}
N3=N+P-1;
for(n=N;n<N3;n++)
{
y5[n]=0;
}
for(n=P;n<N3;n++)
{
h2[n]=0;
}
for(n=0;n<N3;n++)
{
y6[n]=0;
for(k=0;k<=n;k++)
{
y6[n]=y6[n]+y5[k]*h2[n-k];
}
}
for(n=0;n<N3;n++)
cout<<"y6["<<n<<"]="<<y6[n]<<"\n";
if(y4[n]==y6[n])
cout<<"associative property is verified\n";
N6=M+P;
for(n=0;n<N6;n++)
{
h3[n]=h1[n]+h2[n];
}
N7=L+N6-1;
for(n=N6;n<N7;n++)
{
h3[n]=0;
}
for(n=0;n<N6;n++)
{
y7[n]=0;
for(k=0;k<=n;k++)
{
y7[n]=y7[n]+x[k]*h3[n-k];
}
}
for(n=0;n<N6;n++)
cout<<"y7["<<n<<"]="<<y7[n]<<"\n";
N8=L+P-1;
for(n=0;n<N8;n++)
{
y8[n]=0;
for(k=0;k<=n;k++)
{
y8[n]=y8[n]+x[k]*h2[n-k];
}
}
for(n=0;n<N8;n++)
{
y9[n]=y1[n]+y8[n];
cout<<"y9["<<n<<"]="<<y9[n]<<"\n";
}
if(y7[n]==y9[n])
{
cout<<"distributive property is verified\n";
}
return(0);
}


