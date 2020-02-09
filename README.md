# ROT13
ROT13 function in C

The ASCII table represents uppercase letters as decimal values 65 through 90 and lowercase letters as values 97 through 122. You can add 13 to the uppercase letters until the resulting value is less than or equal to 90 or to the lowercase letters until the value is less than or equal to 122. When you go above you must implement your own way of causing the value to wrap around back to the minimum.

I wanted to make a ROT13 function for fun. I also wanted to make it using no lookup table and instead using mathematics.

Since ROT13 is a reciprocal cipher the code is both an encoder and a decoder. 

Compile and run with `./rot13 "This is a string to ROT13"` to get a ROT13 encoded string. You can also use a ROT13 encoded string as input to receive a decoded cleartext string.

# Real hackers use ROT26
