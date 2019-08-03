#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* encode(char* input) {
    char *s="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/0123456789";
    char *output=malloc((((strlen(input)*4)/3)+5)*sizeof(char));
    int i=0;
    int index=0,len=strlen(input);
    
    for(i=0;i<len-2;i=i+3)
    {
        output[index++]=s[input[i]>>2];
        output[index++]=s[(( input[i]&0x03 )<<4 ) | ((input[i+1] & 0xF0)>>4)];
        output[index++]=s[((input[i+1]&0x0F)<<2) | (input[i+2]&0xC0)>>6];
        output[index++]=s[((input[i+2]&0x3F))];
    }
    if(len%3==1)
    {
       output[index++]=s[input[i]>>2];
       output[index++]=s[(( input[i]&0x03 )<<4 )];
       output[index++]= '=';
       output[index++]= '=';
        
    }else{
        if(len%3==2)
        {
            output[index++]=s[input[i]>>2];
            output[index++]=s[((input[i]&0x03)<<4 ) | ((input[i+1] & 0xF0)>>4)];
            output[index++]=s[((input[i+1]&0x0F)<<2)];
            output[index++]= '=';
            
        }
    }
    return output;
}
int main() {
   printf("%s",encode("Man"));
}