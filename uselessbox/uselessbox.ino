

#include <Servo.h>



Servo servoDedo;
int pinInterruptor = 9; 
int pinServoDedo=10;
int grados_apagado=70; //estos son los grados a los que se cierra el interruptor
int grados_descanso=18; // estos son los grados de reposo, no son cero para permitir mas recorrido de dedo
int pin_hight=8; // este es el pin de encendido del interruptor

void setup()
{
  pinMode(pin_hight, OUTPUT);
  digitalWrite(pin_hight, HIGH);
  pinMode(pinInterruptor, INPUT);
  servoDedo.attach(pinServoDedo); 
  servoDedo.write(grados_descanso);  //dedo oculto a 0 grados
}
void loop(){ 
  //if the switch is on, move door and finger to switch it off
  if(digitalRead(pinInterruptor) == HIGH)
  {
     apagaInterruptor();   
  }
  
} //loop
  

 void apagaInterruptor() 
   {    
   
    //saca dedo
    int pos=0;
    int paso=2;
    
    for(pos = grados_descanso; pos < grados_apagado; pos += paso)  
    {                                   
      servoDedo.write(pos);               
      delay(15);                       
    }  
    
    //mete dedo
    for(pos = grados_apagado; pos>=grados_descanso; pos-=paso)      
    {                                
      servoDedo.write(pos);               
      delay(15);                        
    } 
      
   } 

