bal _Reset
_Reset:
 LDR sp, =stack_top
 BL start
 B .

