//prg to display decimal equivalent of binary value
#include<stdio.h>
int btod(int binary);
int main()
{
  int decimal,binary;
  printf("Enter a binary number: ");
  scanf("%d",&binary);
  decimal=btod(binary);
  printf("Decimal equivalent: %d",decimal);
  return 0;
}

int btod(int bin)
{
  if(bin==0)
    return 0;
  else
    return (bin%10 + btod(bin/10)*2);
}