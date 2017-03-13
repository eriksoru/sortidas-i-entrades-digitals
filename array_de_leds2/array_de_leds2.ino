/****************************************************************
 **                                                            **
 **                    array de leds 2                         **                                                           
 **                                                            **                   
 **                                                            **
 **  Nom: Erik Soriano Ruiz                 Data: 13/03/2017   **                                                           
 ***************************************************************/

 //********** Includes ******************************************
 // ********** Variables ****************************************
const  int LED0 = 5 ;          // Nom donar al pin 5 de l'Arduino
const  int LED1 = 6 ;          // Nom donar al pin 6 de l'Arduino
const  int LED2 = 7 ;          // Nom donar al pin 7 de l'Arduino
const  int LED3 = 8 ;          // Nom donar al pin 8 de l'Arduino
const  int LED4 = 9 ;          // Nom donar al pin 9 de l'Arduino
const  int LED5 = 10 ;         // Nom donar al pasador 10 de l'Arduino
const  int LED6 = 11 ;         // Nom donar al pasador 11 de l'Arduino
const  int LED7 = 12 ;         // Nom donar al pasador 12 de l'Arduino
int pausa = 500 ;             // Variables Definir de temps en ms

// ********** Configuración *********************************************
void  setup ()
{
  pinMode (LED0, OUTPUT);     // Definir el pin 5 com Una sortida
  pinMode (LED1, OUTPUT);     // Definir el pin 6 com Una sortida
  pinMode (LED2, OUTPUT);     // Definir el pin 7 com Una sortida
  pinMode (LED3, OUTPUT);     // Definir el pin 8 com Una sortida
  pinMode (LED4, OUTPUT);     // Definir el pin 9 com Una sortida
  pinMode (LED5, OUTPUT);     // Definir el pasador 10 com Una sortida
  pinMode (LED6, OUTPUT);     // Definir el pasador 11 com Una sortida
  pinMode (LED7, OUTPUT);     // Definir el pasador 12 com Una sortida
}

// ********** Loop ****************************************************
void  loop ()
{
  digitalWrite (LED0, HIGH);    // Posar un pin 5V el 5
  digitalWrite (LED1, LOW);     // Posar un pin 0V el 6
  digitalWrite (LED2, HIGH);    // Posar un pin 5V el 7
  digitalWrite (LED3, LOW);     // Posar un pin 0V el 8
  digitalWrite (LED4, HIGH);    // Posar un pin 5V el 9
  digitalWrite (LED5, LOW);     // Posar un pin 0V el 10
  digitalWrite (LED6, HIGH);    // Posar un pin 5V el 11
  digitalWrite (LED7, LOW);     // Posar un pin 0V el 12
  
  delay (pausa);              // ES Queden leds PAUSA MS aquest estat
  
  digitalWrite (LED0, LOW);     // Posar un pin 0V el 5
  digitalWrite (LED1, HIGH);    // Posar un pin 5V el 6
  digitalWrite (LED2, LOW);     // Posar un pin 0V el 7
  digitalWrite (LED3, HIGH);    // Posar un pin 5V el 8
  digitalWrite (LED4, LOW);     // Posar un pin 0V el 9
  digitalWrite (LED5, HIGH);    // Posar un pin 5V el 10
  digitalWrite (LED6, LOW);     // Posar un pin 0V el 11
  digitalWrite (LED7, HIGH);    // Posar un pin 5V el 12
  
  delay (pausa);              // ES Queden leds PAUSA MS aquest estat
}

// ********** Funcions ****************************************************
