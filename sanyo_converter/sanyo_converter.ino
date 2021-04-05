int incomingByte = 0; // for incoming serial data
int numlock = 1;

void setup() {
  Serial.begin(1200,SERIAL_8E2);
  //Serial.flush();
//  Serial.write("==============");
//  
//  for (int i=0; i < 3; i++)
//  {
//     Serial.print(i, DEC);
//     Serial.write('#');
//     Serial.write(i);
//     Serial.write('|');
//     if (i % 15 == 0)
//     {
//       Serial.println();
//       delay(4000);
//     }
//  }
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    // say what you got:
    //Serial.print("I received: ");
    //Serial.println(incomingByte, DEC);

// adjust numpad to be used as arrows by replacing the scan codes with the ones for arrows

    if (numlock == 0 && incomingByte == 104)
       incomingByte = 7; //up
    else
    if (numlock == 0 && incomingByte == 100)
       incomingByte = 5; //left
    else
    if (numlock == 0 && incomingByte == 102)
       incomingByte = 6; //right
    else
    if (numlock == 0 && incomingByte == 88)
       incomingByte = 9; //down

//basic keys
    if (incomingByte == 81) //space bar 
       Serial.write(32);
       else
    if (incomingByte == 98 || incomingByte == 11) //enter or small enter
       Serial.write("\n\r");
       else
    if (incomingByte == 114) //backspace
       Serial.write(8);
       else
     if (incomingByte == 96) //ESC
       Serial.write(27);
       else
       
     if (incomingByte == 8) //break red button
       Serial.write(8);
       else

     if (incomingByte == 80) //numlock
     {
        if (numlock == 1) numlock = 0;
        else
        if (numlock == 0) numlock = 1;
     }
     else

//numbers
     if (incomingByte == 192 || incomingByte == 87) //1
       Serial.write('1');
       else
     if (incomingByte == 193 || incomingByte == 88) //2
       Serial.write('2');
       else
     if (incomingByte == 194 || incomingByte == 89) //3
       Serial.write('3');
       else
     if (incomingByte == 195 || incomingByte == 100) //4
       Serial.write('4');
       else
     if (incomingByte == 196 || incomingByte == 101) //5
       Serial.write('5');
       else
     if (incomingByte == 197 || incomingByte == 102) //6
       Serial.write('6');
       else
     if (incomingByte == 198 || incomingByte == 103) //7
       Serial.write('7');
       else
     if (incomingByte == 199 || incomingByte == 104) //8
       Serial.write('8');
       else
     if (incomingByte == 200 || incomingByte == 105) //9
       Serial.write('9');
       else
     if (incomingByte == 201 || incomingByte == 84) //0
       Serial.write('0');
       else
     if (incomingByte == 85) //00
      {
       Serial.write('0');
       Serial.write('0');
      }
       else
       
//under the numbers
     if (incomingByte == 64) //1
       Serial.write('*');
       else
     if (incomingByte == 65) //é
       Serial.write(233);
       else
     if (incomingByte == 66) //"
       Serial.write('"');
       else
     if (incomingByte == 67) //'
       Serial.write(39);
       else
       if (incomingByte == 68) //(
       Serial.write('(');
       else
     if (incomingByte == 69) //)
       Serial.write(')');
       else
     if (incomingByte == 70) //é
       Serial.write(232);
       else
     if (incomingByte == 71) //_
       Serial.write('_');
       else
     if (incomingByte == 72) //ç
       Serial.write(231);
       else
      if (incomingByte == 73) //à
       Serial.write(224);
       else
       
//arrows 
     if (incomingByte == 7) //up
       Serial.write(30);
       else
     if (incomingByte == 9) //down
       Serial.write(31);
       else
     if (incomingByte == 5) //left
       Serial.write(28);
       else
     if (incomingByte == 6) //right
       Serial.write(29);
     else

//letters lower azerty
    if (incomingByte == 48) //a 
       Serial.write('a');
       else
    if (incomingByte == 21) //b 
       Serial.write('b');
       else
    if (incomingByte == 19) //c
       Serial.write('c');
       else
    if (incomingByte == 34) //d 
       Serial.write('d');
       else
    if (incomingByte == 50) //e 
       Serial.write('e');
       else
    if (incomingByte == 35) //f 
       Serial.write('f');
       else
    if (incomingByte == 36) //g 
       Serial.write('g');
       else
    if (incomingByte == 37) //h
       Serial.write('h');
       else
    if (incomingByte == 55) //i 
       Serial.write('i');
       else
    if (incomingByte == 38) //j 
       Serial.write('j');
       else
    if (incomingByte == 39) //k
       Serial.write('k');
       else
    if (incomingByte == 40) //l 
       Serial.write('l');
       else
    if (incomingByte == 41) //m
       Serial.write('m');
       else  
    if (incomingByte == 22) //n
       Serial.write('n');
       else
    if (incomingByte == 56) //o 
       Serial.write('o');
       else
    if (incomingByte == 57) //p 
       Serial.write('p');
       else
    if (incomingByte == 32) //q 
       Serial.write('q');
       else
    if (incomingByte == 51) //r 
       Serial.write('r');
       else
    if (incomingByte == 33) //s 
       Serial.write('s');
       else
    if (incomingByte == 52) //t 
       Serial.write('t');
       else
    if (incomingByte == 54) //u 
       Serial.write('u');
       else  
    if (incomingByte == 20) //v 
       Serial.write('v');
       else
    if (incomingByte == 17) //w 
       Serial.write('w');
       else
    if (incomingByte == 18) //x 
       Serial.write('x');
       else
    if (incomingByte == 53) //y 
       Serial.write('y');
       else  
    if (incomingByte == 49) //z 
       Serial.write('z');
       else
    if (incomingByte == 49) //z 
       Serial.write('z');
       else

//letters upper  azerty
    if (incomingByte == 176) //A 
       Serial.write('A');
       else
    if (incomingByte == 149) //B 
       Serial.write('B');
       else
    if (incomingByte == 147) //C
       Serial.write('C');
       else
    if (incomingByte == 162) //D 
       Serial.write('D');
       else
    if (incomingByte == 178) //E 
       Serial.write('E');
       else
    if (incomingByte == 163) //F 
       Serial.write('F');
       else
    if (incomingByte == 164) //G 
       Serial.write('G');
       else
    if (incomingByte == 165) //H
       Serial.write('H');
       else
    if (incomingByte == 183) //I 
       Serial.write('I');
       else
    if (incomingByte == 166) //J 
       Serial.write('J');
       else
    if (incomingByte == 167) //K
       Serial.write('K');
       else
    if (incomingByte == 168) //L
       Serial.write('L');
       else
    if (incomingByte == 169) //M
       Serial.write('M');
       else  
    if (incomingByte == 150) //N
       Serial.write('N');
       else
    if (incomingByte == 184) //O 
       Serial.write('O');
       else
    if (incomingByte == 185) //P 
       Serial.write('P');
       else
    if (incomingByte == 160) //Q 
       Serial.write('Q');
       else
    if (incomingByte == 179) //R 
       Serial.write('R');
       else
    if (incomingByte == 161) //S 
       Serial.write('S');
       else
    if (incomingByte == 180) //T 
       Serial.write('T');
       else
    if (incomingByte == 182) //u 
       Serial.write('U');
       else  
    if (incomingByte == 148) //V 
       Serial.write('V');
       else
    if (incomingByte == 145) //W
       Serial.write('W');
       else
    if (incomingByte == 146) //X 
       Serial.write('X');
       else
    if (incomingByte == 181) //Y 
       Serial.write('Y');
       else  
    if (incomingByte == 177) //Z 
       Serial.write('Z');
       else

// special
       
    if (incomingByte == 152 || incomingByte == 86) //.
       Serial.write('.'); 
       else
     if (incomingByte == 27) //}
       Serial.write('}'); 
       else
     if (incomingByte == 151) // /
       Serial.write('/'); 
       else      
     if (incomingByte == 23) //,
       Serial.write(','); 
       else
     if (incomingByte == 24) //;
       Serial.write(';'); 
       else
     if (incomingByte == 153) //-
       Serial.write('-'); 
       else
     if (incomingByte == 25) //:
       Serial.write(':'); 
       else
     if (incomingByte == 154) //+
       Serial.write('+'); 
       else
     if (incomingByte == 26) //=
       Serial.write('='); 
       else

     if (incomingByte == 74) //!
       Serial.write('!'); 
       else
     if (incomingByte == 202) //#
       Serial.write('#'); 
       else

     if (incomingByte == 203) //@
       Serial.write('@'); 
       else       
     if (incomingByte == 75) //?
       Serial.write('?'); 
       else     
     if (incomingByte == 240) //Backslash
       Serial.write(92); 
       else
     if (incomingByte == 241) //^
       Serial.write('^'); 
       else
     if (incomingByte == 113) //|
       Serial.write('|'); 
       else
     if (incomingByte == 186) //<
       Serial.write('<'); 
       else
     if (incomingByte == 58) //$
       Serial.write('$'); 
       else
     if (incomingByte == 187) //>
       Serial.write('>'); 
       else
     if (incomingByte == 59) //&
       Serial.write('&'); 
       else
     if (incomingByte == 170) //%
       Serial.write('%'); 
       else
     if (incomingByte == 42) //ù
       Serial.write(249); 
       else
     if (incomingByte == 16) //{
       Serial.write('{'); 
       else
     if (incomingByte == 144) //[
       Serial.write('['); 
       else
     if (incomingByte == 155) //]
       Serial.write(']'); 
       else
     if (incomingByte == 97) //tab
       Serial.write('\t'); 
       else      
       //Serial.write(incomingByte);
       {
         Serial.print(' ');
         Serial.print(incomingByte, DEC);
       }
  }
}
