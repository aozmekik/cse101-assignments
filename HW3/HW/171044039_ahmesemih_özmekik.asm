load R5,00000011b ;b=3
load R0,00001101b ;a=13
load R6,11111111b 
load R8,00000001b
xor  R7,R5,R6                      
addi R7,R7,R8     ; bu dahil �st�ndeki a�amalarda "b"
                  ; degerini eksiye cevirmek i�in.

loopformod:addi R0,R7,R0
jmpLE R5<=R0,loopformod
move RF,R0
halt


