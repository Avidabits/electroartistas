int luz; //será el valor de entrada de la LDR
int sonido; //será el valor de la frecuencia del altavoz
int ldr=A5; //conectaré la LDR al pin A5
int altavoz=5; //conectaré el altavoz al pin 5
int frecuencia_inferior=100; //limite de arduino Uno es 31
int frecuencia_superior=4000;
void setup(){
  pinMode(altavoz,OUTPUT);
  Serial.begin(9600); //interesa ver los valores de la LDR
 
}
void loop(){
    luz=analogRead(ldr);
    Serial.print("luz recibida: ");
    Serial.print(luz);
    Serial.print('\t');
     
    sonido=map(luz,0,20,frecuencia_inferior, frecuencia_superior);
    sonido=constrain(sonido,frecuencia_inferior,frecuencia_superior); //obligo a que no salga de esos valores
    Serial.print("frecuenca sonido: ");
    Serial.println(sonido);
    tone(altavoz,sonido,100);
    delay(500); //doy tiempo a que suene la nota y a una pequeña pausa
}
