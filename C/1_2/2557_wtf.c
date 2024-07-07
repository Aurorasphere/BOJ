int printf(const char *format, ...); 
#define lmao 0b00100000 
int main() 
{ 
    const char hehe[]=
    {
        lmao + 0b00101000,
        lmao + 0b01000101,
        lmao + 0b01001100,
        lmao + 0b01001100,
        lmao + 0b01001111,
        lmao + 0b00000000,
        lmao + 0b00110111,
        lmao + 0b01001111,
        lmao + 0b01010010,
        lmao + 0b01001100,
        lmao + 0b01000100,
        lmao + 0b00000001,
        lmao - 0b00100000
    };

    printf("%s",hehe); 
    return 0; 
} 