 #include<iostream.h>
 #include<conio.h>
 #include<iomanip.h>

struct bill         
{ char* item;
  int qty;
  int price;
  int sp;
};

struct name
{ char* fname;
char* lname;
}a;
 void main()
 {
 clrscr();
bill b[13];
b[0].item="Veg Zinger";               b[0].price=105;
b[1].item="With Popcorn Chicken";     b[1].price=125;
b[2].item="With Hot and Crispy";      b[2].price=135;
b[3].item="With Veg Strips";          b[3].price=110;
b[4].item="Garlic Breadsticks";       b[4].price=105;
b[5].item="Stuffed Garlic Bread";     b[5].price=155;
b[6].item="Pasta Italiano White(v)";  b[6].price=145;
b[7].item="Pasta Italiano White(nv)"; b[7].price=165;
b[8].item="Choco Lava Cake";          b[8].price=105;
b[9].item="Butterscotch Mousse Cake"; b[9].price=85;
b[10].item="Coke";                    b[10].price=40;
b[11].item="Pepsi";                   b[11].price=40;
b[12].item="Sprite";                  b[12].price=40;

b[0].sp=2;
b[1].sp=1;b[2].sp=1;b[3].sp=2;b[4].sp=1;b[5].sp=1;b[6].sp=1;b[7].sp=0;b[8].sp=2;b[9].sp=0;b[10].sp=3;b[11].sp=3;b[12].sp=3;
 for(int i = 0;i<13;i++)
{
	b[i].qty=0;
}

cout<<"Enter your first name";
cin>>a.fname;
cout<<"Enter your last name";
cin>>a.lname;
 int choice=0;
 do
 {cout<<"**********WELCOME TO KFC**********"<<endl;
 cout<<"ITEM                           PRICE    "<<endl;cout<<endl;
  cout<<"BURGERS"<<endl;
 cout<<"1.Veg Zinger                   Rs.105"<<endl;

  cout<<"RICE"<<endl;
 cout<<"2.With Popcorn Chicken         Rs.125"<<endl;
 cout<<"3.With Hot and Crispy          Rs.135"<<endl;
 cout<<"4.With Veg Strips              Rs.110"<<endl;

  cout<<"BREAD"<<endl;
 cout<<"5.Garlic Breadsticks           Rs.105"<<endl;
 cout<<"6.Stuffed Garlic Bread         Rs.155"<<endl;

  cout<<"PASTA"<<endl;
 cout<<"7.Pasta Italiano White(v)      Rs.145"<<endl;
 cout<<"8.Pasta Italiano White(nv)     Rs.165"<<endl;

  cout<<"DESSERTS"<<endl;
 cout<<"9.Choco Lava Cake              Rs.105"<<endl;
 cout<<"10.Butterscotch Mousse Cake    Rs.85"<<endl;

  cout<<"BEVERAGES"<<endl;
 cout<<"11.Coke                        Rs.40"<<endl;
 cout<<"12.Pepsi                       Rs.40"<<endl;
 cout<<"13.Sprite                      Rs.40"<<endl;
 cout<<"To print bill enter 14"<<endl;
 cout<<endl;
 cout<<"Enter your choice (1-13)";
 cin>>choice;
 if(choice<14){(b[choice-1].qty)++;}else if(choice!=14){cout<<"invalid input";}
 }while(choice!=14);
//for total price
cout<<endl;
cout<<endl;
 int total = 0;
 for( i =0;i<13;i++)
{
	total += (b[i].qty)*(b[i].price);
}   cout<<"\t\t\tYour Orders:"<<endl;
for(int j =0 ; j<13;j++)
{
       if(b[j].qty>0)cout<<b[j].item;
       for(int i =0;i<=b[j].sp;i++)
       {
		cout<<"\t";
       }
       cout<<b[j].qty*b[j].price<<endl;
}cout<<endl;
cout<<"\t\tBILL"<<endl;
cout<<endl;
cout<<"VAT % =4%"<<endl;
cout<<a.fname<<a.lname<<" your estimated bill is :      \t"<< total<<endl;
total+=0.04*total;
cout<<"Your total bill(+Tax):      \t"<<total<<endl;
cout<<"\t\tTHANK YOU .VISIT US AGAIN";
getch();
}
