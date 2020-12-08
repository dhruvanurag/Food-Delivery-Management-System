#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
string name;
int s=0;
list<int> p;
char w;
int emp=34;
int stock=28;
list<string>l;


void bill()
{
      cout<<"\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t...................Bill..................."<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t.\tCibus Deus(Food Delivery APP)\t ."<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t.\tName:"<<name<<"\t\t         ."<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t\tBill:"<<s<<"\t\t         "<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t. Order will be delivered in 45 minutes  ."<<endl;
        cout<<"\t\t\t\t\t.     Thanks for ordering From our App\t ."<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t.\t\t\t\t\t ."<<endl;
        cout<<"\t\t\t\t\t.........................................."<<endl;
            cout<<"\t\t\t\t\t.........................................."<<endl;
}

	void stoveandcloves(){
		cout<<"welcome to Stoves And Cloves resturant.\nKindly select your desired option.\n[1]:Starters \n[2]:Pizza \n[3]:Main Course \n";
		int n;
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tSTARTERS      \n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Ceasar Salad\t\nRs: 600\n\n[2]:Chicken Strips\nRs: 190\n\n[3]:Peri Bites\nRS: 180\n\n[4]:Fries\n RS: 190\n\n[5]:Fries with Dip\n RS 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    int n1;
		    cin>>n1;
		    		  int a[]={600,190,180,190,250};
		    if(n1==1){
		    	//price[]=a[0];
		    	//t+=a[0];
		    	cout<<"CeasarSalad";
		    	l.push_back("Ceasar Salad");
		    	s=s+a[n1-1];
		    	p.push_back(a[n1-1]);
		    	//i+=1;
			}
			else if(n1==2)
			{
				//price[]=a[1];
				//t+=a[1];
		    	cout<<"Rolls";
		    	l.push_back("Chicken Strips");
		    	s=s+a[n-1];
		    	p.push_back(a[n1-1]);
		    	//i+=1;

			}
			else if(n1==3){
				//price[]=a[2];
				//t+=a[2];
		    	cout<<"PeriBites";
		    	l.push_back("PeriBites");
		    	s=s+a[n-1];
		    	p.push_back(a[n1-1]);
		    	//i+=1;
			}
			else if(n1==4)
			{
				//price[]=a[3];
				//t+=a[3];
		    	cout<<"Fries";
		    	l.push_back("Fries");
		    	s=s+a[n-1];
                p.push_back(a[n1-1]);
		    	//i+=1;
			}
			else if(n1==5){
				//price[]=a[4];
				//t+=a[4];
		    	cout<<"FrieswithDip";
		    	l.push_back("FrieswithDip");

                p.push_back(a[n1-1]);
                 s=s+a[n-1];
		    	//i+=1;
			}
		 }

		if(n==2){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tMAIN    COURSE\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Grilled Sandwich\nRs: 600\n\n[2]:Penne Arrabiata\nRs: 410\n\n[3]:Fettuccine Alfredo\nRS: 800\n\n[4]:Classic Beef Burger\n RS: 400\n\n[5]:Chicken Mushroom Burger\n RS 550";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    int n1;
		    cin>>n1;
		    		  int a[]={600,410,800,400,550};
		    if(n1==1){
		    	//price[]=a[0];
		    	//t+=a[0];
		    	cout<<"GrilledSandwich";
		    	l.push_back("GrilledSandwich");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==2)
			{
				//price[]=a[1];
				//t+=a[1];
		    	cout<<"PenneArrabiata";
		    	l.push_back("PenneArrabiata");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];
		    	//i+=1;

			}
			else if(n1==3){
				//price[]=a[2];
				//t+=a[2];
		    	cout<<"FetuccinneAlfredo";
		    	l.push_back("FetuccinneAlfredo");
                p.push_back(a[n1-1]);
                s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==4)
			{
				//price[]=a[3];
				//t+=a[3];
		    	cout<<"ClassicBeefBurger";
		    	l.push_back("ClassicBeefBurger");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];


		    	//i+=1;
			}
			else if(n1==5){
				//price[]=a[4];
				//t+=a[4];
		    	cout<<"MushroomBurger";
                l.push_back("MushroomBurger");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];

		    	//i+=1;
			}

		}
		if(n==3){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tPIZZAS        \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Margherita\nRs: 600\n\n[2]:Tikka\nRs: 410\n\n[3]:Hot & Spicy\nRS: 800\n\n[4]:Pepperoni\n RS: 400\n\n[5]:Mediterranean Pizza\n RS 550";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY \n"	;
		   int n1;
		    cin>>n1;
				  int a[]={600,410,800,400,550};
		    if(n1==1){
		    	//price[]=a[0];
		    	//t+=a[0];
		    	cout<<"Margherita";
		    	 l.push_back("Margherita");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==2)
			{
				//price[]=a[1];
				//t+=a[1];
		    	cout<<"Tikka";
		    	 l.push_back("Tikka");
                p.push_back(a[n1-1]);
                s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==3){
				//price[]=a[2];
				//t+=a[2];
		    	cout<<"HotandSpicy";
		    	 l.push_back("HotandSpicy");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==4)
			{
				//price[]=a[3];
				//t+=a[3];
		    	cout<<"Pepperoni";
		    	 l.push_back("Pepperoni");
                p.push_back(a[n1-1]);
                s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==5){
				//price[]=a[4];
				//t+=a[4];
		    	cout<<"MediterraneanPizza";
		    	 l.push_back("MediterraneanPizza");
                p.push_back(a[n1-1]);
                s=s+a[n1-1];
		    	//i+=1;
			}
		}
		int q;
		system("cls");
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		system("cls");
		if(q==1)
		{
			stoveandcloves();


		}
		else if(q==2)
		{
            bill();
		}
		else if(q==3){
         list <string> :: iterator it;
    for(it = l.begin(); it != l.end(); ++it)
        cout << '\t' << *it<<endl;
		cout<<"do you want to delete an item? (Y/N)";
		cin>>w;
		while(w=='y'||w=='Y'){
		{
		    cout<<"Enter the food you want to delete";
		    string p;
		    cin>>p;
             list <string> :: iterator it;
    for(it = l.begin(); it != l.end(); ++it)
        {
            if(*it==p)
            l.erase(it);
            else
            cout<<"not found";

        }
			cout<<"do you want to delete an item? (Y/N)";
				cin>>w;

		if(w=='n'||w=='N')
		{
			break;
		}
			}
			}

				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";

				cin>>q;

		if(q==1)
		{
			stoveandcloves();
		}
		else if(q==2)
		{
		bill();
		}




}
	}
void AM()
	{
		cout<<"welcome to A.M. REsturant resturant.\nKindly select your desired option.\n[1]:Non-VEG\n[2]Veg";
		int n;
		cout<<endl;
		cin>>n;


		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBREAKFAST DEALS\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Egg Sandwich with Spread Cheese with coffee\t\nRs: 60\n\n[2]:Chicken Mayo Garlic Wrap With Coffe\nRs: 110\n\n[3]:Falafel Wrap With Coffee\nRS: 100\n\n[4]:Chicken Strip Wrap With Coffee\n RS: 400\n\n[5]:Chicken Kabab Wrap With Coffee\n RS 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n"	;
           int n1;
		    cin>>n1;
		    		  int a[]={60,110,100,500,250};
		    if(n1==1){
		    	//price[i]=a[0];
		    	//t+=a[0];
		    	cout<<"EggSandwich";
		    	 l.push_back("EggSandwich");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==2)
			{
				//price[i]=a[1];
				//t+=a[1];
		    	cout<<"CickenMayoGarlicWrap";
		    	 l.push_back("ChickenMayoGarlicWrap");
                p.push_back(a[n1-1]);
                s=s+a[n1-1];
		    	//i+=1;

			}
			else if(n1==3){
				//price[i]=a[2];
				//t+=a[2];
		    	cout<<"FalafelWrap";
		    	 l.push_back("FalafelWrap");
                p.push_back(a[n1-1]);
                s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==4)
			{
				//price[i]=a[3];
				//t+=a[3];
		    	cout<<"Chickenstripwrap";
		    	 l.push_back("Chickenstripwrap");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==5){
				//price[i]=a[4];
				//t+=a[4];
		    	cout<<"ChickenKababWrap";
		    	 l.push_back("ChickenKababWrap");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];
		    	//i+=1;
			}
		 }

		if(n==2){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tFASTFOOD  DEALS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:4 Zing burgers, 4 regular fries & 1.5 litre soft drink\nRs: 600\n\n[2]:4 GMC burgers, 4 regular fries & 1.5 litre soft drink\nRs: 510\n\n[3]:3 Breast Pieces with regular fries & hot garlic mayo sauce\nRS: 100\n\n[4]:Beef Zinger Burger With 300 ml pepsi\n RS: 400\n\n[5]:Grilled Chicken Burger With 300 ml pepsi\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    int n1;
		    cin>>n1;
				  int a[]={600,510,100,400,250};
		    if(n1==1){
		    	//price[i]=a[0];
		    	//t+=a[0];
		    	cout<<"4ZingburgersDeal";
		    	 l.push_back("4ZingburgersDeal");
                p.push_back(a[n1-1]);
                s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==2)
			{
				//price[i]=a[1];
				//t+=a[1];
		    	cout<<"4GMCBurgerDeal";
		    	l.push_back("GMCBurgerDeal");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];

		    	//i+=1;

			}
			else if(n1==3){
				//price[i]=a[2];
				//t+=a[2];
		    	cout<<"3ChickenBreastPiecesDeal";
		    	l.push_back("3ChickenBreastPieceDeal");
                p.push_back(a[n1-1]);
                s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==4)
			{
				//price[i]=a[3];
				//t+=a[3];
		    	cout<<"BeefZingerBurgerDeal";
		    	l.push_back("BeefZingerBurgerDeal");
                p.push_back(a[n1-1]);
                s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==5){
				//price[i]=a[4];
				//t+=a[4];
		    	cout<<"GrilledChickenDeal";
		    	l.push_back("GrilledChickenDeal");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];
		    	//i+=1;
			}
		}
		 int q;
		system("cls");
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		system("cls");
		if(q==1)
		{
			AM();


		}
		else if(q==2)
		{
            bill();
		}
		else if(q==3){
         list <string> :: iterator it;
    for(it = l.begin(); it != l.end(); ++it)
        cout << '\t' << *it<<endl;

	   }

        cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";

				cin>>q;

		if(q==1)
		{
			stoveandcloves();
		}
		else if(q==2)
		{
		bill();
		}


	}
void r(){
		cout<<"Welcome to DESERT HUT.\nKindly select your desired option.\n[1]:EXCLUSIVIE DESSERTSS\n[2]:CAKES\n";
		int n;
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                          \tEXCLUSIVE DESSERT\n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]:Creme Brulee\nRS:300\n\n[2]:Nutella Sundae\nRS: 350\n\n[3]:Red Velvet Sundae\nRS 450\n\n[4]:Summer Berry Grunt\nRS:80 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    int n1;
		    cin>>n1;
		    int a[]={300,350,450,80};
		    if(n1==1){
		    	////price[i]=a[0];
		    	////t+=a[0];
		    	cout<<"CremeBrulee";
		    	l.push_back("CremeBrulee");
                p.push_back(a[n1-1]); s=s+a[n1-1];
		    	////i+=1;
			}
			else if(n1==2)
			{
				////price[i]=a[1];
				////t+=a[1];
				cout<<"NutellaSundae";
				l.push_back("NutellaSundae");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];
				////i+=1;
			}
			else if(n1==3){
				////price[i]=a[2];
				////t+=a[2];
				cout<<"RedVelvetSundae";
				l.push_back("4REdVelvetSundae");
                p.push_back(a[n1-1]);
                 s=s+a[n1-1];
				////i+=1;
			}
			else if(n1==4)
			{
				////price[i]=a[3];
				////t+=a[3];
				cout<<"SummerBerryGrunt";
				l.push_back("SummerBerryGrunt");
                p.push_back(a[n1-1]);
                s=s+a[n1-1];
				////i+=1;
			}
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                            CAKES\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Cadbury Dairy Milk\t\nRs: 1000\n\n[2]:Mousse Cake\nRs: 1100\n\n[3]:Maltesers\nRS: 1200\n\n[4]:Belgian Chocolate Cake\n RS: 1600\n\n[5]:Chocolate Heaven\n RS 250\n\n[6]:Kit Kat Cake\n RS:1100";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    int n1;
		    cin>>n1;
		  int a[]={1000,1100,1200,1600,2500,1100};
		    if(n1==1){
////price[i]=a[0];
	//	    	//t+=a[0];
		    	cout<<"CadburyDairyMilk";
		    	l.push_back("CadburyDairyMilk");
                p.push_back(a[n1-1]); s=s+a[n1-1];
		//    	//i+=1;
			}
			else if(n1==2)
			{
				//price[i]=a[1];
				//t+=a[1];
		    	cout<<"MouseCake";
		    	l.push_back("MouseCake");
                p.push_back(a[n1-1]); s=s+a[n1-1];
		    	//i+=1;

			}
			else if(n1==3){
				//price[i]=a[2];
				//t+=a[2];
		    	cout<<"Maltesers";
		    	l.push_back("Maltesers");
                p.push_back(a[n1-1]); s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==4)
			{
				//price[i]=a[3];
				//t+=a[3];
		    	cout<<"BelgianChocolateCake";
		    	l.push_back("BelgianChocolateCake");
                p.push_back(a[n1-1]); s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==5){
				//price[i]=a[4];
				//t+=a[4];
		    	cout<<"ChocolateHeaven";
		    	l.push_back("ChocolateHeaven");
                p.push_back(a[n1-1]); s=s+a[n1-1];
		    	//i+=1;
			}
			else if(n1==6)
			{
				//price[i]=a[5];
				//t+=a[5];
		    	cout<<"KitKatCake";
		    	l.push_back("KitKateCake");
                p.push_back(a[n1-1]); s=s+a[n1-1];
		    	//i+=1;
			}
		 }
		 int q;
		system("cls");
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		system("cls");
		if(q==1)
		{
			r();


		}
		else if(q==2)
		{
            bill();
		}
		else if(q==3){
        //`char l;
         list <string> :: iterator it;
    for(it = l.begin(); it != l.end(); ++it)
        cout << '\t' << *it<<endl;

				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";

				cin>>q;

		if(q==1)
		{
			stoveandcloves();
		}
		else if(q==2)
		{
		bill();
		}

	   }}

void ccolor(int clr){

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, clr);

}
void welcome(){
	system("COLOR F0");

	char welcome[50]="WELCOME";
	char welcome2[50]=" TO";
	char welcome3[50]=" FOOD ORDER";
	char welcome4[50]=" Delivery SYSTEM";
	printf("\n\n\n\n\n\t\t\t");
	for(int wlc=0; wlc<strlen(welcome);wlc++){
             ccolor(120+(wlc*9));

		printf(" %c",welcome[wlc]);
		Sleep(300);
	}
	system("COLOR F0");
	printf("\n\n\t\t\t\t ");
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){
            ccolor(160+(wlc2*9));

		printf(" %c",welcome2[wlc2]);
		Sleep(300);
	}
	system("COLOR F0");
	printf("\n\n\n\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){
		    ccolor(121+(wlc3*4));

			printf(" %c",welcome3[wlc3]);
		}
		else{
		    ccolor(11);

			printf(" %c",welcome3[wlc3]);
		}

		Sleep(300);
	}
	system("COLOR F0");
	printf("\n\n\n\t\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome4) ;wlc3++){
		if(welcome4[wlc3]!='C' && welcome4[wlc3]!='Y'){
                ccolor(121+(wlc3*4));

			printf(" %c",welcome4[wlc3]);
		}
		else{
		    system("COLOR F0");

			printf(" %c",welcome4[wlc3]);
		}
		Sleep(300);
	}
	system("COLOR F0");

}
void loadingbar(void){

	for (int i=65;i<=100;i+=5){

		system("cls");
		ccolor(12);

		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("%d %% Loading...\n\n\t\t",i);

		printf("");

		for (int j=0; j<i;j+=4){

			ccolor(160+j);
			printf(" ");
			system("COLOR F0");

		}
		Sleep(200);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(100);
		}

	}}

void foodlist()
{
    system("cls");
    cout<<"enter your location"<<endl;
    string location;
    cin>>location;
    cout<<"Finding resturant in Your Location"<<endl;
    loadingbar();
    system("cls");
  cout<<"\nRestaurants found near "<<location<<"! Please choose your desired restaurant to view their menu: \n";
			cout<<"[1]Desert Hut(Highly Recommended)\n";
			cout<<"[2]AM Resturant\n";
			cout<<"[3]Stoves and Cloves\n";
    int n;
    cin>>n;
			if(n==1)
			{
			    r();
			}
			else if(n==2)
            {
                AM();
            }
            else if(n==3)
            {
                stoveandcloves();
                  }


}


int login()
{
    system("cls");
    FILE *fptr;
    char email[20],password[20];
    cout<<"Enter email mail:";
    cin>>email;
    cout<<"Enter password:";
    char pass1[40] = { 0 };
    char ch = '\0';
    int i = 0;;
    while(ch != 13)
    {
        ch = _getch();
        _putch('*');
        pass1[i] = ch;
        i++;
    }
    pass1[i - 1] = '\0';
    getchar();
    fptr=fopen("signup.txt","r");
    rewind(fptr);
    char name[20];
    int d=0,p;
    while(!feof(fptr))
    {
        i++;
        fscanf(fptr,"%s # %s \n",name,password);
        if(strcmp(name,email)==0&&strcmp(pass1,password)==0)
        {
            d=1;
            cout<<"YOU have succussfully login.";
            foodlist();
            break;
        }
    }
    fclose(fptr);
    if(d==0)
    {
        cout<<"Worng email and password \n to continue press 1.";
        cin>>p;
        if(p==1)
        {
            login();
        }
          //  main();
    }
}


int signup()
{
    system("cls");
    FILE *fptr;
    char email[20],password[20];
    cout<<"Enter email mail";
    cin>>email;
    cout<<"Enter password";
    char pass1[40] = { 0 };
    char ch = '\0';
    int i = 0;;
    while(ch != 13)
    {
        ch = _getch();
        _putch('*');
        pass1[i] = ch;
        i++;
    }
    pass1[i - 1] = '\0';
    getchar();
    fptr=fopen("signup.txt","a");
    rewind(fptr);
    fprintf(fptr,"%s # %s \n",email,pass1);
    fclose(fptr);
    login();
}


void page1()
{
    cout<<endl;
    cout<<"1) Login"<<endl;
    cout<<endl;
    cout<<"2) Sign in"<<endl;
    cout<<endl;
    int m;
    cin>>m;
    if(m==1)
    login();
    else
    signup();
}


struct Node{

	string foodname;
	int quantity;
	float price;
	int data;
	struct Node *next;

};
void page2()
{
    system("cls");
    cout<<"1)Log In"<<endl;
    cout<<"2)Return "<<endl;
    int k;
    cin>>k;
    if(k==1)
    {
        system("cls");
        cout<<"Enter Email"<<endl;
        string s;
        cin>>s;
        cout<<endl;
        cout<<"Enter Password"<<endl;
        int p;
        cin>>p;
        if(s=="Nikhil" && p==1234)
            cout<<"YES";
        else
            cout<<"NO";

    }

}
void control_panel(){
	system("pause");
	system("cls");
	cout<<endl<<"-------------------------------------------------------------"<<endl;
	cout<<"1:for editing stocks"<<endl<<"2:for checking stocks"<<endl;
	cout<<"3:for editing employee number"<<endl<<"4:for checking total employees"<<endl;
	cout<<"5: to exit";
	cout<<endl;
	int v;
	cin>>v;
	if(v==1){
	int tst;
	cout<<endl<<"Enter the total number of stock that you want to set"<<endl;
	cin>>tst;
	stock=tst;
	control_panel();
}
else if(v==2){
	cout<<stock;
}
else if(v==3){
	cout<<endl<<"Enter the updated amount of employees, current employees are"<<endl;
	int en;
	cin>>en;
	emp=en;
}
else if(v==4){
	cout<<endl<<"Current employeees are"<<endl;
	cout<<emp;
}
else{
    exit(0);
}
}
void admin()
{
        char passOrig[] = "1234";
        cout<<"Enter The Password"<<endl;
        char pass1[40] = { 0 };
        char ch = '\0';
        int i = 0;
        while(ch != 13)
        {
            ch = _getch();
            _putch('*');
            pass1[i] = ch;
            i++;
        }
        pass1[i - 1] = '\0';
        getchar();
       if(strcmp(pass1, passOrig) == 0)
        {
            cout << "\n";
            control_panel();
        }
        else
        {
            cout<<"Incorrect Credential"<<endl;
            int h;
            cout<<"enter 1 to go back and 0 to exit";
            admin();
        }
}
int main()
{
    int c;
    loadingbar();
    welcome();
    system("cls");
    //ssdelay(1000);
    system("COLOR F0");

	{time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	cout << "\n\n\t\t\t\tCURRENT TIME:\n";
	cout << "\t\t\t\t\t\t"<<timePtr->tm_hour << ":"<< timePtr->tm_min << ":"<< timePtr->tm_sec << endl;
	cout << "\t\t\t\tToday's Date: " <<endl;
	cout << "\t\t\t\t\t\t"<<timePtr->tm_mday << "/" << timePtr->tm_mon+1 << "/" << timePtr->tm_year+1900  <<endl<<endl;

	}
	cout<<"\n\t\t\t\tFOOD DELIVERY MANAGEMENT SYSTEM\n";
	cout<<endl;
	cout<<"\t\t\t\t\t\tCibus Deus\n";
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\tTeam Members:\nNikhil Chandna(18103281)\nMudit Jain(18103324)\nDhruv Anurag(18103310)\n\n\n";
	system("pause");
	system("cls");

    cout<<"1:Customer Panel"<<endl;
    cout<<endl;
    cout<<"2:Admin Panel"<<endl;
    cout<<endl;
    cout<<"3:Return Back"<<endl;
    cout<<endl;
    int n;
    cin>>n;
    if(n==1)
    {
        system("cls");
        cout<<"Enter your Name"<<endl;
        cin>>name;
        system("cls");
        cout<<"Welcome"<<" "<<name<<" "<<"to"<<"Cibus Deus"<<endl;
        page1();
    }
    else if(n==2)
    {
        admin();
    }

}





