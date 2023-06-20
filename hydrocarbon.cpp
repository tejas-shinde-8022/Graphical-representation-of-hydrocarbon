
#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void alkane(int c,int x,int y,int r,int d)
{
int gd=DETECT, gm;
//initwindow(800,1200);
    initgraph(&gd,&gm,(char*)"");

    int i;

for(i=1;i<=c;i++)
{

    if(i==1)
    {

        circle(x,y,r);
        readimagefile("carbon.jpg",x-r,y-r,x+r,y+r);
         circle(x-d,y,r);
         readimagefile("hydrogen.jpg",(x-d)-r,y-r,(x-d)+r,y+r);
         bar(x-r,y+2,(x-d)+r,y-2);
          circle(x+d,y,r);
          readimagefile("carbon.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
          bar(x+r,y+2,(x+d)-r,y-2);
          circle(x,y+d,r);
          readimagefile("hydrogen.jpg",x-r,(y+d)-r,x+r,(y+d)+r);
           bar(x+2,(y+d)-r,x-2,y+r);
            circle(x,y-d,r);
            readimagefile("hydrogen.jpg",x-r,(y-d)-r,x+r,(y-d)+r);
            bar(x+2,y-r,x-2,(y-d)+r);
            
            if(c==1)
            {
             readimagefile("hydrogen.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
            }

          x=x+d;
    }
    else
    {
        circle(x+d,y,r);
        readimagefile("carbon.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
        bar(x+r,y+2,(x+d)-r,y-2);
        circle(x,y+d,r);
         readimagefile("hydrogen.jpg",x-r,(y+d)-r,x+r,(y+d)+r);
        bar(x+2,(y+d)-r,x-2,y+r);
        circle(x,y-d,r);
        readimagefile("hydrogen.jpg",x-r,(y-d)-r,x+r,(y-d)+r);
         bar(x+2,y-r,x-2,(y-d)+r);
        
        if(i==c)
        {
         readimagefile("hydrogen.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
        }
        x=x+d;
    }
}
}

void alkene(int c,int x,int y,int r,int d)
{
int gd=DETECT, gm;
initwindow(800,1200);
    initgraph(&gd,&gm,(char*)"");

    int i;

for(i=1;i<=c;i++)
{

    if(i==1)
    {
        circle(x,y,r);
        readimagefile("carbon.jpg",x-r,y-r,x+r,y+r);
         circle(x-d,y,r);
          readimagefile("hydrogen.jpg",(x-d)-r,y-r,(x-d)+r,y+r);
            bar(x-r,y+2,(x-d)+r,y-2);
          circle(x+d,y,r);
          readimagefile("carbon.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
          bar(x+r,y+4,(x+d)-r,y+1);
             bar(x+r,y-4,(x+d)-r,y-2);
           circle(x,y-d,r);
           readimagefile("hydrogen.jpg",x-r,(y-d)-r,x+r,(y-d)+r);
           bar(x+2,y-r,x-2,(y-d)+r);
                       
        
          x=x+d;
    }
    else
    {
      if(c==2)
      {
       circle(x+d,y,r);
       readimagefile("carbon.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
       bar(x+r,y+2,(x+d)-r,y-2);
       circle(x,y-d,r);
       readimagefile("hydrogen.jpg",x-r,(y-d)-r,x+r,(y-d)+r);
       bar(x+2,y-r,x-2,(y-d)+r);
        
        if(i==c)
        {
         readimagefile("hydrogen.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
        }
      }
      else
      {
        if (i==2)
        {
         circle(x+d,y,r);
         readimagefile("carbon.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
          bar(x+r,y+2,(x+d)-r,y-2);
         circle(x,y-d,r);
         readimagefile("hydrogen.jpg",x-r,(y-d)-r,x+r,(y-d)+r);
           bar(x+2,y-r,x-2,(y-d)+r);
        
        if(i==c)
        {
         readimagefile("hydrogen.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
        }
         x=x+d;
        }
        else
        {
         circle(x+d,y,r);
         readimagefile("carbon.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
           bar(x+r,y+2,(x+d)-r,y-2);
         circle(x,y-d,r);
         readimagefile("hydrogen.jpg",x-r,(y-d)-r,x+r,(y-d)+r);
          bar(x+2,y-r,x-2,(y-d)+r);
         circle(x,y+d,r);
          readimagefile("hydrogen.jpg",x-r,(y+d)-r,x+r,(y+d)+r);
         bar(x+2,(y+d)-r,x-2,y+r);
         if(i==c)
        {
         readimagefile("hydrogen.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
        }
         x=x+d;
        }
        
      }
    }
}
}

void alkyne(int c,int x,int y,int r,int d)
{
int gd=DETECT, gm;
initwindow(800,1200);
    initgraph(&gd,&gm,(char*)"");

    int i;

for(i=1;i<=c;i++)
{

    if(i==1)
    {
        circle(x,y,r);
        readimagefile("carbon.jpg",x-r,y-r,x+r,y+r);
         circle(x-d,y,r);
          readimagefile("hydrogen.jpg",(x-d)-r,y-r,(x-d)+r,y+r);
            bar(x-r,y+2,(x-d)+r,y-2);
          circle(x+d,y,r);
          readimagefile("carbon.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
          bar(x+r,y+2,(x+d)-r,y-2);
             bar(x+r,y-8,(x+d)-r,y-5);
              bar(x+r,y+8,(x+d)-r,y+4);
             x=x+d;
    }
    else
    {
      if(c==2)
      {
       circle(x+d,y,r);
       readimagefile("carbon.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
         bar(x+r,y+2,(x+d)-r,y-2);
       //cout<<"\ndhwaj-1\n";
       if (i==c)
       {
        //cout<<"\ndhwaj1\n";
        readimagefile("hydrogen.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
       }
       
      }
      else
      {
        if (i==2)
        {
         circle(x+d,y,r);
         readimagefile("carbon.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
         bar(x+r,y+2,(x+d)-r,y-2);
        if (i==c)
        {
        readimagefile("hydrogen.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
        }
         x=x+d;
        }
        else
        {
         circle(x+d,y,r);
         readimagefile("carbon.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
         bar(x+r,y+2,(x+d)-r,y-2);
         circle(x,y-d,r);
         readimagefile("hydrogen.jpg",x-r,(y-d)-r,x+r,(y-d)+r);
        bar(x+2,y-r,x-2,(y-d)+r);
         circle(x,y+d,r);
          readimagefile("hydrogen.jpg",x-r,(y+d)-r,x+r,(y+d)+r);
         bar(x+2,(y+d)-r,x-2,y+r);
        if (i==c)
        {
        readimagefile("hydrogen.jpg",(x+d)-r,y-r,(x+d)+r,y+r);
        }
         x=x+d;
        }
        
      }
    }
}
}
int main()
{
string a;
string h=("hH");
int c,p,q;
while(1)
{
cout<<"\n\t\t General formula of Alkane is 'CnH2n+2' \n\t\t\t Where n is n>=1\n ";    
cout<<"\n\t\t General formula of Alkene is 'CnH2n' \n\t\t\t Where n is n>=1\n ";
cout<<"\n\t\t General formula of Alkyne is 'CnH2n-2' \n\t\t\t Where n is n>=1\n ";
cout<<"\n\t\t Enter the formula \n";
cin>>a;

string s1="ch4";
string s2="CH4";
p=s1.compare(a);
q=s2.compare(a);

if(p==0||q==0)
{
    int ca=1;
     int x=80,y=240,r=15,d=50;
  alkane(ca,x,y,r,d);
}
else
{
int strlen = a.length();

if (strlen<=6) // f o r that c12h1234 or c234h12
{
    //cout<<"\n flag 0";
char A[6]={a[0],a[1],a[2],a[3],a[4],a[5]};

if (int(A[0]==67||int(A[0])==99)) // first character is c or not i.e ex.g2h6
{
  // cout<<"\n flag 1";
 if (48<=int(A[5])<=57) // to check last character is between 0 to 9 or not 
 {
   // cout<<"\n flag 2";
    if ((int(A[1])>=49 && int(A[1])<=57)||int(A[1])==72||int(A[1])==104) // for check 2nd character is between 0 to 9 or not
    {
      //  cout<<"\n flag 3";
        if (48<=int(A[2])&&int(A[2])<=57||int(A[2])==72||int(A[2])==104)  // for check 3rd character is between 0 to 9 or not OR H,h or not
        {
         //   cout<<"\n flag 4";
          if (48<=int(A[3])&&int(A[3])<=57||int(A[3])==72||int(A[3])==104||int(A[3])==0) // for check 4th character is between 0 to 9 or not OR H,h or not
          {  
            //cout<<"\n flag 5";
            //cout<<"\n"<<int(A[4])<<"\n";
            if ((int(A[4])==0)||(48<=int(A[4])&&int(A[4])<=57)) // for check 5th character is between 0 to 9 or not
            {
           // cout<<"\n flag 6";

           
            
  if(a[1]==h[0]||a[1]==h[1]) //  f o r CH4
  {  
     
   
  c=1;
  //cout<<"\n"<<c<<"\n";
  }
  else
  {
  char b[2]={a[1],a[2]};

//cout<<"flag t";
  c= stoi(b);
 // cout<<"\n"<<c<<"\n";
  }
  
if(c>=10)
{
    char e[2]={a[4],a[5]};
    int m;
    m=stoi(e);
    m=m/100;
    cout<<endl<<m<<endl;
    if(m==((2*c)+2))
    {
        //alkane
        cout<<"Alkane";
        int x=80,y=240,r=15,d=50;
        alkane(c,x,y,r,d);
    }
    
    else if(m==(2*c))
    {
        //alkaene
        cout<<"Alkene";
     int x=80,y=240,r=15,d=50;
     alkene(c,x,y,r,d);
    }
    
    else if(m==(2*c)-2)
    {
        //alkyne
        cout<<"Alkyne";
        int x=80,y=240,r=15,d=50;
        alkyne(c,x,y,r,d);
    }
    else 
    {
        //Wrong 
         //cout<<"zenda -1";
        cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
    }
}
else if(c>=4&&c<=9) 
{
    char e[2]={a[3],a[4]};
    int m;
    m=stoi(e);
    //cout<<"\n"<<m<<"\n";
    if(m==(2*c)+2)
    {
        //alkane
        cout<<"Alkane";
         int x=80,y=240,r=15,d=50;
  alkane(c,x,y,r,d);
    }
    else if(m==(2*c))
    {
        //alkene
        cout<<"Alkene";
        int x=80,y=240,r=15,d=50;
        alkene(c,x,y,r,d);
    }
    else if(m==(2*c)-2)
    {
        //alkyne
        cout<<"Alkyne";
        int x=80,y=240,r=15,d=50;
        alkyne(c,x,y,r,d);
    }
    else 
    {
        //Wrong 
         //cout<<"zenda 0";
        cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
    }
}
else if(c>=1&&c<=3) 
{
  //cout<<"\nflag p\n";
    char e[1]={a[3]};
    int m;
    m=stoi(e);
    
    //cout<<m<<"\n";
    if(m==(2*c)+2)
    {
        //alkane
        cout<<"Alkane";
        int x=280,y=240,r=15,d=50;
        alkane(c,x,y,r,d);
    }
    else if(m==(2*c))
    {
        //alkene
        cout<<"Alkene";
        int x=280,y=240,r=15,d=50;
        alkene(c,x,y,r,d);
    }
    else if(m==(2*c)-2)
    {
        //alkyne
        cout<<"Alkyne";
        int x=280,y=240,r=15,d=50;
        alkyne(c,x,y,r,d);
    }
    else 
    {
        //Wrong 
        //cout<<"zenda 1";
        cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
    }
}
else
{
     //cout<<"zenda 2";
    cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
}
 
            } 
            else 
            {
            cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
            }
          }
          else 
          {
          cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
          }
        }
        else 
        {
           cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
        }
    }
    else
    {
        cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
    }
 }
 else
 {
    cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
 }
}
else
{
    cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
}
}

else
{
     cout<<"\n\t\t Please Enter Chemical formula according to given syntax \n";
}
}
}
getch();
return 0;

} 