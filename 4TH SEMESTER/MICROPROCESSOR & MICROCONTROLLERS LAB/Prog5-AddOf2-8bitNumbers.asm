// ADDITION OF TWO 8 BIT NUMBERS
# BEGIN 9000H
	   MVI A,96
	   MVI B,F9
	   MVI C,00
	   ADD B
	   JNC AHEAD
	   INR C

AHEAD:	   STA 9060
	   RST 1