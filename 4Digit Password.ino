#include "DigiKeyboard.h"

int pass[] ={39,30,31,32,33,34,35,36,37,38};
int a = 0; 
int b = 0; 
int c = 0; 
int d = 0; 
int count = 0;

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(40);
  delay(3000);

}

void loop(){
  if (count == 5){
    digitalWrite(1,HIGH);
    DigiKeyboard.sendKeyStroke(40);
    delay(31000);
    count = 0;
    digitalWrite(1,LOW);
  }

  DigiKeyboard.sendKeyStroke(pass[a]);
  DigiKeyboard.sendKeyStroke(pass[b]);
  DigiKeyboard.sendKeyStroke(pass[c]);
  DigiKeyboard.sendKeyStroke(pass[d]);

  d++;
  count++;
  if(d=10){
    d=0;
    c++;
    if(c=10){
      c=0;
      b++;
      if(b=10){
        b=0;
        a++;
        if(a=10){
          
           
        }
      }

    }
  }
}