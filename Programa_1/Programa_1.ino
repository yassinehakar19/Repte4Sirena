/************************************************************************
**                                                                     **
**                             TITOL:Serina                            **
**                                                                     **
**                                                                     **
**   Nom : Yassine hakar                             DATA: 22/03/2017  **
************************************************************************/


//********** Includes *************************************************************

//********** Variables ************************************************************
const int xiulet = 9;        
const int pot0 = A0;         
int valPot0;                   

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);  
  tone(xiulet, 800, valPot0);    
  delay(2*valPot0);  

//********** Funcions *************************************************************

