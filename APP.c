#include <stdio.h>

#include <string.h>

#include <conio.h>

#include <stdlib.h>

#include <windows.h>

#include "order.h"

#include "login.h"

#include "gotoxy.h"

struct restaurants {
    char name[50];
    int price;
    int order_number;
    int number_of_food;
    int cost;
}
p[10000];
int order_count = 0;
int JAY_BHAVANI() {int n,in,qu;
FILE *fp;
level:
     
    printf(".............................................MENU...............................................\n\n");
    printf("Item Code#---------------------------------Description----------------------------------------------Price\n\n");
    printf("[11]---------------------------------------Vadapav--------------------------------------------------30\n\n");
    printf("[12]----------------------------------------Dabeli--------------------------------------------------25\n\n");
    printf("[13]---------------------------------------Hot Dog--------------------------------------------------50\n\n");
    printf("[14]---------------------------------------Cheese Puff----------------------------------------------30\n\n");
    printf("[15]---------------------------------------Grill Sandwich-------------------------------------------60\n\n");
    printf ("\nHow many different items you want to order? ");
    scanf ("%d", &n);
    while(n--){
	printf("Enter item code you want to order: ");
	int j;
	scanf("%d",&j);
    switch(j){	
	case 11 : {
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;

         p[order_count].cost += (30*qu);

        
        break;
    }
    case 12 :{
        

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        p[order_count].cost += (25*qu);

        break;
    }
    case 13 :{
       
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        p[order_count].cost += (50*qu);



        break;
    }
    case 14 :{
       

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        p[order_count].cost += (30*qu);

    

        

        break;
    }
    case 15 :{
       

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        p[order_count].cost += (60*qu);

    

        break;
    }
    default:
    	{
    		printf("INVALID INPUT,TRY AGAIN\n\n");
    			goto level;
		}

}
}
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fprintf(fp,"Final amount to be paid is Rs." "%d \n",p[order_count].cost);
		
	}
	printf("\n");
	fclose(fp);
printf("\nThank you for your order.\nYour bill is %d.\nOur delivery man will deliver your food at your default address.\nPlease wait while we prepare the food.\n\n", p[order_count].cost);
}


int KARNAVATI() {
	FILE *fp;
	level:
    printf("Select the food item of your choice\n");
    int j,qu,n;
    
    printf("............................................MENU....................................................\n\n");

    printf("Item Code#---------------------------------Description--------------------------------------------Price\n");

    printf("[11]---------------------------------------Vadapav-------------------------------------------------30\n");
    printf("[12]---------------------------------------Dabeli--------------------------------------------------25\n");
    printf("[13]---------------------------------------Cheese Slice--------------------------------------------30\n");
    printf("[14]---------------------------------------Cheese Puff---------------------------------------------30\n");
    printf("[15]---------------------------------------Burger--------------------------------------------------45\n");
    
     printf ("How many different items you want to order? ");
    scanf ("%d", &n);
    while(n--){
	printf("Enter item code you want to order");
	
	scanf("%d",&j);
    switch(j){

	
	case 11 : {
    

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

         p[order_count].cost += (30*qu);

        
        break;
    }
    case 12 :{
        

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        p[order_count].cost += (25*qu);

        break;
    }
    case 13 :{
       
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        p[order_count].cost += (30*qu);



        break;
    }
    case 14 :{
       

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        p[order_count].cost += (30*qu);

    

        

        break;
    }
    case 15 :{
       

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        p[order_count].cost += (45*qu);

    

        break;
    }
    default:
    	{
    		printf("INVALID INPUT,TRY AGAIN\n");
    			goto level;
		}

}
  
}
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fprintf(fp,"Final amount to be paid is Rs." "%d \n",p[order_count].cost);
		
	}
	printf("\n");
	fclose(fp);
printf("\nThank you for your order.\nYour bill is %d.\nOur delivery man will deliver your food at your default address.\nPlease wait while we prepare the food.\n\n", p[order_count].cost);
}
int MLF() {
	FILE *fp;
	level:
    printf("Select the food item of your choice\n");
    int m,e,quan;
    printf("................................................MENU......................................................\n\n");

    printf("Item Code#-----------------------------------Description-------------------------------------------------Price\n");

    printf("[11]----------------------------------------Manchurian Frankie--------------------------------------------85\n");
    printf("[12]---------------------------------------Paneer Frankie-------------------------------------------------85\n");
    printf("[13]----------------------------------------Cheese Maggie-------------------------------------------------50\n");
    printf("[14]---------------------------------------Cheese Corn Frankie--------------------------------------------80\n");
    printf("[15]-----------------------------------------Schezwan Frankie---------------------------------------------80\n");
       printf ("How many different items you want to order? ");
    scanf ("%d", &e);
    while(e--){
	printf("Enter item code you want to order");
	
	scanf("%d",&m);
    switch(m){

	
	case 11 : {
    

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        p[order_count].number_of_food +=quan;

         p[order_count].cost += (85*quan);

        
        break;
    }
    case 12 :{
        

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        p[order_count].number_of_food +=quan;

        p[order_count].cost += (85*quan);

        break;
    }
    case 13 :{
       
        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        p[order_count].number_of_food +=quan;

        p[order_count].cost += (50*quan);



        break;
    }
    case 14 :{
       

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        p[order_count].number_of_food +=quan;

        p[order_count].cost += (80*quan);

    

        

        break;
    }
    case 15 :{
       

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        p[order_count].number_of_food +=quan;

        p[order_count].cost += (80*quan);

    

        break;
    }
    default:
    	{
    		printf("INVALID INPUT,TRY AGAIN\n");
    			goto level;
		}

}

}
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fprintf(fp,"Final amount to be paid is Rs." "%d \n",p[order_count].cost);
		
	}
	printf("\n");
	fclose(fp);
printf("\nThank you for your order.\nYour bill is %d.\nOur delivery man will deliver your food at your default address.\nPlease wait while we prepare the food.\n\n", p[order_count].cost);
}
int SHREEJI() {
	FILE *fp;
	level:
    printf("Select the food item of your choice\n");
    int s,quant,r;
    printf("....................................MENU..................................................\n\n");

    printf("Item Code#-------------------------Description--------------------------------------------Price\n");

    printf("[11]------------------------------Vadapav--------------------------------------------------30\n");
    printf("[12]------------------------------Dabeli---------------------------------------------------25\n");
    printf("[13]------------------------------Aloo Mutter Sandwich-------------------------------------50\n");
    printf("[14]------------------------------Cheese Puff----------------------------------------------30\n");
    printf("[15]------------------------------Grill Sandwich-------------------------------------------60\n");

      printf ("How many different items you want to order? ");
    scanf ("%d", &r);
    while(r--){
	printf("Enter item code you want to order");
	
	scanf("%d",&s);
    switch(s){

	
	case 11 : {
    

        printf ("Please enter the quantity: ");
        scanf ("%d", &quant);
        getchar();

        p[order_count].number_of_food +=quant;

         p[order_count].cost += (30*quant);

        
        break;
    }
    case 12 :{
        

        printf ("Please enter the quantity: ");
        scanf ("%d", &quant);
        getchar();

        p[order_count].number_of_food +=quant;

        p[order_count].cost += (25*quant);

        break;
    }
    case 13 :{
       
        printf ("Please enter the quantity: ");
        scanf ("%d", &quant);
        getchar();

        p[order_count].number_of_food +=quant;

        p[order_count].cost += (50*quant);



        break;
    }
    case 14 :{
       

        printf ("Please enter the quantity: ");
        scanf ("%d", &quant);
        getchar();
        p[order_count].number_of_food +=quant;
        p[order_count].cost += (30*quant);  
        break;
    }
    case 15 :{
        printf ("Please enter the quantity: ");
        scanf ("%d", &quant);
        getchar();

        p[order_count].number_of_food +=quant;

        p[order_count].cost += (60*quant);

    

        break;
    }
    default:
    	{
    		printf("INVALID INPUT,TRY AGAIN\n");
    			goto level;
		}

}

}
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fprintf(fp,"Final amount to be paid is Rs." "%d \n",p[order_count].cost);
		
	}
	printf("\n");
	fclose(fp);
     printf("\nThank you for your order.\nYour bill is %d.\nOur delivery man will deliver your food at your default address.\nPlease wait while we prepare the food.\n\n", p[order_count].cost);
}
int TEA_VILLA_CAFE() {
	FILE *fp;
	level:
    printf("Select the food item of your choice\n");
    int t,quanti,y;
    printf("................................................MENU............................................................\n\n");

    printf("Item Code#----------------------------------------Description---------------------------------------------------Price\n");

    printf("[11]-----------------------------------------------Cold Coffee---------------------------------------------------120\n");
    printf("[12]------------------------------------------------Hot Brownie--------------------------------------------------180\n");
    printf("[13]-----------------------------------------------Garlic Bread--------------------------------------------------140\n");
    printf("[14]----------------------------------------------Blueberry Mocktail---------------------------------------------110\n");
    printf("[15]---------------------------------------------Litchi Juice----------------------------------------------------90\n");
     
     
    printf ("How many different items you want to order? ");
    scanf ("%d", &y);
    while(y--){
	printf("Enter item code you want to order");
	
	scanf("%d",&t);
    switch(t){

	
	case 11 : {
    

        printf ("Please enter the quantity: ");
        scanf ("%d", &quanti);
        getchar();

        p[order_count].number_of_food +=quanti;

         p[order_count].cost += (120*quanti);

        
        break;
    }
    case 12 :{
        

        printf ("Please enter the quantity: ");
        scanf ("%d", &quanti);
        getchar();

        p[order_count].number_of_food +=quanti;

        p[order_count].cost += (180*quanti);

        break;
    }
    case 13 :{
       
        printf ("Please enter the quantity: ");
        scanf ("%d", &quanti);
        getchar();

        p[order_count].number_of_food +=quanti;

        p[order_count].cost += (140*quanti);



        break;
    }
    case 14 :{
       

        printf ("Please enter the quantity: ");
        scanf ("%d", &quanti);
        getchar();

        p[order_count].number_of_food +=quanti;

        p[order_count].cost += (110*quanti);

        break;
    }
    case 15 :{
       

        printf ("Please enter the quantity: ");
        scanf ("%d", &quanti);
        getchar();

        p[order_count].number_of_food +=quanti;

        p[order_count].cost += (90*quanti);

    

        break;
    }
    default:
    	{
    		printf("INVALID INPUT,TRY AGAIN\n");
    			goto level;
    		
		}

}
 
}
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fprintf(fp,"Final amount to be paid is Rs." "%d \n",p[order_count].cost);
		
	}
	printf("\n");
	fclose(fp);
printf("\nThank you for your order.\nYour bill is %d.\nOur delivery man will deliver your food at your default address.\nPlease wait while we prepare the food.\n\n", p[order_count].cost);
}
int CHAI_SUTTA_BAR() {FILE *fp;
    level:
    printf("Select the food item of your choice\n");
    int c,quantit,u;
    printf("................................................MENU..................................................\n\n");

    printf("Item Code#----------------------------------------Description--------------------------------------------------Price\n\n");
    

    printf("[11]---------------------------------------------Tea-----------------------------------------------------------30\n\n");
    printf("[12]---------------------------------------------Coffee--------------------------------------------------------45\n\n");
    printf("[13]--------------------------------------------Cold Bourvita--------------------------------------------------50\n\n");
    printf("[14--------------------------------------------Maskabun--------------------------------------------------------30\n\n");
    printf("[15]--------------------------------------------Samosa---------------------------------------------------------30\n\n");
       
    printf ("How many different items you want to order? ");
    scanf ("%d", &u);
    while(u--){
	printf("Enter item code you want to order");
	
	scanf("%d",&c);
    switch(c){

	
	case 11 : {
    

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantit);
        getchar();

        p[order_count].number_of_food +=quantit;

         p[order_count].cost += (30*quantit);

        
        break;
    }
    case 12 :{
        

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantit);
        getchar();

        p[order_count].number_of_food +=quantit;

        p[order_count].cost += (45*quantit);

        break;
    }
    case 13 :{
       
        printf ("Please enter the quantity: ");
        scanf ("%d", &quantit);
        getchar();

        p[order_count].number_of_food +=quantit;

        p[order_count].cost += (50*quantit);



        break;
    }
    case 14 :{
    
        printf ("Please enter the quantity: ");
        scanf ("%d", &quantit);
        getchar();
        p[order_count].number_of_food +=quantit;
        p[order_count].cost += (30*quantit);      
        break;
    }
    case 15 :{
       

        printf ("Please enter the quantity: ");
        scanf ("%d", &quantit);
        getchar();

        p[order_count].number_of_food +=quantit;

        p[order_count].cost += (30*quantit);

    

        break;
    }
    default:
    	{
    		
    		printf("INVALID INPUT,TRY AGAIN\n");
    		goto level;
		}

}

}
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fprintf(fp,"Final amount to be paid is Rs." "%d \n",p[order_count].cost);
		
	}
	printf("\n");
	fclose(fp);
  printf("\nThank you for your order.\nYour bill is %d.\nOur delivery man will deliver your food at your default address.\nPlease wait while we prepare the food.\n\n", p[order_count].cost);
   
}
void Old_record(){system("cls"); FILE *fp;
	fp=fopen("data.txt","r");
	if(fp==NULL){
		printf("File not found");
	}
	while(!feof(fp)){
		char n;
		n = getc(fp);
		putc(n, stdout);
	}
	fclose(fp);
}
    
int main(){
	FILE *fp;
	p[order_count].order_number = 10000+order_count;
    
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    char c;
    int o,p;
    system("color B0");
    printf("\t\t\t\t\t\t\t\t   Welcome To Online Food Ordering\n\n\n");
    int k;
    back:
    login();
    gotoxy(51,18);
    int i;
    scanf("%d",&k);
	switch(k){
		{
		case 1:
			order();
			break;}
		case 2:
		 {
			   Old_record();
			break;}
		case 3:{
				for(i=0;i<5;i++){
		printf("\n");
	}
				exit(0);
		}
				  default : {
        printf ("Invalid selection try again\n");
        goto back;
        
    }
}
}
	


