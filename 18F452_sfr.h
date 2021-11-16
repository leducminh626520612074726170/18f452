//created by : 01101100 01100101 00100000 01100100 01110101 01100011 00100000 01101101 01101001 01101110 01101000
// IO PORT
#define uint8_t unsigned int
#define int8_t int
#define int16_t long 
#define uint16_t unsigned long 
#define int32_t long long
#define uint32_t unsigned long long
//random midnight thoughts of a loser: I might die a virgin. No, I'm wrong how can I die a virgin. I fuck my life every day                                   
#byte TRISA = 0XF92
#byte TRISB = 0xF93
#byte TRISC = 0xF94
#byte TRISD = 0xF95
#byte TRISE = 0xF96
#byte PORTA = 0xF80
#byte PORTB = 0xF81
#byte PORTC = 0xF82
#byte PORTD = 0xF83
#byte PORTE = 0xF84
//TRISA            
#bit TRISA_0 = 0XF92.0
#bit TRISA_1 = 0XF92.1
#bit TRISA_2 = 0XF92.2
#bit TRISA_3 = 0XF92.3
#bit TRISA_4 = 0XF92.4
#bit TRISA_5 = 0XF92.5
#bit TRISA_6 = 0XF92.6
#bit TRISA_7 = 0XF92.7
//TRISB
#bit TRISB_0 = 0xF93.0
#bit TRISB_1 = 0xF93.1
#bit TRISB_2 = 0xF93.2
#bit TRISB_3 = 0xF93.3
#bit TRISB_4 = 0xF93.4
#bit TRISB_5 = 0xF93.5
#bit TRISB_6 = 0xF93.6
#bit TRISB_7 = 0xF93.7
//TRISC
#bit TRISC_0 = 0xF94.0
#bit TRISC_1 = 0xF94.1
#bit TRISC_2 = 0xF94.2
#bit TRISC_3 = 0xF94.3
#bit TRISC_4 = 0xF94.4
#bit TRISC_5 = 0xF94.5
#bit TRISC_6 = 0xF94.6
#bit TRISC_7 = 0xF94.7
//TRISD
#bit TRISD_0 = 0xF95.0
#bit TRISD_1 = 0xF95.1
#bit TRISD_2 = 0xF95.2
#bit TRISD_3 = 0xF95.3
#bit TRISD_4 = 0xF95.4
#bit TRISD_5 = 0xF95.5
#bit TRISD_6 = 0xF95.6
#bit TRISD_7 = 0xF95.7
//TRISE
#bit TRISE_0 = 0xF96.0
#bit TRISE_1 = 0xF96.1
#bit TRISE_2 = 0xF96.2
//PORTA
#bit RA_0 = 0xF80.0
#bit RA_1 = 0xF80.1
#bit RA_2 = 0xF80.2
#bit RA_3 = 0xF80.3
#bit RA_4 = 0xF80.4
#bit RA_5 = 0xF80.5
#bit RA_6 = 0xF80.6
#bit RA_7 = 0xF80.7
//PORTB
#bit RB_0 = 0xF81.0
#bit RB_1 = 0xF81.1
#bit RB_2 = 0xF81.2
#bit RB_3 = 0xF81.3
#bit RB_4 = 0xF81.4
#bit RB_5 = 0xF81.5 
#bit RB_6 = 0xF81.6
#bit RB_7 = 0xF81.7
//PORTC
#bit RC_0 = 0xF82.0
#bit RC_1 = 0xF82.1
#bit RC_2 = 0xF82.2
#bit RC_3 = 0xF82.3
#bit RC_4 = 0xF82.4
#bit RC_5 = 0xF82.5
#bit RC_6 = 0xF82.6
#bit RC_7 = 0xF82.7
//PORTD
#bit RD_0 = 0xF83.0
#bit RD_1 = 0xF83.1
#bit RD_2 = 0xF83.2
#bit RD_3 = 0xF83.3
#bit RD_4 = 0xF83.4
#bit RD_5 = 0xF83.5
#bit RD_6 = 0xF83.6
#bit RD_7 = 0xF83.7
//PORTE
#bit RE_0 = 0xF84.0
#bit RE_1 = 0xF84.1
#bit RE_2 = 0xF84.2
   

//STATUS
#bit C = 0xFD8.0
#bit DC = 0xFD8.1
#bit Z = 0xFD8.2
#bit OV = 0xFD8.3
#bit N = 0xFD8.4   
   
//random midnight thoughts: Sometimes when I see a cute girl, I don't know if I want her to be my girlfriend or if I want to be her.   
//TIMER 
//timer 0 
#byte TMR0l = 0xFD6  
#byte TMR0H = 0xFD7
#byte T0CON = 0xFD5  
//T0CON
#bit T0PS0 = 0xFD5.0
#bit T0PS1 = 0xFD5.1
#bit T0PS2 = 0xFD5.2
#bit PSA = 0xFD5.3
#bit T0SE = 0xFD5.4
#bit T0CS = 0xFD5.5
#bit T08BIT = 0xFD5.6
#bit TMR0ON = 0xFD5.7
//timer1
#byte TMR1L = 0xFCE
#byte TMR1H = 0xFCF
#byte T1CON = 0xFCD
//T1CON
#bit RD16_timer1 = 0xFCD.7
#bit T1CKPS1 = 0xFCD.5
#bit T1CKPS0 = 0xFCD.4
#bit T1OSCEN = 0xFCD.3
#bit T1SYNC = 0xFCD.2
#bit TMR1CS = 0xFCD.1
#bit TMR10N = 0xFCD.0
//timer2
#byte TMR2 = 0xFCC
#byte T2CON = 0xFCA
//T2CON
#bit TOUTPS3 = 0xFCA.6
#bit TOUTPS2 = 0xFCA.5
#bit TOUTPS1 = 0xFCA.4
#bit TOUTPS0 = 0xFCA.3
#bit TMR2ON = 0xFCA.2
#bit T2CKPS1 = 0xFCA.1
#bit T2CKPS0 = 0xFCA.0
//timer3
#byte TMR3L = 0xFB2
#byte TMR3H = 0xFB3
#byte T3CON = 0xFB1
//T3CON
#bit RD16_timer3 = 0xFB1.7
#bit T3CCP2 = 0xFB1.6
#bit T3CKPS1 = 0xFB1.5
#bit T3CKPS0 = 0xFB1.4
#bit T3CCP1 = 0xFB1.3
#bit T3SYNC = 0xFB1.2
#bit TMR3CS = 0xFB1.1
#bit TMR3ON = 0xFB1.0

//random midnight thoughts: Confused between envy and attraction is not a cis thing to do
//serial comunication
#byte SPBRG = 0XFAF
#byte TXREG = 0XFAD
#byte RCREG = 0XFAE
#byte TXSTA = 0XFAC
#byte RCSTA = 0XFAB
//TXSTA
#bit CSRC = 0XFAC.7
#bit TX9 = 0XFAC.6
#bit TXEN = 0XFAC.5
#bit SYNC = 0XFAC.4
#bit BRGH = 0XFAC.2
#bit TRMT = 0XFAC.1
#bit TX9D = 0XFAC.0
//RCSTA 
#bit SPEN = 0XFAB.7
#bit RX9 = 0XFAB.6
#bit SREN = 0XFAB.5
#bit CREN = 0XFAB.4
#bit ADDE = 0XFAB.3
#bit FERR = 0XFAB.2
#bit OERR = 0XFAB.1
#bit TXD9 = 0XFAB.0

//random midnight thoughts: the line maybe straight but I"am not
//interrupt
#byte INTCON = 0XFF2   
#byte INTCON2 =  0XFF1
#byte INTCON3 = 0XFF0
#byte PIR1 = 0XF9E
#byte PIR2 = 0XFA1
#byte PIE1 = 0XF9D
#byte PIE2 = 0XFA0
#byte IPR1 =  0XF9F
#byte IPR2 = 0XFA2
#byte RCON = 0XFD0       
//INTCON
#bit GIE = 0XFF2.7
#bit TMR0IE = 0XFF2.5  
#bit INT0IE = 0XFF2.4
#bit RBIE = 0XFF2.3
#bit TMR0IF = 0XFF2.2 
#bit INT0IF = 0XFF2.1
#bit RBIF = 0XFF2.0

//INTCON2
#bit RBPU = 0XFF1.7
#bit INTEDG0 = 0XFF1.6
#bit INTEDG1 = 0XFF1.5
#bit INTEDG2 = 0XFF1.4
#bit TMR0IP = 0XFF1.2
#bit RBIP = 0XFF1.0 

//INTCON3
#bit INT2IP = 0XFF0.7 
#bit INT1IP = 0XFF0.6
#bit INT2IE = 0XFF0.4
#bit INT1IE = 0XFF0.3
#bit INT2IF = 0XFF0.1
#bit INT1IF = 0XFF0.0

//PIR1
#bit PSPIF = 0xF9E.7
#bit ADIF = 0xF9E.6 
#bit RCIF = 0xF9E.5 
#bit TXIF = 0xF9E.4 
#bit SSPIF = 0xF9E.3 
#bit CCP1IF = 0xF9E.2 
#bit TMR2IF = 0xF9E.1 
#bit TMR1IF = 0xF9E.0

//PIR2
#bit EEIF = 0XFA1.4 
#bit BCLIF = 0XFA1.3 
#bit LVDIF = 0XFA1.2 
#bit TMR3IF = 0XFA1.1 
#bit CCP2IF = 0XFA1.0  

//PIE1
#bit PSPIE = 0XF9D.7  
#bit ADIE = 0XF9D.6 
#bit RCIE = 0XF9D.5 
#bit TXIE = 0XF9D.4 
#bit SSPIE = 0XF9D.3 
#bit CCP1IE = 0XF9D.2 
#bit TMR2IE = 0XF9D.1 
#bit TMR1IE = 0XF9D.0 

//PIE2
#bit EEIE = 0XFA0.4 
#bit BCLIE = 0XFA0.3 
#bit LVDIE = 0XFA0.2 
#bit TMR3IE = 0XFA0.1 
#bit CCP2IE = 0XFA0.0

//IPR1
#bit PSPIP = 0XF9F.7 
#bit ADIP = 0XF9F.6 
#bit RCIP = 0XF9F.5 
#bit TXIP = 0XF9F.4 
#bit SSPIP = 0XF9F.3 
#bit CCP1IP = 0XF9F.2 
#bit TMR2IP = 0XF9F.1 
#bit TMR1IP = 0XF9F.0

//IPR2
#bit EEIP = 0XFA2.4
#bit BCLIP = 0XFA2.3
#bit LVDIP = 0XFA2.2
#bit TMR3IP = 0XFA2.1
#bit CCP2IP = 0XFA2.0

//RCON
#bit IPEN = 0XFD0.7 
#bit RI = 0XFD0.4 
#bit TO = 0XFD0.3 
#bit PD = 0XFD0.2 
#bit POR = 0XFD0.1 
#bit BOR = 0XFD0.0

 








