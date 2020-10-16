void order(){system("cls");
	int o,p;
	bck:
    for(o=0;o<22;o++)
{
	    printf("%c  ",254);}
	
    printf(" Select restaurant of your choice  ");
        for( p=0;p<24;p++)
{
	    printf("%c  ",254);}
    
    printf("\n\n\n\n1.JAY BHAVANI\n\n2.KARNAVATI\n\n3.MLF\n\n4.SHREEJI\n\n5.TEA VILLA CAFE \n\n6.CHAI SUTTA BAR\n\n\ ");

    int in ;
    scanf("%d", & in );
    getchar();
    system("cls");
    switch ( in ) {
    case 1:
        {
            JAY_BHAVANI();
            break;
        }
    case 2:
        {
            KARNAVATI();
            break;
        }
    case 3:
        {
            MLF();
            break;
        }
    case 4:
        {
            SHREEJI();
            break;
        }
    case 5:
        {
            TEA_VILLA_CAFE();
            break;
        }
    case 6:
        {
            CHAI_SUTTA_BAR();
            break;
        }
        
     default : {
        printf ("Invalid selection try again\n");
        goto bck;
    }
	}
}

