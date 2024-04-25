/*codigo pertencente a golfins studios
autor: jabutirsom64
objetivo: imprimir números em um display de 7 segmentos
linguagem: arduino c/c++
*/


#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define dp 9
void svsbg()
{
  
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);  
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}
void point()
{
  digitalWrite(dp,1);
}
void cpoint()
{
digitalWrite(dp,0);
}

void clearD()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
}
void zero()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
 
}
void digitONE()
{
    digitalWrite(b,1);
    digitalWrite(c,1);

}
void digitTWO()
{
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(g,1);
    digitalWrite(e,1);
    digitalWrite(d,1);
}
void digitTRE()
{
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(g,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
}
void digitFOR()
{
    digitalWrite(f,1);
    digitalWrite(b,1);
    digitalWrite(g,1);
    digitalWrite(c,1);
   
}
void digitFIVE()
{
    digitalWrite(a,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
}
void digitSIX()
{
    digitalWrite(a,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    digitalWrite(c,1);
    digitalWrite(e,1);
    digitalWrite(d,1);
}
void digitSV()
{
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    
}
void digitEIG()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void digitNINE()
{
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(g,1);
    digitalWrite(f,1);
    digitalWrite(c,1);
}
#define SW 10
int ct =0;
void setup() {
svsbg();
pinMode(SW, INPUT_PULLUP);
}
void loop() {
if(!digitalRead(SW))
{
  ct++;
  delay(100);
}
switch(ct)
{
case 0:
clearD();
zero();
case 1:
clearD();
digitONE();
break;
case 2:
clearD();
digitTWO();
break;
case 3:
clearD();
digitTRE();
break;
case 4:
clearD();
digitFOR();
break;
case 5:
clearD();
digitFIVE();
break;
case 6:
clearD();
digitSIX();
break;
case 7:
clearD();
digitSV();
break;
case 8:
clearD();
digitEIG();
break;
case 9:
clearD();
digitNINE();
break;
}
if(ct >= 10)
{
  ct =0;
}
}
