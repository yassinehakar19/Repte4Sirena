/************************************************************************
**                                                                     **
**                             TITOL:Serina P2                         **
**                                                                     **
**                                                                     **
**   Nom : Yassine hakar                             DATA: 22/03/2017  **
************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int xiulet = 9;        
const int pot0 = A0;
const int pot1 = A1;

int valPot0;
int valPot1;                   

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);
  valPot1 = analogRead(pot1);  
  
  tone(xiulet, valPot1, valPot0);    
  delay(2*valPot0); 
  } 

//********** Funcions *************************************************************

