#include<iostream>
#include<conio.h>
#include<exception>
using namespace std;

class choiceexception:public exception
{
public:
    const char* what()  const throw()
    {
        return "You have entered wrong choice\n                                               Please enter choice between 1 to 7";
    }
};

class person
{
public:
    string name;
    int phno;
    void getpersoninfo()
    {
        cout<<"Enter your name         : ";
        cin>>name;

            cout<<"Enter your phone number : ";
            cin>>phno;
        cout<<"\n\nHello "<<name<<"\n";
    }
};

class customer:public person
{
public:
    static int cstID;
    customer()
    {
        cstID++;
    }
    void addcustomerinfo()
    {
        getpersoninfo();
    }
    void getcustomerinfo()
    {
        cout<<"Customer ID           : "<<cstID<<endl;
        cout<<"Customer Name         : "<<name<<endl;
        cout<<"Customer Phone number : "<<phno<<endl;
    }
};
int customer::cstID=0;

class employee:public person
{
public:
    static int empID;
    int salary;
    employee()
    {
        empID++;
    }
    void addemployeeinfo()
    {
        getpersoninfo();
        cout<<"Enter salary            : ";
        cin>>salary;
    }
    void getcustomerinfo()
    {
        cout<<"Employee ID           : "<<empID<<endl;
        cout<<"Employee Name         : "<<name<<endl;
        cout<<"Employee Phone number : "<<phno<<endl;
        cout<<"Employee Salary       : "<<salary<<endl;
    }
};
int employee::empID=0;

class menu
{
public:
    string item1,item2,item3,item4;
    int price1,price2,price3,price4,choice;
    string getpizzaMenu()
    {
        start:
        item1="Chicken Fazita";item2="Chicken Bar BQ";item3="Chicken Peri Peri";item4="Creamy Max";
        cout<<"\n\t\t1) "<<item1<<"\n";
		cout<<"\t\t2) "<<item2<<"\n";
		cout<<"\t\t3) "<<item3<<"\n";
		cout<<"\t\t4) "<<item4<<"\n";
		cout<<"\nPlease Enter the choice of Pizza Flavor would you like to have? : ";
		cin>>choice;
		if(choice==1)
            return item1;
        else if(choice==2)
            return item2;
        else if(choice==3)
            return item3;
        else if(choice==4)
            return item4;
        else
        {
            cout<<"enter valid choice\n";
            goto start;
        }
    }
    int getPizzasize()
    {
       start:
       cout<<"\n1) Small Rs 250.00\n"<<"2) Regular Rs 500.00\n"<<"3) Large Rs 900.00\n";
       cout<<"\nChoose Pizza Size Please : ";
       cin>>choice;
       if(choice==1)
            return choice;
        else if(choice==2)
            return choice;
        else if(choice==3)
            return choice;
        else
        {
            cout<<"enter valid choice\n";
            goto start;
        }
    }
    int getburgermenu()
    {
        start:
        item1="Cheese Burger";item2="Mayonnaise Burger";item3="Veg Burger";
        cout<<"\n1 "<<item1<<" Rs 180"<<"\n";
		cout<<"2 "<<item2<<" Rs 160"<<"\n";
		cout<<"3 "<<item3<<" Rs 150"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>choice;
		if(choice==1)
            return choice;
        else if(choice==2)
            return choice;
        else if(choice==3)
            return choice;
        else
        {
            cout<<"enter valid choice\n";
            goto start;
        }
    }
    string getburger()
    {
        if(choice==1)
            return item1;
        else if(choice==2)
            return item2;
        else
            return item3;
    }
    int getsandwichmenu()
    {
        start:
        item1="Chicken Cheese Sandwich";item2="Veg Cheese Sandwich";item3="Veg Sandwich";
        cout<<"\n1 "<<item1<<" Rs 240"<<"\n";
		cout<<"2 "<<item2<<" Rs 160"<<"\n";
		cout<<"3 "<<item3<<" Rs 100"<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?: ";
		cin>>choice;
		if(choice==1)
            return choice;
        else if(choice==2)
            return choice;
        else if(choice==3)
            return choice;
        else
        {
            cout<<"enter valid choice\n";
            goto start;
        }

    }
    string getsandwich()
    {
        if(choice==1)
            return item1;
        else if(choice==2)
            return item2;
        else
            return item3;
    }
    int getteamenu()
    {
        start:
        item1="Masala Tea";item2="Coffee";item3="Green Tea";
        cout<<"\n1 "<<item1<<" Rs 15"<<"\n";
		cout<<"2 "<<item2<<" Rs 20"<<"\n";
		cout<<"3 "<<item3<<" Rs 30"<<"\n";
		cout<<"\nPlease Enter which Beverage you would like to have?: ";
		cin>>choice;
		if(choice==1)
            return choice;
        else if(choice==2)
            return choice;
        else if(choice==3)
            return choice;
        else
        {
            cout<<"enter valid choice\n";
            goto start;
        }
    }
    string gettea()
    {
        if(choice==1)
            return item1;
        else if(choice==2)
            return item2;
        else
            return item3;
    }

};
class order
{
public:
    menu m;
    float price;
    int itemsize,qty;
    string itemchoice;
    void takepizzaorder()
    {
       itemchoice=m.getpizzaMenu();
       itemsize=m.getPizzasize();
       cout<<"\nPlease Enter Quantity : ";
       cin>>qty;
       switch(itemsize)
       {
           case 1: price = 250.00*qty;
            break;

           case 2: price = 500.00*qty;
			break;

           case 3: price = 900.00*qty;
			break;
       }
       system("cls");
    }
    void takeburgerorder()
    {
        itemsize=m.getburgermenu();
        itemchoice=m.getburger();
        cout<<"\nPlease Enter Quantity : ";
        cin>>qty;
       switch(itemsize)
       {
           case 1: price = 180.00*qty;
            break;

           case 2: price = 160.00*qty;
			break;

           case 3: price = 150.00*qty;
			break;
       }
       system("cls");
    }
    void takesandwichorder()
    {
        itemsize=m.getsandwichmenu();
        itemchoice=m.getsandwich();
        cout<<"\nPlease Enter Quantity : ";
        cin>>qty;
        switch(itemsize)
        {
           case 1: price = 240.00*qty;
            break;

           case 2: price = 160.00*qty;
			break;

           case 3: price = 100.00*qty;
			break;
        }
        system("cls");
    }
    void taketeaorder()
    {
        itemsize=m.getteamenu();
        itemchoice=m.gettea();
        cout<<"\nPlease Enter Quantity : ";
        cin>>qty;
        switch(itemsize)
        {
           case 1: price = 15.00*qty;
            break;

           case 2: price = 20.00*qty;
			break;

           case 3: price = 30.00*qty;
			break;
        }
        system("cls");
    }
    float pizzabill()
    {
        cout<<"\t\t--------Your Order---------\n";
        cout<<""<<qty<<" "<<itemchoice;
        cout<<"\nYour Total Bill is \nRs "<<price<<"\n\nYour Order Will be served in 30 Minutes";
        return price;
    }
     float burgerbill()
    {
        cout<<"\t\t--------Your Order---------\n";
        cout<<""<<qty<<" "<<itemchoice;
        cout<<"\nYour Total Bill is \nRs "<<price<<"\n\nYour Order Will be served in 30 Minutes";
        return price;
    }
    float sandwichbill()
    {
        cout<<"\t\t--------Your Order---------\n";
        cout<<""<<qty<<" "<<itemchoice;
        cout<<"\nYour Total Bill is \nRs "<<price<<"\n\nYour Order Will be served in 30 Minutes";
        return price;
    }
    float teabill()
    {
        cout<<"\t\t--------Your Order---------\n";
        cout<<""<<qty<<" "<<itemchoice;
        cout<<"\nYour Total Bill is \nRs "<<price<<"\n\nYour Order Will be served in 30 Minutes";
        return price;
    }

};

class stall
{
public:
    int stallno;
    string stall_name;
    void getstallinfo()
    {
        cout<<"Stall number : "<<stallno<<endl;
        cout<<"Stall name   : "<<stall_name<<endl;
    }
};
class pizza_stall:public stall
{
public:
    static float psales;
    order o1;
    char beginning;
    float welcome()
    {
        starting:
        system("cls");
        o1.takepizzaorder();
        psales=psales+o1.pizzabill();
        cout<<"Would you like to order anything else? Y / N:";
        cin>>beginning;
        if(beginning=='Y' || beginning=='y')
        {
			  goto starting;
        }
        return psales;
    }
    float getsales()
    {
        return psales;
    }
};
float pizza_stall::psales=0;

class burger_stall:public stall
{
    public:
    static float bsales;
    order o2;
    char beginning;
    float welcome()
    {
        starting:
        system("cls");
        o2.takeburgerorder();
        bsales=bsales+o2.burgerbill();
        cout<<"Would you like to order anything else? Y / N:";
        cin>>beginning;
        if(beginning=='Y' || beginning=='y')
        {
			  goto starting;
        }
        return bsales;
    }
    float getsales()
    {
        return bsales;
    }

};
float burger_stall::bsales=0;

class sandwich_stall : public stall
{
    public:
    static float ssales;
    order o3;
    char beginning;
    float welcome()
    {
        starting:
        system("cls");
        o3.takesandwichorder();
        ssales=ssales+o3.sandwichbill();
        cout<<"Would you like to order anything else? Y / N:";
        cin>>beginning;
        if(beginning=='Y' || beginning=='y')
        {
			  goto starting;
        }
        return ssales;
    }
    float getsales()
    {
        return ssales;
    }
};
float sandwich_stall::ssales=0;
class tea_stall: public stall
{
    public:
    static float tsales;
    order o4;
    char beginning;
    float welcome()
    {
        starting:
        system("cls");
        o4.taketeaorder();
        tsales=tsales+o4.teabill();
        cout<<"Would you like to order anything else? Y / N:";
        cin>>beginning;
        if(beginning=='Y' || beginning=='y')
        {
			  goto starting;
        }
        else if(beginning=='N' || beginning=='n')
        {
			  return tsales;
        }
        return tsales;
    }
    float getsales()
    {
        return tsales;
    }
};
float tea_stall::tsales=0;
class court
{
public:
    static float grand_sales;
    employee e;
    int choice;
    void welcome()
    {
       customer c;
       c.addcustomerinfo();
    }
    void choosestall()
    {
            while(1)
            {
                main_menu();
                try
                {
                    cout<<"\nPlease Enter your Choice: ";
            cin>>choice;

        if(choice==1)
            {
            pizza_stall p;
            grand_sales+=p.welcome();
            }
        else if(choice==2)
            {
            burger_stall b;
            grand_sales+=b.welcome();

            }

        else if(choice==3)
            {
            sandwich_stall s;
            grand_sales+=s.welcome();

            }

        else if(choice==4)
            {
            tea_stall t;
            grand_sales+=t.welcome();

            }
        else if(choice==5)
            {
                pizza_stall p1;
                burger_stall b1;
                sandwich_stall s1;
                tea_stall t1;
                cout<<"\n\nSales of Pizza House  : "<<p1.getsales()<<endl;
                cout<<"Sales of Dublin's Burger  : "<<b1.getsales()<<endl;
                cout<<"Sales of Delight Sandwich : "<<s1.getsales()<<endl;
                cout<<"Sales of Hot n Tea        : "<<t1.getsales()<<endl;

            }
        else if(choice==6)
            {
                cout<<"The grand total of court : "<<getgrandtotal()<<endl;
            }
        else if(choice==7)
        {
            exit(0);
        }
        else
        {
                if(choice<0||choice>7)
                    throw choiceexception();

        }
            //system("cls");
        }
        catch(choiceexception &c)
    {
        cout<<"\n                         !!!!!!!!!! EXCEPTION:  "<<c.what()<<endl;
    }
            }

    }
    float getgrandtotal()
    {
     return grand_sales;
    }
    void  main_menu()
    {
    cout<<"\n\n\t\t\t                                What would you like to order?\n\n";

        cout<<"\t\t\t             |----------------------------------------------------------------|\n";
        cout<<"\t\t\t             |                         Food Court Stalls                      |\n";
        cout<<"\t\t\t             |----------------------------------------------------------------|\n";
        cout<<"\t\t\t              ================================================================\n";
        cout<<"\t\t\t             |                           1.Pizza House                        |\n";
        cout<<"\t\t\t              ================================================================\n";
        cout<<"\t\t\t             |                           2.Dublin's Burger                    |\n";
        cout<<"\t\t\t              ================================================================\n";
        cout<<"\t\t\t             |                           3.Delight Sandwich                   |\n";
        cout<<"\t\t\t              ================================================================\n";
        cout<<"\t\t\t             |                           4.Hot n Tea                          |\n";
        cout<<"\t\t\t              ================================================================\n";
        cout<<"\t\t\t             |                           5.Particular sales of stalls         |\n";
        cout<<"\t\t\t              ================================================================\n";
        cout<<"\t\t\t             |                           6.Grand Sales of Court               |\n";
        cout<<"\t\t\t              ================================================================\n";
        cout<<"\t\t\t             |                           7.Exit                               |\n";
        cout<<"\t\t\t              ================================================================\n";
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
}
};
float court::grand_sales=0;

int main()
{
    int choice;
    court ct;
    ct.welcome();
            ct.choosestall();
    return 0;
}
