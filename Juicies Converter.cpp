#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

void LengthConverter()
{

    char commands [32]; // will hold the users commands in prompt
	char commandToQuitSubMenus = 'n'; //will hold the command to quite submenus
	char cmmORmcm [32]; // CM-M or M-CM
	char inchesOrFeet [32]; // Inches or Feet

	float feet;
	float cm;
	float meter;
	float inch;

    int s=0;
      while(s==0)
	{
		cout << "\t\t\t\tConverter V1 > ";
		cout<<"enter ? or Help for Command and Action menu "<<endl;
		cin >> commands ;
		if (commands [0] == '?' || commands [0] == 'h' && commands [1] == 'e' // Help Command starts
			&& commands [2] == 'l' && commands [3] == 'p') // Help Command starts
		{
			cout << "\n\n                              Converter Help\n" << endl;
			cout << "   Commands  |    Action" << endl;
			cout << "   *********************\n" << endl;
			cout << "   cm-m      |  ( Centimeters-Meters )" << endl;
			cout << "   inc-feet  |  ( Inches-Feet )" << endl;
			cout << "   feet-yard |  ( Feet-Yard )" << endl;
			cout << "   inc-yard  |  ( Inches-Yards )" << endl;
			cout << "   ?         |  Help" << endl;
			cout << "   help      |  Help" << endl;
			cout << "   <<        |  Go down one directory" << endl;
			cout << "   bye       |  Quit ( Must be in lowest level )" << endl;
		} // Help command ends
		if (commands [0] == 'c' && commands [1] == 'm' && commands [2] == '-' // CM-M starts
			&& commands [3] == 'm') // CM-M starts
		{
			cout << "\n                      Centimeters to Meters Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) CM-M \n    or \n 2) M-CM" << endl;
				cout << "Converter V1\\cm-m > ";
				cin >> cmmORmcm;
				if (cmmORmcm[0]== '1')
				{
					cout << "How many centimeters to convert to meters?" << endl;
					cout << "Converter V1\\cm-m\\CM-M > ";
					cin >> cm;
					meter = cm/100;
					cout << "\n" << cm << "cm = " << meter << "m" << endl;
				}
				if (cmmORmcm[0] == '2')
				{
					cout << "How many meters to convert to centimeters?" << endl;
					cout << "Converter V1\\cm-m\\M-CM > ";
					cin >> meter;
					cm = meter*100;
					cout << "\n" << meter << "m = " << cm << "cm" << endl;
				}
				if (cmmORmcm [0] == '<' && cmmORmcm [1] == '<')
				{
					break;
				} // CM-M ends
			}
		}
		if (commands [0] == 'i' && commands [1] == 'n' && commands [2] == 'c' && // Inches-Feet begins
			commands [3] == '-' && commands [4] == 'f' && commands [5] == 'e' &&
			commands [6] == 'e' && commands [7] == 't')
		{
			cout << "\n                      Inches to Feet Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) Inches-Feet \n    or \n 2) Feet-Inches" << endl;
				cout << "Converter V1\\inc-feet > ";
				cin >> inchesOrFeet;
				if (inchesOrFeet [0] == '1')
				{
					cout << "\nHow many inches to convert to feet?\n" << endl;
					cout << "Converter V1\\inc-feet\\Inches-Feet > ";
					cin >> inch;
					feet = inch/12;
					cout << "\n" << inch << "\" = " << feet << "'" << endl;
				}
				if (inchesOrFeet [0]  == '2')
				{
					cout << "\nHow many feet to convert to inches?\n" << endl;
					cout << "Converter V1\\inc-feet\\Feet-Inches > ";
					cin >> feet;
					inch = feet*12;
					cout << "\n" << feet << "' = " << inch << "\"" << endl;
				}
				if (inchesOrFeet [0] == '<' && inchesOrFeet [1] == '<')
				{
					break;
				} // Inches-Feet ends
			}
		}

		if (commands [0] == 'b' && commands [1] == 'y' && commands [2] == 'e') // Quit command
		{

              s++;
			break; // Exit command (program termanation)
		}
	}
}

void MassConverter()
{
   char commands [32]; // will hold the users commands in prompt
	char commandToQuitSubMenus = 'n'; //will hold the command to quite submenus
	char M2G[32];
	char K2G[32];
	char P2K[32];
	char P2G[32];

    float milli;
    float gram;
    float pound;
    float kilogram;

    int s=0;
      while(s==0)
	{
		   cout << "\t\tConverter V1 > "<<endl;
		   cout<<"enter ? or Help for Command and Action menu "<<endl;
		   cin >> commands ;
		   if (commands [0] == '?' || commands [0] == 'h' && commands [1] == 'e' // Help Command starts
			     && commands [2] == 'l' && commands [3] == 'p') // Help Command starts
		{
			cout << "\n\n                              Converter Help\n" << endl;
			cout << "   Commands    |    Action" << endl;
			cout << "   *********************\n" << endl;
            cout << " milli-gm      |    ( Milligram-Gram ) " <<endl;
            cout << " gm-milli      |     ( Gram-Milligram ) " <<endl;
            cout << " gm-kg         |    ( Gram-Kilogram  ) " <<endl;
            cout << " kg-gm         |    ( Kilogram-gram  ) " <<endl;
            cout << " kg-pound      |    ( Kilogram-Pound ) " <<endl;
            cout << " pound-kg      |    ( Pound-Kilogram ) "<<endl;
            cout << " gm-pound      |    ( Gram-Pound     ) "<<endl;
            cout << " pound-gm      |    ( pound-Gram     ) "<<endl;
			cout << "   ?           |  Help" << endl;
			cout << "   help        |  Help" << endl;
			cout << "   <<          |  Go down one directory" << endl;
			cout << "   bye         |  Quit ( Must be in lowest level )" << endl;
      }

        if ((commands[0]=='m'&& commands[1]=='i'&&commands[2]=='l'&&
            commands[3]=='l'&&commands[4]=='i'&&commands[5]=='-'&&
            commands[6]=='g'&&commands[7]=='m')||(commands[0]=='g'&& commands[1]=='m'&&commands[2]=='-'&&
            commands[3]=='m'&&commands[4]=='i'&&commands[5]=='l'&&
            commands[6]=='l'&&commands[7]=='i'))
                {
                    cout << "\n      Milligram and Gram  Converter" << endl ;
			for (;;)
			   {
				  cout << "\n 1) MG-G \n    or \n 2) G-MG " << endl;
				  cout << "Converter V1\\milli-gm >  ";
				  cin >> M2G;
				if (M2G[0]== '1')
				{
					cout << "\nHow many Milligram  convert to meters?" << endl;
					cout << "Converter V1\\milli-gm\\MILLI-GM > ";
					cin >> milli;
					gram = milli*0.001;
					cout << "\n" << milli << "Milligram = " << gram << "Gram" << endl;
				}
				if (M2G[0] == '2')
				{
					cout << "How many Gram to convert to Milligram ? " << endl;
					cout << "Converter V1\\cm-m\\M-CM > ";
					cin >> gram;
					milli = gram*1000;
					cout << "\n" << gram << "Gram = " << milli << "Milligram" << endl;
				}
				if (M2G [0] == '<' && M2G [1] == '<')
				{
					break;
				} // CM-M ends
				if(M2G[0]=='b'&&M2G[1]=='y'&&M2G[2])
                {
                    s++;
                    break;
                }
			}
                }
			if((commands[0]=='g'&& commands[1]=='m'&&commands[2]=='-'&&
            commands[3]=='k'&&commands[4]=='g')||(commands[0]=='k'&& commands[1]=='g'&&commands[2]=='-'&&
            commands[3]=='g'&&commands[4]=='m'))
            {
                cout << "\n      KiloGram  and Gram  Converter" << endl ;
			for (;;)
			   {
				  cout << "\n 1) KG-G \n    or \n 2) G-KG " << endl;
				  cout << "Converter V1\\milli-gm >  ";
				  cin >> K2G;
				if (K2G[0]== '2')
				{
					cout << "\nHow many gram  convert to Kilograms?" << endl;
					cout << "Converter V1\\kg-gm\\KG-GM > ";
					cin >> gram;
					kilogram = gram*0.001;
					cout << "\n" << gram << "gram = " << kilogram << "kiloGram" << endl;
				}
				if (K2G[0] == '1')
				{
					cout << "How many kiloGram to convert to gram ? " << endl;
					cout << "Converter V1\\cm-m\\M-CM > ";
					cin >> kilogram;
					gram = kilogram*1000;
					cout << "\n" << gram << "Gram = " << milli << "kilogram" << endl;
				}
				if (K2G [0] == '<' && K2G [1] == '<')
				{
					break;
				} // CM-M ends
				if(K2G[0]=='b'&&K2G[1]=='y')
                {
                    s++;
                    break;
                }
			}
            }

       if((commands[0]=='p'&&commands[1]=='o'&&commands[2]=='u'&&commands[3]=='n'&&commands[4]=='d'&&commands[5]=='-'&&commands[6]=='k'&&commands[7]=='g')
          ||(commands[0]=='k'&&commands[1]=='g'&&commands[2]=='-'&&commands[3]=='p'&&commands[4]=='o'&&commands[5]=='u'&&commands[6]=='n'&&commands[7]=='d'))

       {
         cout << "\n      KiloGram  and Pound  Converter" << endl ;
			for (;;)
			   {
				  cout << "\n 1) pound-kg \n    or \n 2) kg-pound " << endl;
				  cout << "\t\t Converter V1 >  ";
				  cin >> P2K;
				if (P2K[0]== '1')
				{
					cout << "\nHow many pound convert to Kilograms?" << endl;
					cout << "Converter V1\\kg-gm\\KG-GM > ";
					cin >> pound;
					kilogram = pound*0.45359;
					cout << "\n" << pound << "pound = " << kilogram << "kiloGram" << endl;
				}
				if (P2K[0] == '2')
				{
					cout << "How many kiloGram to convert to pound ? " << endl;
					cout << "Converter V1\\pound-kg\\POUND-KG> ";
					cin >> kilogram;
					pound = kilogram*2.20462;
					cout << "\n" << kilogram << "kiloGram = " << pound << "pound" << endl;
				}
				if (P2K [0] == '<' && P2K [1] == '<')
				{
					break;
				} // CM-M ends
				if(P2K[0]=='b'&&P2K[1]=='y')
                {
                    break;
                }
			}
            }
            if((commands[0]=='g'&& commands[1]=='m'&&commands[2]=='-'&&
            commands[3]=='p'&&commands[4]=='o'&&commands[5]=='u'&&
            commands[6]=='n'&&commands[7]=='d')||(commands[0]=='p'&& commands[1]=='o'&&commands[2]=='u'&&
            commands[3]=='n'&&commands[4]=='d'&&commands[5]=='-'&&
            commands[6]=='g'&&commands[7]=='m'))
            {
                cout << "\n      Gram  and Pound  Converter" << endl ;
			for (;;)
			   {
				  cout << "\n 1) pound-gm \n    or \n 2) gm-pound " << endl;
				  cout << "\t\t Converter V1 >  ";
				  cin >> P2G;
				if (P2G[0]== '1')
				{
					cout << "\nHow many pound convert to grams?" << endl;
					cout << "Converter V1\\kg-gm\\KG-GM > ";
					cin >> pound;
					gram = pound*453.59237;
					cout << "\n" << pound << "pound = " << gram << "kiloGram" << endl;
				}
				if (P2G[0] == '2')
				{
					cout << "How many Gram to convert to pound ? " << endl;
					cout << "\t\tConverter V1 ";
					cin >> gram;
					pound = gram*0.0022;;
					cout << "\n" << gram << "kiloGram = " << pound << "pound" << endl;
				}
				if (P2G [0] == '<' && P2G[1] == '<')
				{
				    s++;
					break;
				} // CM-M ends
				if(P2G[0]=='b'&&P2G[1]=='y')
                {
                    break;
                }
			}
            }
       }
       	}
 /*void SpeedConverter()
 {
   char Mph2Kph[32];
   char Mps2Kps[32];
   char Mpm2Kpm[32];
   float mph;
   float kph;

 }*/

  void TemperatureConverter()
  {
        char commands [32]; // will hold the users commands in prompt
	char commandToQuitSubMenus = 'n'; //will hold the command to quite submenus
	char F2K[32];
     char F2C[32];
     char C2K[32];
	float k;
	float f;
	float c;
    int s=0;
      while(s==0)
	{
		cout << "\t\t\t\tConverter V1 > "<<endl;
		cout<<"enter ? or Help for Command and Action menu "<<endl;
		cin >> commands ;
		if (commands [0] == '?' || commands [0] == 'h' && commands [1] == 'e' // Help Command starts
			&& commands [2] == 'l' && commands [3] == 'p') // Help Command starts
		{
			cout << "\n\n               Converter Help\n" << endl;
			cout << "   Commands  |    Action" << endl;
			cout << "   *********************\n" << endl;
			cout << "   f-c       |  ( Fahrenheit-Celsius  )" << endl;
			cout << "   c-f       |  ( Celsius-Fahrenheit  )" << endl;
			cout << "   f-k       |  ( Fahrenheit-Kelvin   )" << endl;
			cout << "   k-f       |  ( Kelvin-Fahrenheit   )" << endl;
			cout << "   k-c       |  ( Kelvin-Celsius      )" << endl;
			cout << "   c-k       |  ( Celsius-Kelvin      )" << endl;
			cout << "   ?         |  Help" << endl;
			cout << "   help      |  Help" << endl;
			cout << "   <<        |  Go down one directory" << endl;
			cout << "   bye       |  Quit ( Must be in lowest level )" << endl;
		} // Help command ends
		if ((commands [0] == 'f' && commands [1] == '-' && commands [2] == 'c' )||
             (commands [0] == 'c' && commands [1] == '-' && commands [2] == 'f' ))
		{
			cout << "\n                  Fahrenheit and Celsius Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) f-c \n    or \n 2) c-f" << endl;
				cout << "Converter V1 ";
				cin >> F2C;
				if (F2C[0]== '1')
				{
					cout << "How many  Fahrenheit to convert to Celsius" << endl;
					cout << "Converter V1 ";
					cin >> f;
					c = (((f-32)/9)*5);;
					cout << "\n" << f << "Fahrenheit = " << c << "Celsius" << endl;
				}
				if (F2C[0] == '2')
				{
					cout << "How many Celsius to convert to Fahrenheit?" << endl;
					cout << "Converter V1\ > ";
					cin >> c;
					f = (((9*c)/5)+32);
					cout << "\n" << c << "Celsius =" << f << "Fahrenheit" << endl;
				}
				if (F2C [0] == '<' && F2C [1] == '<')
				{
					break;
				} // CM-M ends
			}
		}
		if ((commands [0] == 'f' && commands [1] == '-' && commands [2] == 'k')||
             (commands [0] == 'k' && commands [1] == '-' && commands [2] == 'f'))
		{
			cout << "\n                Fahrenheit and Kelvin Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) f-k \n    or \n 2) k-f" << endl;
				cout << "Converter V1  ";
				cin >> F2K;
				if (F2K[0] == '1')
				{
					cout << "\nHow many Fahrenheit to convert to Kelvin?\n" << endl;
					cout << "Converter V1 > ";
					cin >> f;
					k= ((f + 459.67))*(5/9);
					cout << "\n" << f << " Fahrenheit = " << k << "Kelvin" << endl;
				}
				if (F2K[0]  == '2')
				{
					cout << "\nHow many Kelvin to convert to Fahrenheit?\n" << endl;
					cout << "Converter V1 ";
					cin >> k;
					f=  (k*(9/5))-459.67;
					cout << "\n" << k<< "Kelvin = " << f<< "Fahrenheit" << endl;
				}
				if (F2K [0] == '<' && F2K [1] == '<')
				{
					break;
				} // Inches-Feet ends
			}
		}

     if ((commands [0] == 'c' && commands [1] == '-' && commands [2] == 'k' )||
             (commands [0] == 'k' && commands [1] == '-' && commands [2] == 'c' ))
         {
            cout << "\n                Fahrenheit and Kelvin Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) c-k \n    or \n 2) k-c" << endl;
				cout << "Converter V1  ";
				cin >> C2K;
				if (C2K[0] == '1')
				{
					cout << "\nHow many Celsius to convert to Kelvin?\n" << endl;
					cout << "Converter V1 > ";
					cin >> c;
					k= c+273;
					cout << "\n" << c << " Celsius " << k << "Kelvin" << endl;
				}
				if (C2K[0]  == '2')
				{
					cout << "\nHow many Kelvin to convert to Celsius?\n" << endl;
					cout << "Converter V1 ";
					cin >> k;
					c=  k-273;
					cout << "\n" << k<< "Kelvin = " << c<< "Celsius" << endl;
				}
				if (C2K [0] == '<' && C2K [1] == '<')
				{
				    s++;
					break;
				} // Inches-Feet ends
			}
		}
	}
  }

  void AreaConverter()
  {
      char commands[32];
      char CMSQ2MMSQ[32];
      char MSQ2CMSQ[32];
      char KSQ2MSQ[32];
      float i;
      int s=0;
      while(s==0)
      {
         cout << "\t\t\t\tConverter V1 > "<<endl;
		cout<<"enter ? or Help for Command and Action menu "<<endl;
		cin >> commands ;
		if (commands[0] == '?' || commands [0] == 'h' && commands [1] == 'e' // Help Command starts
			&& commands [2] == 'l' && commands [3] == 'p') // Help Command starts
		{
			cout << "\n\n               Converter Help\n" << endl;
			cout << "   Commands  |    Action" << endl;
			cout << "   *********************\n" << endl;
			cout << "   mmSQ-cmSQ       |  ( mmSQ2cmSQ     )" << endl;
			cout << "   cmSQ-mmSQ       |  ( cmSQ2mmSQ     )" << endl;
			cout << "   mSQ-cmSQ        |  ( mSQ2cmSQ      )" << endl;
			cout << "   cmSQ-mSQ        |  ( cmSQ2mSQ      )" << endl;
			cout << "   kSQ-mSQ         |  ( kSQ2mSQ       )" <<endl;
			cout << "   mSQ-KSQ         |  ( mSQ2K         )" <<endl;
			cout << "    ?              |  Help" << endl;
			cout << "   help      |  Help" << endl;
			cout << "   <<        |  Go down one directory" << endl;
			cout << "   bye       |  Quit ( Must be in lowest level )" << endl;
		} // Help command ends
          if ((commands [0] == 'm' && commands [1] == 'm' && commands [2] == 'S'&&commands[3] // CM-M starts
			&& commands [3] == 'Q'&& commands [4]=='-'&&commands[5]=='c'&&commands[6]=='m'&&commands[7]=='S'&&commands[8]=='Q')||
              ( commands[0]=='c'&&commands[1]=='m'&&commands[2]=='S'&&commands[3]=='Q'&&commands[4]=='-'&&commands [5] == 'm' && commands [6] == 'm' && commands [7] == 'S' // CM-M starts
			&& commands [8] == 'Q'))
		{
			cout << "\n                      millimeter and centimeter SQ  Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) mmSQ-cmSq \n    or \n 2) cmSQ-mmSQ" << endl;
				cout << "Converter V1\\";
				cin >> CMSQ2MMSQ;
				if (CMSQ2MMSQ[0]== '1')
				{
					cout << "How many centimeters SQ to convert to millimeters Sq?" << endl;
					cout << "Converter V1\\cm-m\\CM-M > ";
					cin >> i;
					cout << "\n" << i << "cmSQ = " << i*100 << "mmSQ" << endl;
				}
				if (CMSQ2MMSQ[0] == '2')
				{
					cout << "How many millimeters SQ to convert to centimeters SQ?" << endl;
					cout << "Converter V1\\cm-m\\M-CM > ";
					cin >> i;
					cout << "\n" << i << "mmSQ = " << i*0.01 << "cmSQ" << endl;
				}
				if (CMSQ2MMSQ [0] == '<' && CMSQ2MMSQ[1] == '<')
				{
					break;
				} // CM-M ends
			}
		}
		 if ((commands [0] == 'm' && commands [1] == 'S'&&commands[2] // CM-M starts
			&& commands [3] == 'Q'&& commands [4]=='-'&&commands[5]=='K'&&commands[6]=='S'&&commands[7]=='Q')||
              ( commands[0]=='K'&&commands[1]=='S'&&commands[3]=='Q'&&commands[4]=='-'&&commands [5] == 'm' && commands [6] == 'S' // CM-M starts
			&& commands [7] == 'Q'))
		{
			cout << "\n                     meter to centimeter SQ Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) mSQ-kSQ  \n    or \n 2) kSQ-mSQ" << endl;
				cout << "Converter V1  ";
				cin >>KSQ2MSQ ;
				if (KSQ2MSQ [0] == '1')
				{
					cout << "\nHow many meter to convert to kilometer SQ?\n" << endl;
					cout << "Converter V1  > ";
					cin >> i;
					cout << "\n" << i << "meter SQ= " << i*.000001 << " kiloimeter SQ" << endl;
				}
				if (KSQ2MSQ [0]  == '2')
				{
					cout << "\nHow many kilometer to convert to meter SQ?\n" << endl;
					cout << "Converter V1 > ";
					cin >> i;
					cout << "\n" << i << "meter = " <<i*1000000 << "kilometer SQ" << endl;
				}
				if (MSQ2CMSQ [0] == '<' && MSQ2CMSQ[1] == '<')
				{
					break;
				} // Inches-Feet ends
			}
		}

		if (commands [0] == 'b' && commands [1] == 'y' && commands [2] == 'e') // Quit command
		{
           s++;
			break; // Exit command (program termanation)
		}
      }

	}
 void MemoryConverter()
 {
    long double data;
     int i=-1;
     int O;
     cout<<" 1.Converter Bits into Bytes,KB,MB,GB,TB"<<endl;
     cout<<" 2.Converter bytes into Bits,KB,MB,GB,TB"<<endl;
     cout<<" 3.Converter KB into Bits,Bytes,MB,GB,TB"<<endl;
     cout<<" 4.Converter MB into Bits,bytes,KB,GB,TB"<<endl;
     cout<<" 5.Converter GB into Bits,bytes,KB,MB,TB"<<endl;
     cout<<" 6.Converter TB into Bits,Bytes,KB,MB,GB,TB"<<endl;
     cout<<" 0.exit   "<<endl;
     while(i!=0)
     {
         cin>>O;
     if(O==1)
     {
         cout<<"Enter numbers of Bits "<<endl;
         cin>>data;
         cout<<"\t\t\t<<"<<data<<"bits"<<endl;
         cout<<"\t\t\t"<<data/8<<"bytes"<<endl;
         cout<<"\t\t\t"<<data/(8*1024)<<"KB"<<endl;
         cout<<"\t\t\t"<<data/(8*1024*1024)<<"MB"<<endl;
         cout<<"\t\t\t"<<data/(8*1024*1024*1024)<<"GB"<<endl;
         cout<<"\t\t\t"<<data/(8*1024*1024*1024*1024)<<"TB"<<endl;
     }
    else if (O==2)
             {
         cout<<"Enter numbers of Bytes "<<endl;
         cin>>data;
         cout<<"\t\t\t<<"<<data<<"bytes ="<<endl;
         cout<<"\t\t\t"<<data*8<<"bits"<<endl;
         cout<<"\t\t\t"<<data/(1024)<<"KB"<<endl;
         cout<<"\t\t\t"<<data/(1024*1024)<<"MB"<<endl;
         cout <<"\t\t\t"<<data/(1024*1024*1024)<<"GB"<<endl;
         cout<<"\t\t\t"<<data/(1024*1024*1024*1024)<<"TB"<<endl;
          }
            else if (O==3)
             {
         cout<<"Enter numbers of KB "<<endl;
         cin>>data;
         cout<<"\t\t\t<<"<<data<<"KB ="<<endl;
         cout<<"\t\t\t"<<data*8*1024<<"bit"<<endl;
         cout<<"\t\t\t"<<data*1024<<"bytes"<<endl;
         cout<<"\t\t\t"<<data/(1024)<<"MB"<<endl;
         cout<<"\t\t\t"<<data/(1024*1024)<<"GB"<<endl;
         cout<<"\t\t\t"<<data/(1024*1024*1024)<<"TB"<<endl;
          }

           else if (O==4)
             {
         cout<<"Enter numbers of MB "<<endl;
         cin>>data;
         cout<<"\t\t\t<<"<<data<<"MB ="<<endl;
         cout<<"\t\t\t"<<data*8*1024*1024<<"bit"<<endl;
         cout<<"\t\t\t"<<data*1024*1024<<"bytes"<<endl;
         cout<<"\t\t\t"<<data*1024<<"KB"<<endl;
         cout<<"\t\t\t"<<data/(1024)<<"GB"<<endl;
         cout<<"\t\t\t"<<data/(1024*1024)<<"TB"<<endl;
            }

             else if (O==5)
             {
         cout<<"Enter numbers of GB "<<endl;
         cin>>data;
         cout<<"\t\t\t<<"<<data<<"GM ="<<endl;
         cout<<"\t\t\t"<<data*8*1024*1024*1024<<"bit"<<endl;
         cout<<"\t\t\t"<<data*1024*1024*1024<<"bytes"<<endl;
         cout<<"\t\t\t"<<data*1024*1024<<"KB"<<endl;
         cout<<"\t\t\t"<<data*1024<<"MB"<<endl;
         cout<<"\t\t\t"<<data/(1024)<<"TB"<<endl;
          }
           else if (O==6)
             {
         cout<<"Enter numbers of TB "<<endl;
         cin>>data;
         cout<<"\t\t\t<<"<<data<<"TM ="<<endl;
         cout<<"\t\t\t"<<data*8*1024*1024*1024*1024<<"bit"<<endl;
         cout<<"\t\t\t"<<data*1024*1024*1024*1024<<"bytes"<<endl;
         cout<<"\t\t\t"<<data*1024*1024*1024<<"KB"<<endl;
         cout<<"\t\t\t"<<data*1024*1024<<"MB"<<endl;
         cout<<"\t\t\t"<<data*1024<<"GB"<<endl;
           }
       else if(O==0)
             {
              //goto label;
              break;
             }
          else
               {
                  cout<<"Select B/W 0 TO 6 "<<endl;
               }
    }

 }

 void SpeedConverter()
  {
      char commands[32];
      char MPS2KPS[32];
      char MPH2KPH[32];
      char KPS2mPS[32];
      char KPH2mPH[32];
      float i;
      int s=0;
      while(s==0)
      {
         cout << "\t\t\t\tConverter V1 > "<<endl;
		cout<<"enter ? or Help for Command and Action menu "<<endl;
		cin >> commands ;
		if (commands[0] == '?' || commands [0] == 'h' && commands [1] == 'e' // Help Command starts
			&& commands [2] == 'l' && commands [3] == 'p') // Help Command starts
		{
			cout << "\n\n               Converter Help\n" << endl;
			cout << "   Commands  |    Action" << endl;
			cout << "   *********************\n" << endl;
			cout << "   MPS-KPS         |  ( mile per second into kilometer per second     )" << endl;
			cout << "   KPS-MPS         |  ( kilometer per second into mile per second     )" << endl;
			cout << "   MPH-KPH         |  ( mile per hours into kilometer per hours     )" << endl;
			cout << "   KPH-HPH         |  ( kilometer per hours into mile per hours     )" << endl;
			cout << "   KPH-mPH         |  ( kilometer per hours into meter per hours     )" << endl;
			cout << "   mPH-KPH         |  ( meter per hours into kilometer per hours     )" << endl;
			cout << "   mPS-KPS         |  ( meter per second into kilometer per second    )" << endl;
			cout << "   KPS-mPS         |  ( meter per second into kilometer per second    )" << endl;
			cout << "    ?              |  Help" << endl;
			cout << "   help            |  Help" << endl;
			cout << "   <<              |  Go down one directory" << endl;
			cout << "   bye             |  Quit ( Must be in lowest level )" << endl;
		} // Help command ends
          if ((commands [0] == 'M' && commands [1] == 'P' && commands [2] == 'S'&&commands[3] // CM-M starts
			&& commands [3] == '-'&& commands [4]=='K'&&commands[5]=='P'&&commands[6]=='S')||
              (commands [0] == 'K' && commands [1] == 'P' && commands [2] == 'S'&&commands[3] // CM-M starts
			&& commands [3] == '-'&& commands [4]=='M'&&commands[5]=='P'&&commands[6]=='S'))
		{
			cout << "\n                     Kilometer per second and mile per second Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) MPS-KPS \n    or \n 2) KPS-MPS" << endl;
				cout << "Converter V1\\";
				cin >> MPS2KPS;
				if (MPS2KPS[0]== '1')
				{
					cout << "How many MPS  to convert to KPS?" << endl;
					cout << "Converter V1  ";
					cin >> i;
					cout << "\n" << i << "MPS = " << i*1.609344 << "KPS" << endl;
				}
				if (MPS2KPS[0] == '2')
				{
					cout << "How many KPS SQ to convert to MPS?" << endl;
					cout << "Converter V1 ";
					cin >> i;
					cout << "\n" << i << "KPS = " << i/1.609344 << "MPS" << endl;
				}
				if (MPS2KPS[0] == '<' && MPS2KPS[1] == '<')
				{
					break;
				} // CM-M ends
			}
		}
		 if ((commands [0] == 'M' && commands [1] == 'P' && commands [2] == 'H'&&commands[3] // CM-M starts
			&& commands [3] == '-'&& commands [4]=='K'&&commands[5]=='P'&&commands[6]=='H')||
              (commands [0] == 'K' && commands [1] == 'P' && commands [2] == 'H'&&commands[3] // CM-M starts
			&& commands [3] == '-'&& commands [4]=='M'&&commands[5]=='P'&&commands[6]=='H'))
		{
			cout << "\n              MPH and KPH Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) MPH-KPH  \n    or \n 2) KPH-MPH" << endl;
				cout << "Converter V1  ";
				cin >>MPH2KPH ;
				if (MPH2KPH [0] == '1')
				{
					cout << "\nHow many MPH to convert to KPH?\n" << endl;
					cout << "Converter V1  > ";
					cin >> i;
					cout << "\n" << i << "MPH= " << (i*1.609344)<< " KPH" << endl;
				}
				if (MPH2KPH [0]  == '2')
				{
					cout << "\nHow many KPH to convert to MPH \n" << endl;
					cout << "Converter V1 > ";
					cin >> i;
					cout << "\n" << i << "KPH = " <<i/1.609344 << "MPH" << endl;
				}
				if (MPH2KPH [0] == '<' && MPH2KPH[1] == '<')
				{    s++;
					break;
				} // Inches-Feet ends
			}
		}

		 if ((commands [0] == 'm' && commands [1] == 'P' && commands [2] == 'H'&&commands[3] // CM-M starts
			&& commands [3] == '-'&& commands [4]=='K'&&commands[5]=='P'&&commands[6]=='H')||
              (commands [0] == 'K' && commands [1] == 'P' && commands [2] == 'H'&&commands[3] // CM-M starts
			&& commands [3] == '-'&& commands [4]=='m'&&commands[5]=='P'&&commands[6]=='H'))
		{
			cout << "\n              meterPH and KPH Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) mPH-KPH  \n    or \n 2) KPH-mPH" << endl;
				cout << "Converter V1  ";
				cin >>KPH2mPH ;
				if (KPH2mPH [0] == '1')
				{
					cout << "\nHow many meterPH to convert to kilometer PH?\n" << endl;
					cout << "Converter V1  > ";
					cin >> i;
					cout << "\n" << i << "meterPH= " << i/1000<< " kiloimeter PH" << endl;
				}
				if (KPH2mPH [0]  == '2')
				{
					cout << "\nHow many kilometerPH to convert to meter PH?\n" << endl;
					cout << "Converter V1 > ";
					cin >> i;
					cout << "\n" << i << "kilometerPH = " <<i*1000 << "meterPH" << endl;
				}
				if( KPH2mPH[0] == '<' && KPH2mPH[1] == '<')
				{
					break;

				} // Inches-Feet ends
			}
		}

        if ((commands [0] == 'm' && commands [1] == 'P' && commands [2] == 'S'&&commands[3] // CM-M starts
			&& commands [3] == '-'&& commands [4]=='K'&&commands[5]=='P'&&commands[6]=='S')||
              (commands [0] == 'K' && commands [1] == 'P' && commands [2] == 'S'&&commands[3] // CM-M starts
			&& commands [3] == '-'&& commands [4]=='m'&&commands[5]=='P'&&commands[6]=='S'))
		{
			cout << "\n              meterPS and KPS Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) mPS-KPS  \n    or \n 2) KPS-mPS" << endl;
				cout << "Converter V1  ";
				cin >>KPS2mPS ;
				if (KPS2mPS [0] == '1')
				{
					cout << "\nHow many meterPS to convert to kilometer PS?\n" << endl;
					cout << "Converter V1  > ";
					cin >> i;
					cout << "\n" << i << "meterPS= " << i/1000 << " kiloimeter PS" << endl;
				}
				if (KPH2mPH [0]  == '2')
				{
					cout << "\nHow many kilometerPS to convert to meter PS?\n" << endl;
					cout << "Converter V1 > ";
					cin >> i;
					cout << "\n" << i << "kilometerPS = " <<i*1000 << "meterPS" << endl;
				}
				if( KPH2mPH[0] == '<' && KPH2mPH[1] == '<')
				{
					break;

				} // Inches-Feet ends
			}
		}

		if (commands [0] == 'b' && commands [1] == 'y' && commands [2] == 'e') // Quit command
		{
           //goto main;
			break; // Exit command (program termanation)
		}
      }

	}

void TimeConverter()
{

 int option,i=1;

 while(i==1)
 {
 double mi;
  cout<<"\t\t\tTime Converter "<<endl;
 cout<<"\t\t\tEnter 1 converter Microsecond"<<endl;
 cout<<"\t\t\tEnter 2 converter Millisecond"<<endl;
 cout<<"\t\t\tEnter 3 converter Nanosecond"<<endl;
 cout<<"\t\t\tEnter 4 converter Second "<<endl;
 cout<<"\t\t\tEnter 5 converter Minute "<<endl;
 cout<<"\t\t\tEnter 6 converter Hours  "<<endl;
 cout<<"\t\t\tEnter 7 converter Day    "<<endl;
 cout<<"\t\t\tEnter 8 converter Week   "<<endl;
 cout<<"\t\t\tWhat you want to converter  "<<endl;
 cin>>option;
 switch(option)
 {
 case 1:
     cout<<"enter microsecond "<<endl;
     cin>>mi;
     cout<<mi<<"microsecond = "<<mi/1000<<" Milliseconds"<<endl;
     cout<<mi<<"microsecond = "<<mi*1000<<" Nanoseconds"<<endl;
     cout<<mi<<"microsecond = "<<mi/1000000<<" second "<<endl;
     cout<<mi<<"microsecond = "<<mi/60000000<<" Minutes"<<endl;
     cout<<mi<<"microsecond = "<<mi/3600000000<<" hours"<<endl;
     break;
 case 2:

     cout<<"enter milliseconds "<<endl;
     cin>>mi;
     cout<<mi<<"millisecond = "<<mi*1000<<" Microseconds"<<endl;
     cout<<mi<<"millisecond = "<<mi*1000000<<" Nanoseconds"<<endl;
     cout<<mi<<"millisecond = "<<mi/1000<<" second "<<endl;
     cout<<mi<<"millisecond = "<<mi/60000<<" Minutes"<<endl;
     cout<<mi<<"millisecond = "<<mi/(12*60000)<<"hours"<<endl;
      break;

 case 3:

     cout<<"enter Nanoseconds "<<endl;
     cin>>mi;
     cout<<mi<<"Nanosecond = "<<mi/1000<<" Microseconds"<<endl;
     cout<<mi<<"Nanosecond = "<<mi*1000000<<" milliseconds"<<endl;
     cout<<mi<<"Nanosecond = "<<mi/1000<<" second "<<endl;
     cout<<mi<<"Nanosecond = "<<mi/60000<<" Minutes"<<endl;
     cout<<mi<<"Nanosecond = "<<mi/(60*60000)<<"hours"<<endl;
      break;

 case 4:

     cout<<"enter seconds "<<endl;
     cin>>mi;

     cout<<mi<<"second = "<<mi*1000000<<" Microseconds"<<endl;
     cout<<mi<<"second = "<<mi*1000000000<<" Nanoseconds"<<endl;
     cout<<mi<<"second = "<<mi*1000<<" millisecond "<<endl;
     cout<<mi<<"second = "<<mi/60<<" Minutes"<<endl;
     cout<<mi<<"second = "<<mi/(3600)<<"hours"<<endl;
      break;

 case 5:
     cout<<"enter minute "<<endl;
     cin>>mi;
     cout<<mi<<"minute = "<<mi*60000000<<" Microseconds"<<endl;
     cout<<mi<<"minute = "<<mi*60000000000<<" Nanoseconds"<<endl;
     cout<<mi<<"minute = "<<mi*60000<<" millisecond "<<endl;
     cout<<mi<<"minute = "<<mi*60<<" second"<<endl;
     cout<<mi<<"minute = "<<mi/60<<"hours"<<endl;
     cout<<mi<<"minute = "<<mi/1440<<"days"<<endl;
     cout<<mi<<"minute = "<<mi/10080<<"weeks"<<endl;
      break;

 case 6:

      double mi;
     cout<<"enter hours "<<endl;
     cin>>mi;
     cout<<mi<<"hours = "<<mi*(60*60000000)<<" Microseconds"<<endl;
     cout<<mi<<"hours = "<<mi*60*(60000000000)<<" Nanoseconds"<<endl;
     cout<<mi<<"hours = "<<mi*(60*60000)<<" millisecond "<<endl;
     cout<<mi<<"hours = "<<mi*60*60<<" second"<<endl;
     cout<<mi<<"hours = "<<mi*60<<"minutes"<<endl;
     cout<<mi<<"hours = "<<mi/24<<"days"<<endl;
     cout<<mi<<"hours = "<<mi/(7*24)<<"weeks"<<endl;
      break;
   case 7 :
     cout<<"enter days "<<endl;
     cin>>mi;
     cout<<mi<<"days = "<<mi*(24*60*60000000)<<" Microseconds"<<endl;
     cout<<mi<<"days = "<<mi*60*(24*60000000000)<<" Nanoseconds"<<endl;
     cout<<mi<<"days = "<<mi*(24*60*60000)<<" millisecond "<<endl;
     cout<<mi<<"days = "<<mi*24*60*60<<" second"<<endl;
     cout<<mi<<"days = "<<mi*24*60<<"minutes"<<endl;
     cout<<mi<<"days = "<<mi*24<<"hours"<<endl;
     cout<<mi<<"days = "<<mi/(7)<<"weeks"<<endl;
      break;

   case 8:
     cout<<"enter weeks "<<endl;
     cin>>mi;
   //  cout<<mi<<"weeks = "<<mi*(7*24*60*60000000)<<" Microseconds"<<endl;
     cout<<mi<<"weeks = "<<mi*60*(7*24*60000000000)<<" Nanoseconds"<<endl;
     cout<<mi<<"weeks = "<<mi*(7*24*60*60000)<<" millisecond "<<endl;
     cout<<mi<<"weeks = "<<mi*7*24*60*60<<" second"<<endl;
     cout<<mi<<"weeks = "<<mi*7*24*60<<"minutes"<<endl;
     cout<<mi<<"weeks = "<<mi*7*24<<"hours"<<endl;
     cout<<mi<<"weeks = "<<mi*7<<"days"<<endl;
      break;
   case 9:
   // goto main1;
   default:
    cout<<"\t\t\tPLease Select 1 to 8   "<<endl;

 }

 }
}



int main ()
{
    char option;
    int i=0;
    while(i==0)
        {
    cout << "\t\t\t\tConverter v 2.0\n"<< endl;
	cout<<"\t\t\t\tEnter L for Length Converter"<<endl;
	cout<<"\t\t\t\tEnter M for Mass Converter"<<endl;
    cout<<"\t\t\t\tEnter S for Speed Converter"<<endl;
    cout<<"\t\t\t\tEnter T for Temperature Converter"<<endl;
    cout<<"\t\t\t\tEnter A for Area Converter"<<endl;
    cout<<"\t\t\t\tEnter t for Time Converter"<<endl;
    cout<<"\t\t\t\tEnter m for Memory Converter"<<endl<<endl;
    cin>>option;
    system("CLS");
    switch(option)
    {
    case 'L':
        LengthConverter();
        system("CLS");
        break;
    case 'M':
        MassConverter();
        system("CLS");
        break;
    case 'S':
        SpeedConverter();
        system("CLS");
        break;
    case 'T':
        TemperatureConverter();
        system("CLS");
        break;
    case 'A':
         AreaConverter();
         system("CLS");
         break;
    case 't':
        TimeConverter();
        system("CLS");
        break;
    case 'm':
        MemoryConverter();
        system("CLS");
        break;
    default:
        cout<<"\t\t\n\nselect valid  option"<<endl;
    }
        }
    }

