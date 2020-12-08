  //General Pin settings
  //Setup buttons with internal pullup

#ifdef __AVR_ATmega2560__

  // Analog pin A0
  PORTF |= _BV(0);

  // Analog pin A1
  PORTF |= _BV(1);
  
  // Analog pin A2
  PORTF |= _BV(2);
  
  // Analog pin A3
  PORTF |= _BV(3);

  // Analog pin A4
  PORTF |= _BV(4);

  // Analog pin A5
  //PORTF |= _BV(5);

  // Digital pin 6
  PORTH |= _BV(3);

#elif defined(__AVR_ATmega4809__)
  //pinMode(btnPlay,INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnPlay,HIGH); // 17 PD0
  //PORTD.PIN0CTRL |=0B00001000;
  PORTD.PIN0CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */

  //VPORTC.DIR |= ~PIN3_bm;
  //PORTC.DIR |= ~PIN3_bm; /* Configure PC3 as digital input */
  //PORTC.PIN3CTRL = PORT_PULLUPEN_bm; /* Enable the internal pullup */
  
    
  //digitalWrite(btnPlay,HIGH);
  //  VPORTC.OUT |= _BV(3);
  //PORTC |= _BV(3);
  
  //pinMode(btnStop,INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnStop,HIGH); // 16 PD1
  PORTD.PIN1CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */  
  //VPORTC.OUT |= _BV(2);
  //PORTC |= _BV(2);

  //pinMode(btnUp,INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnUp,HIGH); // 15 PD2
  PORTD.PIN2CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */    
  //VPORTC.OUT |= _BV(1);
  //PORTC |= _BV(1);

  //pinMode(btnDown,INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnDown,HIGH); // 14 PD3 also to enbale PULLUP if PINMODE is INPUT
  PORTD.PIN3CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */    
  //VPORTC.OUT |= _BV(0);
  //PORTC |= _BV(0);

  //pinMode(btnMotor, INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnMotor,HIGH); // 6 PF4
  PORTF.PIN4CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */  
  //VPORTD.OUT |= _BV(btnMotor);
  //PORTD |= _BV(btnMotor);
  
  //pinMode(btnRoot, INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnRoot, HIGH); // 7 PA1 
  PORTA.PIN1CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */
  //VPORTD.OUT |= _BV(btnRoot); 
  //PORTD |= _BV(btnRoot);

#elif defined(__AVR_ATmega4808__)
  //pinMode(btnPlay,INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnPlay,HIGH); // 17 PD3
  PORTD.PIN3CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */

  //pinMode(btnStop,INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnStop,HIGH); // 16 PD2
  PORTD.PIN2CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */  

  //pinMode(btnUp,INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnUp,HIGH); // 15 PD1
  PORTD.PIN1CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */    

  //pinMode(btnDown,INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnDown,HIGH); // 14 PD0 also to enbale PULLUP if PINMODE is INPUT
  PORTD.PIN0CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */    

  //pinMode(btnMotor, INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnMotor,HIGH); // 6 PA4
  PORTA.PIN4CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */  
  
  //pinMode(btnRoot, INPUT_PULLUP);  // Not needed, default is INPUT (0)
  //digitalWrite(btnRoot, HIGH); // 7 PA5 
  PORTA.PIN5CTRL |=PORT_PULLUPEN_bm; /* Enable the internal pullup */
  
#elif defined(__arm__) && defined(__STM32F1__)

  //General Pin settings
  //Setup buttons with internal pullup 
  pinMode(btnPlay,INPUT_PULLUP);
  digitalWrite(btnPlay,HIGH);
  pinMode(btnStop,INPUT_PULLUP);
  digitalWrite(btnStop,HIGH);
  pinMode(btnUp,INPUT_PULLUP);
  digitalWrite(btnUp,HIGH);
  pinMode(btnDown,INPUT_PULLUP);
  digitalWrite(btnDown,HIGH);
  pinMode(btnMotor, INPUT_PULLUP);
  digitalWrite(btnMotor,HIGH);
  pinMode(btnRoot, INPUT_PULLUP);
  digitalWrite(btnRoot, HIGH); 
   
#else  //__AVR_ATmega328P__
  //pinMode(btnPlay,INPUT_PULLUP);  // Not needed, default is INPUT (0)
//  digitalWrite(btnPlay,HIGH); // Wrte for INPUT_PULLUP if input type is only INPUT
  PORTC |= _BV(3);
  
  //pinMode(btnStop,INPUT_PULLUP);  // Not needed, default is INPUT (0)
//  digitalWrite(btnStop,HIGH);
  PORTC |= _BV(2);

  //pinMode(btnUp,INPUT_PULLUP);  // Not needed, default is INPUT (0)
//  digitalWrite(btnUp,HIGH);
  PORTC |= _BV(1);

  //pinMode(btnDown,INPUT_PULLUP);  // Not needed, default is INPUT (0)
//  digitalWrite(btnDown,HIGH);
  PORTC |= _BV(0);

  //pinMode(btnMotor, INPUT_PULLUP);  // Not needed, default is INPUT (0)
//  digitalWrite(btnMotor,HIGH);
  PORTD |= _BV(btnMotor);
  
  //pinMode(btnRoot, INPUT_PULLUP);  // Not needed, default is INPUT (0)
//  digitalWrite(btnRoot, HIGH); 
  PORTD |= _BV(btnRoot);
#endif
