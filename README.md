# endian
Test if your machine is big or small endian

Compile .c file and run with compiler of your choice :)

Theory:

Consider the following value
0x12345678

Big endian stores the most significant bits (0x12) at the first memory address, giving the following format:
12(+0) 34(+1) 56(+2) 78(+3)

Little endian would be the opposite:
78(+0) 56(+1) 34(+2) 12(+3)

By loading the value 0x12345678 into memory on your machine, and grabbing the byte at offset +0 (exactly where the pointer is) should tell you whether or not your machine is big or small endian depending on its value :)
