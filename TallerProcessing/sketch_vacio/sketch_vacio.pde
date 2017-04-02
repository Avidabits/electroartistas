

/*    
  SKETCH DE EJEMPLO, VACIO. 
  CONVIENE EMPEZAR SIEMPRE CON UN TEXTO QUE EXPLIQUE EL CONTENIDO DE 
  PROGRAMA QUE ESTAMOS HACIENDO. 
  Como se trata de un texto para humanos, lo ponemos dentro de un comentario
  El analizador sintáctico ignora los comentarios
  

*/

// Ahora podemos declarar las liberias que importamos 
// por cada liberia que importemos conviene indicar con un comentario lo que hace
// Este comentario es de lines. se acaba al acabar la línea. 
// Aquí no hay ninguna librería


//despues de definir las librerias, podemos declarar las variables globales
// las variables globales se llamar así porque tienen visibilidad global
// cuando declaramos una variable dentro de una función solo tiene visibilidad dentro de la función



// las dos funciones más importantes de processing son setup y draw. 

// En la función setup pondremos todas las cosas necesarias que se realizarán 
// una sola vez nada más empezar el programa. 
// antes de la funcion se explica el tipo de datos que devuelve, en este caso void significa "nada"
// entre los parentesis, se indican los parametros que van a ser procesados , en este caso ninguno
// La función empieza con el corchete { y termina con el corchete } 
void setup()
{
 // Indicamos cual va a ser el tamaño de nuestro lienzo de dibujo
   size(640, 360);
 // definimos el color de fondo
   background (220, 220, 128); 
 // definimos cada cuantos segundo se redibuja nuesto lienzo
 frameRate(24);
 
}

// en la función draw realizamos nuestros dibujos. 

void draw()
{
    background(220, 220, 128);
    
     stroke(35, 35, 127);
    // processing nos proporciona variables predefinidas para evitarnos cálculos     
    line(mouseX, 0, mouseX, height); 
    ellipse(mouseX, mouseY, width/4, height/4);
}