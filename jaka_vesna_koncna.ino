#include <LiquidCrystal.h>



const int rs = 1, en = 2, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);



int tip = 3;
int tip2 = 4;
int tip3 = 5;
int tip4 = 6;
int led = 7;
int led2 = 8;
int led3 = 9;


void setup() {
  // put your setup code here, to run once:
  pinMode(tip, INPUT);
  pinMode(tip2, INPUT);
  pinMode(tip3, INPUT);
  pinMode(tip4, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  lcd.begin(16,2);
  
}


int ena = 0;
int dva = 0;
int tri = 0;

int vse = 0;
long prvi = 0;
long drugi = 0;
long treti = 0;


String enka = "";

String druga = "";

String tretja = "";

int stevec = 0;
int st = 1;

void loop() {

  // put your main code here, to run repeatedly:
  if (digitalRead(tip) == HIGH) {
    ena = 1;
    prvi = millis();
  }
  if (digitalRead(tip2) == HIGH) {
    dva = 1;
    drugi = millis();
  }
  if (digitalRead(tip3) == HIGH) {
    tri = 1;
    treti = millis();
  }
  if (digitalRead(tip4) == HIGH) {
    ena = 0;
    dva = 0;
    tri = 0;
    vse = 0;
    treti = 0;
    drugi = 0;
    prvi = 0;
    digitalWrite(led, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    lcd.clear();
    st = 1;
  }

  if (ena == 0 && dva == 0 && tri == 0) {
    digitalWrite(led, HIGH);
  }

  if (ena == 1 || dva == 1 || tri == 1) {
    if (ena == 1 && dva == 1 && tri == 1) {
      digitalWrite(led3, HIGH);
      digitalWrite(led2, LOW);
    } else {
      digitalWrite(led2, HIGH);
    }
    digitalWrite(led, LOW);

  }
  /*
    if(prvi<drugi){
      if(drugi<treti){
        enka="prvi";
        druga="drugi";
        tretja="tretji";
        }
       else{
        enka="prvi";
        tretja="drugi";
        druga="tretji";
        }
    }
    else if(drugi<prvi){
      if(prvi<tretji){
        druga="prvi";
        enka="drugi";
        tretja="tretji";

      }
      else{
        druga="prvi";
      }
    }
  */

  if (prvi < drugi && drugi < treti) {
    enka = "gEna";
    druga = "gDva";
    tretja = "gTri";
  }
  else if (prvi < drugi && treti < drugi && prvi < treti) {
    enka = "gEna";
    druga = "gTri";
    tretja = "gDva";
  }
  else if (drugi < prvi && prvi < treti) {
    enka = "gDva";
    druga = "gEna";
    tretja = "gTri";
  }
  else if (drugi < prvi && treti < prvi && drugi < treti) {
    enka = "gDva";
    druga = "gTri";
    tretja = "gEna";
  }
  else if (treti < prvi && prvi < drugi) {
    enka = "gTri";
    druga = "gEna";
    tretja = "gDva";
  }
  else if (treti < prvi && drugi < prvi && treti < drugi) {
    enka = "gTri";
    druga = "gDva";
    tretja = "gEna";
  }


  if (ena == 1 && dva == 1 && tri == 1 && st == 1) {
    lcd.setCursor(0,0);
    lcd.print("T: " + tretja);
    delay(100);
    
    lcd.setCursor(8, 0);
    lcd.print("D: " + druga);
    delay(100);
    lcd.setCursor(5, 1);
    lcd.print("P: " + enka);
    delay(100);
    st++;
    //Serial.println("P: " + enka + " D: " + druga + " T: " + tretja);

  }
  
}
  /*
    //zdi s mi d mugoc dela bomo vidl....
      Serial.print(prvi);
      Serial.print("  ");
      Serial.print(drugi);
      Serial.print("  ");
      Serial.print(treti);
      Serial.println();
      Serial.println("P: " + enka + " D: " + druga + " T: " + tretja);

  */
  //DELA LETS HOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOe
//}
