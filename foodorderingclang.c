//food ordering system//
#include<stdio.h>
#include<stdlib.h>
struct user_details
{
	char name[30];
	int age;
	char email[30];
	char ph_no[50];
	char enter_password;
    char confirm_password;
}e;
void debit(); void phonepe(); void cod();
void main()
{
	char new_user,existing_user,passname[10]="EKTA";
	int choice,choice1,a,qty,total=0,price,rate,total1=0,pay;    
	printf("*************************WELCOME TO DELIVERY PRIME $$************************\n");
	printf("1 for new_user,2 for existing_user \n");
	scanf("%d",&choice);
	if(choice==1)
	{
	printf("signup by following details: name\nage\nemail\nph_no.\nenter_password\nconfirm_password");
	scanf("%s%d%s%s%s%s",&e.name,&e.age,&e.email,&e.ph_no,&e.enter_password,&e.confirm_password);
	}
	else
	{
		while(strcmp(e.name,passname)&&e.enter_password!=2409) {
		printf("enter username and password");
		scanf("%s%d",&e.name,&e.enter_password);
		if(strcmp(e.name,passname)&&e.enter_password!=2409)
		printf("invalid  user_name or password\n"); 
	}
	}
	printf("                       you are successfully logged in\n");
	printf("search for resturant\n");
	printf("press 1 for breakfast\npress 2 for lunch\npress 3 for dinner\n4 for exit\n");
	scanf("%d",&choice1);
	if(choice1==1)
	{
		do 
		{	
    printf("Enter your choice\n1rameshwari hotel\n2bagicha\n3exit");
    scanf("%d",&choice);
    if(choice==1)
   { 
    	printf("BREAKFAST MENU\n");
    	printf("sl_no    item                price\n\n");
    	printf("1.        oats poha           100\n");
    	printf("2.        idli sambhar        50\n"); 
    	printf("choose the item");
    	scanf("%d",&a);
    	switch(a)
    	{
    		case 1: printf("\n you have selected oats poha \n enter quantity:");
    		scanf("%d",&qty);
    		price=100;
    		total=total+qty*price;
    		break;
    		case 2: printf("\n you have selected idli sambhar\n enter quantity:");
    		scanf("%d",&qty);
    		price=50;
    		total=total+qty*price;		
    		break;
		}
	   printf("---------------------------------------------------------------------------\n");
	 }
    else if(choice==2)
    { 
    	printf("BREAKFAST MENU\n");
        printf("sl.no.    item                      price\n\n");
        printf("1.        Thepla                     40\n");
        printf("2.        multigrain paranthas       50\n");
        printf("choose the item");
    	scanf("%d",&a);
    	switch(a)
    	{
    		case 1: printf("\n you have selected thepla\n enter quantity:");
    		scanf("%d",&qty);
    		price=40;
    		total=total+qty*price;
    		break;
    		case 2: printf("\n you have selected multigrain paranthas\n enter quantity:");
    		scanf("%d",&qty);
    		price=50;
    		total=total+qty*price;
				break;
		}	
		printf("---------------------------------------------------------------------------\n");
	}
	else
	{    
		printf("\nTOTAL AMOUNT:%d\n",total);
			if(total>=1200)
	{    total1=total*0.15;
		printf("\nYOU GOT DISCOUNT OF %d\n",total1);
		total=total-total1;
	printf(" GRAND TOTAL : %d\n",total);
	}
		printf("-------------MODE OF PAYMENT------------\n");
printf("\n1.debit card\n2.phonepe\n3.COD\n4.exit");
scanf("%d",&pay);
switch(pay)
{
	case 1:debit();
	       break;
	case 2:phonepe();
	       break;
	case 3:cod();
	       break;
    case 4:exit(0);
	       break;	   	          
} 
if(pay==3)
{    
    printf(" TOTAL AMOUNT :%d\n",total); 
    printf("delivery charge:50\n");
	printf(" AMOUNT PAYABLE:%d\n",total+50);
}
			printf("--------------------------------------------------------------\n--------------------------------------------------------------");
	printf("     \nRATE OUR APP");
	printf("\n1.EXCELLENT\n2.GOOD\n3.AVERAGE\n4.NEED IMPROVEMENT");
	scanf("%d",&rate);
	printf("THANK YOU FOR RATING US \n SHARE YOUR EXPERIENCE ON INSTAGRAM AND TAG US ekta_jain2405\nAND EARN EXCITING REWARDS\n");
	printf("THANK YOU\nVISIT AGAIN");
		exit(0);
			}					
}while(choice!=3);
printf("---------------------------------------------------------------------------\n");
}
	else if(choice1==2)
	{
		do
		{
	printf("enter your choice\n1 for renuka's kitchen\n2 for sharma dhaba\n3.exit\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("LUNCH MENU\n");
    	printf("sl.no.    item                 price\n\n");
    	printf("1.       aloo paratha           50\n");
    	printf("2.       kaju masala            200\n");
    	printf("3.       butter kulchha         45\n");
    	printf("choose the item");
    	scanf("%d",&a);
    	switch(a)
    	{
    	case 1: printf("\n you have selected aloo paratha\n enter quantity:");
    		scanf("%d",&qty);
    		price=50;
    		total=total+qty*price;
    		break;
    	case 2: printf("\n you have selected kaju masala \n enter quantity:");
    		scanf("%d",&qty);
    		price=200;
    		total=total+qty*price;
    		break;
    	case 3: printf("\n you have selected butter kulchha\n enter quantity");
    		scanf("%d",&qty);
    		price=45;
    		total=total+qty*price;
    		break;
		}
		printf("---------------------------------------------------------------------------\n");
	}
	else if(choice==2)
	{
	    printf("LUNCH MENU\n");
    	printf("sl.no.    item                  price\n\n");
    	printf("1.        onion rice             150\n");
    	printf("2.        jeera rice             100\n");
    	printf("3.        dal fry                145\n");
    	printf("choose item\n");scanf("%d",&a);
    		switch(a)
    	{	
    	case 1: printf("\n you have selected onion rice\n enter quantity:");
    		scanf("%d",&qty);
    		price=150;
    		total=total+qty*price;
    		break;
    	case 2: printf("\n you have selected jeera rice\n enter quantity:");
    		scanf("%d",&qty);
    		price=100;
    		total=total+qty*price;
    		break;
    	case 3: printf("\n you have selected dal fry\n enter quantity");
    		scanf("%d",&qty);
    		price=145;
    		total=total+qty*price;
    		break;
		}
		printf("---------------------------------------------------------------------------\n");
	}
 else
{
	
	printf("\nTOTAL AMOUNT:%d",total);
	if(total>=1200)
	{    total1=total*0.15;
		printf("\nYOU GOT DISCOUNT OF %d\n",total1);
		total=total-total1;
	printf(" GRAND TOTAL : %d",total);
	}	
		printf("\n-------------MODE OF PAYMENT------------\n");
printf("\n1.debit card\n2.phonepe\n3.COD\n4.exit");
scanf("%d",&pay);
switch(pay)
{
	case 1:debit();
	       break;
	case 2:phonepe();
	       break;
	case 3:cod();
	       break;
    case 4:exit(0);
	       break;	   	          
} 
if(pay==3)
{    
    printf(" TOTAL AMOUNT :%d\n",total); 
    printf("delivery charge:50\n");
	printf(" AMOUNT PAYABLE:%d\n",total+50);
}
		printf("\n--------------------------------------------------------------\n--------------------------------------------------------------");
	printf("     \nRATE OUR APP");
	printf("\n1.EXCELLENT\n2.GOOD\n3.AVERAGE\n4.NEED IMPROVEMENT");
	scanf("%d",&rate);
	printf("THANK YOU FOR RATING US \n SHARE YOUR EXPERIENCE ON INSTAGRAM AND TAG US ekta_jain2405\nAND EARN EXCITING REWARDS\n");
	printf("THANK YOU\nVISIT AGAIN");
    exit(0);
}
}while(choice!=3);
printf("---------------------------------------------------------------------------\n");
}
	else if(choice1==3)
	{    do
	    {
	
		printf("enter your choice\n1 for frenzo\n2 for rock garden\n3.exit\n");
		scanf("%d",&choice);
		if(choice==1)
		{	
	    printf("DINNER MENU\n");
    	printf("sl.no.      item                       price\n\n");
    	printf("1.          CHOCOLATE BROWNI            150\n");
    	printf("2.          FRENCH FRIES                100\n");
    	printf("3.          CORN MANCHURI               145\n");
   	printf("choose the item");
    	scanf("%d",&a);
    	switch(a)
    	{
    	 case 1: printf("\n you have selected CHOCOLATE BROWNI\n enter quantity:");
    		scanf("%d",&qty);
    		price=150;
    		total=total+qty*price;
    		break;
    	case 2: printf("\n you have selected FRENCH FRIES\n enter quantity:");
    		scanf("%d",&qty);
    		price=100;
    		total=total+qty*price;
    		break;
    	case 3: printf("\n you have selected CORN MANCHURI\n enter quantity");
    		scanf("%d",&qty);
    		price=145;
    		total=total+qty*price;
    		break;
		}
		printf("---------------------------------------------------------------------------\n");
		}
		else if(choice==2)
		{	
	    printf("DINNER MENU\n");
    	printf("sl.no.    item                    price\n\n");
    	printf("1.        pesto pasta             150\n");
    	printf("2.        keto burger             100\n");
    	printf("3.        grilled sandwich        50\n");
    	printf("choose the item");
    	scanf("%d",&a);
    	switch(a)
    	{
    	case 1: printf("\n you have pesto pasta\n enter quantity:");
    		scanf("%d",&qty);
    		price=150;
    		total=total+qty*price;
    		break;
    	case 2: printf("\n you have selected keto burger\n enter quantity:");
    		scanf("%d",&qty);
    		price=100;
    		total=total+qty*price;
    		break;
    	case 3: printf("\n you have selected grilled sandwich\n enter quantity");
    		scanf("%d",&qty);
    		price=50;
    		total=total+qty*price;
    		break;
		}
		printf("---------------------------------------------------------------------------\n");
		}
	else
	{
		printf("\nTOTAL AMOUNT:%d\n",total);
			if(total>=1200)
	{    total1=total*0.15;
		printf("\nYOU GOT DISCOUNT OF %d\n",total1);
		total=total-total1;
	printf(" GRAND TOTAL : %d\n",total);
	}
	printf("-------------MODE OF PAYMENT------------\n");
printf("\n1.debit card\n2.phonepe\n3.COD\n4.exit");
scanf("%d",&pay);
switch(pay)
{
	case 1:debit();
	       break;
	case 2:phonepe();
	       break;
	case 3:cod();
	       break;
    case 4:exit(0);
	       break;	   	          
} 
if(pay==3)
{    
    printf(" TOTAL AMOUNT :%d\n",total); 
    printf("delivery charge:50\n");
	printf(" AMOUNT PAYABLE:%d\n",total+50);
}
		printf("--------------------------------------------------------------\n--------------------------------------------------------------");
	printf("     \nRATE OUR APP");
	printf("\n1.EXCELLENT\n2.GOOD\n3.AVERAGE\n4.NEED IMPROVEMENT");
	scanf("%d",&rate);
	printf("THANK YOU FOR RATING US \n SHARE YOUR EXPERIENCE ON INSTAGRAM AND TAG US ekta_jain2405\nAND EARN EXCITING REWARDS\n");
	printf("THANK YOU\nVISIT AGAIN");
		exit(0);	
	}
	}while(choice!=3);
	printf("---------------------------------------------------------------------------\n");
}
	else
	{    
	printf("--------------------------------------------------------------\n--------------------------------------------------------------");
	printf("     \nRATE OUR APP");
	printf("\n1.EXCELLENT\n2.GOOD\n3.AVERAGE\n4.NEED IMPROVEMENT");
	scanf("%d",&rate);
	printf("THANK YOU FOR RATING US \n SHARE YOUR EXPERIENCE ON INSTAGRAM AND TAG US ekta_jain2405\nAND EARN EXCITING REWARDS\n");
	printf("THANK YOU\nVISIT AGAIN");
		exit(0);	
	}
}
void debit()
{
   int accno,cvv;
   printf("enter your account no.\n");
   scanf("%d",&accno);
   printf("enter cvv\n");
   scanf("%d",&cvv);
   printf(" your transcation id: XXXXXXXXX\nPAYMENT SUCCESSFUL\n");
}	
 void phonepe()
 {  
    int pin;
 	printf("enter you pin");
 	scanf("%d",&pin);
 	printf(" your transcation id: XXXXXXXXX\nPAYMENT SUCCESSFUL\n");
 }	
void cod()
{ 
    printf("  'caution':choose online mode to avoid covid risks\n");
}


