#include<stdio.h>
//using namespace std;

int main()


{

// if given char[] array then first convert it into integer: no=atoi(ch);


char a[11][10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};


char b[11][10]={"","ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN",


"SEVENTEEN","EIGHTEEN","NINTEEN"};


char c[12][10]={"","TEN","TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY",


"EIGHTY","NINTY","HUNDRED"};


int no,t;




printf("\nEnter the number\n");


scanf("%d",&no);


if(no==0)
printf(" %s",a[0]); 		//handle 0 case

else if(no<9999)

{

 if(no>1000)		//when number > 1000
 {

  t=no/1000;				//get the MSB

  no=no%1000;		//remove that MSB

  printf("%s THOUSAND ",a[t]);
 }


 if(no>100)
 {
  t=no/100;

  no=no%100;

  printf(" %s HUNDRED ",a[t]);

 }

 if(no>19 && no<=100)
 {
  t=no/10;
  no=no%10;
  printf("%s",c[t]);

 }


if(no>10 && no<20)

 {
  t=no%10;
  printf(" %s",b[t]);
 }

if(no==10){					//handle 10 case
	 printf(" %s",c[1]);
}

if(no<10&&no>0)
 {
  printf(" %s",a[no]);
 }

}

else printf("Enter the small number");


}
