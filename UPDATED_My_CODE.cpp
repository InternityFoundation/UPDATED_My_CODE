#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int choice;
    char ch;
    cout<<"Level of Questions.\nSelect first Easy Questions.\n";
    while(1)
    {
    cout<<"\n1: Easy\n";
    cout<<"2: Medium\n";
    cout<<"3: Hard\n";
    cout<<"\n4: Exit\n";

    cout<<"\nEnter Your Choice\n";
    cin>>choice;

    if(choice <=0 || choice > 4 ||choice == ch)
    {
        cout<<"Not Exit.Please Select valid option.\n";
    }

    switch(choice)
    {
        case 1:
                char a[5];

                cout<<"Five Easy Questions :\n";
                cout<<"\nQ.1- A single line comment in C language source code can begin with _____.\n"
                        "\n(A)- ; (B)- : (C)- /* */ (D)- \\ \n"

                    "\nQ.2- In the standard library of C programming language, which of the following header file is designed for basic mathematical operations?\n"

                        "\n(A)- math.h (B)- conio.h (C)- dos.h (D)- stdio.h\n"

                    "\nQ.3- Which of the following is a logical OR operator?\n"

                        "\n(A)- & (B)- && (C)- || (D)- None of the above\n"

                    "\nQ.4- To print a double value which format specifier can be used?\n"

                        "\n(A)- %L (B)- %lf (C)- %Lf (D)- None of the above\n"

                    "\nQ.5- extern int fun(); - The declaration indicates the presence of a global function defined outside the current module or in another file.\n"

                        "\n(A)- True  (B)- False\n";

                    cout<<"\n";

                    for(int i=1;i<=5;i++)
                    {
                        cout<<i<<"-";
                        cin>>a[i];
                    }

                    cout<<"\n";

                    for(int i=1;i<=5;i++)
                    {
                        a[i] = toupper(a[i]);
                        cout<<i<<"-"<<a[i]<<"\n";
                    }

                    cout<<"\nResult after 30 sec.\n";

                        if(a[1]=='D')
                            cout<<"1- Right (1 mark)\n";
                            else
                            cout<<"1- Wrong (0 mark)\n";

                        if(a[2]=='A')
                            cout<<"2- Right (1 mark)\n";
                            else
                            cout<<"2- Wrong (0 mark)\n";

                        if(a[3]=='C')
                            cout<<"3- Right (1 mark)\n";
                            else
                            cout<<"3- Wrong (0 mark)\n";

                        if(a[4]=='B')
                            cout<<"4- Right (1 mark)\n";
                            else
                            cout<<"4- Wrong (0 mark)\n";

                        if(a[5]=='A')
                            cout<<"5- Right (1 mark)\n";
                            else
                            cout<<"5- Wrong (0 mark)\n";


                        if(a[1]=='D' && a[2]=='A' && a[3]=='C' && a[4]=='B' && a[5]=='A')
                        {
                            cout<<"\nYour Test result is  EXCELLENT\n";
                        }
                        else if((a[1]!='D' && a[2]=='A' && a[3]=='C' && a[4]=='B' && a[5]=='A') || (a[1]=='D' && a[2]!='A' && a[3]=='C' && a[4]=='B' && a[5]=='A')
                            || (a[1]=='D' && a[2]=='A' && a[3]!='C' && a[4]=='B' && a[5]=='A') || (a[1]=='D' && a[2]=='A' && a[3]=='C' && a[4]!='B' && a[5]=='A')
                            || (a[1]=='D' && a[2]=='A' && a[3]=='C' && a[4]=='B' && a[5]!='A'))

                            {
                                cout<<"\nYour Test is VERY_STRONG\n";
                            }
                        else if((a[1]!='D' && a[2]!='A' && a[3]=='C' && a[4]=='B' && a[5]=='A') || (a[1]=='D' && a[2]!='A' && a[3]!='C' && a[4]=='B' && a[5]=='A')
                            || (a[1]=='D' && a[2]=='A' && a[3]!='C' && a[4]!='B' && a[5]=='A') || (a[1]=='D' && a[2]=='A' && a[3]=='C' && a[4]!='B' && a[5]!='A')
                            || (a[1]!='D' && a[2]=='A' && a[3]=='C' && a[4]=='B' && a[5]!='A'))

                            {
                                cout<<"\nYour Test result is STRONG\n";
                            }
                        else if((a[1]!='D' && a[2]!='A' && a[3]!='C' && a[4]=='B' && a[5]=='A') || (a[1]=='D' && a[2]!='A' && a[3]!='C' && a[4]!='B' && a[5]=='A')
                            || (a[1]=='D' && a[2]=='A' && a[3]!='C' && a[4]!='B' && a[5]!='A') || (a[1]!='D' && a[2]=='A' && a[3]=='C' && a[4]!='B' && a[5]!='A')
                            || (a[1]!='D' && a[2]!='A' && a[3]=='C' && a[4]=='B' && a[5]!='A'))

                            {
                                cout<<"\nYour Test result is VERY_GOOD\n";
                            }
                        else if((a[1]!='D' && a[2]!='A' && a[3]!='C' && a[4]!='B' && a[5]=='A') || (a[1]=='D' && a[2]!='A' && a[3]!='C' && a[4]!='B' && a[5]!='A')
                            || (a[1]!='D' && a[2]=='A' && a[3]!='C' && a[4]!='B' && a[5]!='A') || (a[1]!='D' && a[2]!='A' && a[3]=='C' && a[4]!='B' && a[5]!='A')
                            || (a[1]!='D' && a[2]!='A' && a[3]!='C' && a[4]=='B' && a[5]!='A'))

                            {
                                cout<<"\nYour Test result is BAD";
                            }
                        else
                        {
                            cout<<"\nYour Test result is VERY_BAD\n";
                        }

                    cout<<"\n"<<"Select next Medium Questions option and attempt it.\n";

                    cout<<"\n";

                        break;

        case 2:
                char b[5];

                cout<<"Five Medium Question :\n";
                cout<<"\nQ.1- extern int fun(); - The declaration indicates the presence of a global function defined outside the current module or in another file.\n"

                        "\n(A)- True  (B)- False\n"

                    "\nQ.2- Which of the following is a logical OR operator?\n"

                        "\n(A)- & (B)- && (C)- || (D)- None of the above\n"

                    "\nQ.3- In the standard library of C programming language, which of the following header file is designed for basic mathematical operations?\n"

                        "\n(A)- math.h (B)- conio.h (C)- dos.h (D)- stdio.h\n"


                    "\nQ.4- A single line comment in C language source code can begin with _____.\n"
                        "(A)- ; (B)- : (C)- /* */ (D)- \\ \n"

                    "\nQ.5- To print a double value which format specifier can be used?\n"

                        "\n(A)- %L (B)- %lf (C)- %Lf (D)- None of the above\n";

                    cout<<"\n";

                    for(int z=1;z<=5;z++)
                    {
                        cout<<z<<"-";
                        cin>>b[z];
                    }

                    cout<<"\n";

                    for(int z=1;z<=5;z++)
                    {
                        b[z] = toupper(b[z]);
                        cout<<z<<"-"<<b[z]<<"\n";
                    }

                    cout<<"\nResult after 30 sec.\n";

                        if(b[1]=='A')
                            cout<<"1- Right (1 mark)\n";
                            else
                            cout<<"1- Wrong (0 mark)\n";

                        if(b[2]=='C')
                            cout<<"2- Right (1 mark)\n";
                            else
                            cout<<"2- Wrong (0 mark)\n";

                        if(b[3]=='A')
                            cout<<"3- Right (1 mark)\n";
                            else
                            cout<<"3- Wrong (0 mark)\n";

                        if(b[4]=='D')
                            cout<<"4- Right (1 mark)\n";
                            else
                            cout<<"4- Wrong (0 mark)\n";

                        if(b[5]=='B')
                            cout<<"5- Right (1 mark)\n";
                            else
                            cout<<"5- Wrong (0 mark)\n";

                       if(b[1]=='A' && b[2]=='C' && b[3]=='A' && b[4]=='D' && b[5]=='B')
                        {
                            cout<<"\Your Test result is  EXCELLENT\n";
                        }
                        else if((b[1]!='A' && b[2]=='C' && b[3]=='A' && b[4]=='D' && b[5]=='B') || (b[1]=='A' && b[2]!='C' && b[3]=='A' && b[4]=='D' && b[5]=='B')
                            ||(b[1]=='A' && b[2]=='C' && b[3]!='A' && b[4]=='D' && b[5]=='B') || (b[1]=='A' && b[2]=='C' && b[3]=='A' && b[4]!='D' && b[5]=='B')
                            ||(b[1]=='A' && b[2]=='C' && b[3]=='A' && b[4]=='D' && b[5]!='B'))
                            {
                                cout<<"\nYour Test is VERY_STRONG\n";
                            }
                        else if((b[1]!='A' && b[2]!='C' && b[3]=='A' && b[4]=='D' && b[5]=='B') || (b[1]=='A' && b[2]!='C' && b[3]!='A' && b[4]=='D' && b[5]=='B')
                          || (b[1]=='A' && b[2]=='C' && b[3]!='A' && b[4]!='D' && b[5]=='B') || (b[1]=='A' && b[2]=='C' && b[3]=='A' && b[4]!='D' && b[5]!='B')
                          || (b[1]!='A' && b[2]=='C' && b[3]=='A' && b[4]=='D' && b[5]!='B'))
                          {
                                cout<<"\nYour Test result is STRONG\n";
                          }
                        else if((b[1]!='A' && b[2]!='C' && b[3]!='A' && b[4]=='D' && b[5]=='B') || (b[1]=='A' && b[2]!='C' && b[3]!='A' && b[4]!='D' && b[5]=='B')
                          || (b[1]=='A' && b[2]=='C' && b[3]!='A' && b[4]!='D' && b[5]!='B') || (b[1]!='A' && b[2]=='C' && b[3]=='A' && b[4]!='D' && b[5]!='B')
                          || (b[1]!='A' && b[2]!='C' && b[3]=='A' && b[4]=='D' && b[5]!='B'))
                          {
                                cout<<"\nYour Test result is VERY_GOOD\n";
                          }
                        else if((b[1]!='A' && b[2]!='C' && b[3]!='A' && b[4]!='D' && b[5]=='B') || (b[1]=='A' && b[2]!='C' && b[3]!='A' && b[4]!='D' && b[5]!='B')
                          || (b[1]!='A' && b[2]=='C' && b[3]!='A' && b[4]!='D' && b[5]!='B') || (b[1]!='A' && b[2]!='C' && b[3]=='A' && b[4]!='D' && b[5]!='B')
                          || (b[1]!='A' && b[2]!='C' && b[3]!='A' && b[4]=='D' && b[5]!='B'))
                          {
                                cout<<"\nYour Test result is BAD";
                          }
                        else
                        {
                                cout<<"\nYour result is VERY_BAD\n";
                        }


                    cout<<"\n"<<"Select next Hard Questions option and attempt it.\n";

                    cout<<"\n";

                        break;

        case 3:
                char c[5];

                cout<<"\nFive Hard Question\n";
                cout<<"\nQ.1- To print a double value which format specifier can be used?\n"

                        "\n(A)- %L (B)- %lf (C)- %Lf (D)- None of the above\n"

                    "\nQ.2- Which of the following is a logical OR operator?\n"

                        "\n(A)- & (B)- && (C)- || (D)- None of the above\n"

                    "\nQ.3- In the standard library of C programming language, which of the following header file is designed for basic mathematical operations?\n"

                        "\n(A)- math.h (B)- conio.h (C)- dos.h (D)- stdio.h\n"


                    "\nQ.4- A single line comment in C language source code can begin with _____.\n"
                        "(A)- ; (B)- : (C)- /* */ (D)- \\ \n"

                    "\nQ.5- Extern int fun(); - The declaration indicates the presence of a global function defined outside the current module or in another file.\n"

                        "\n(A)- True  (B)- False\n";

                    cout<<"\n";

                    for(int j=1;j<=5;j++)
                    {
                        cout<<j<<"-";
                        cin>>c[j];
                    }

                    cout<<"\n";

                    for(int j=1;j<=5;j++)
                    {
                        c[j] = toupper(c[j]);
                        cout<<j<<"-"<<c[j]<<"\n";
                    }

                    cout<<"\nResult after 30 sec.\n";

                        if(c[1]=='B')
                            cout<<"1- Right (1 mark)\n";
                            else
                            cout<<"1- Wrong (0 mark)\n";

                        if(c[2]=='C')
                            cout<<"2- Right (1 mark)\n";
                            else
                            cout<<"2- Wrong (0 mark)\n";

                        if(c[3]=='A')
                            cout<<"3- Right (1 mark)\n";
                            else
                            cout<<"3- Wrong (0 mark)\n";

                        if(c[4]=='D')
                            cout<<"4- Right (1 mark)\n";
                            else
                            cout<<"4- Wrong (0 mark)\n";

                        if(c[5]=='A')
                            cout<<"5- Right (1 mark)\n";
                            else
                            cout<<"5- Wrong (0 mark)\n";

                        if(c[1]=='B' && c[2]=='C' && c[3]=='A' && c[4]=='D' && c[5]=='A')
                        {
                            cout<<"\nYour Test result is  EXCELLENT\n";
                        }
                        else if((c[1]=!'B' && c[2]=='C' && c[3]=='A' && c[4]=='D' && c[5]=='A') || (c[1]=='B' && c[2]!='C' && c[3]=='A' && c[4]=='D' && c[5]=='A')
                            || (c[1]=='B' && c[2]=='C' && c[3]!='A' && c[4]=='D' && c[5]=='A') || (c[1]=='B' && c[2]=='C' && c[3]=='A' && c[4]!='D' && c[5]=='A')
                            || (c[1]=='B' && c[2]=='C' && c[3]=='A' && c[4]=='D' && c[5]!='A'))
                        {
                            cout<<"\nYour Test is VERY_STRONG\n";
                        }
                        else if((c[1]=!'B' && c[2]!='C' && c[3]=='A' && c[4]=='D' && c[5]=='A') || (c[1]=='B' && c[2]!='C' && c[3]!='A' && c[4]=='D' && c[5]=='A')
                            || (c[1]=='B' && c[2]=='C' && c[3]!='A' && c[4]!='D' && c[5]=='A') || (c[1]=='B' && c[2]=='C' && c[3]=='A' && c[4]!='D' && c[5]!='A')
                            || (c[1]!='B' && c[2]=='C' && c[3]=='A' && c[4]=='D' && c[5]!='A'))
                        {
                             cout<<"\nYour Test result is STRONG\n";
                        }
                        else if((c[1]=!'B' && c[2]!='C' && c[3]!='A' && c[4]=='D' && c[5]=='A') || (c[1]=='B' && c[2]!='C' && c[3]!='A' && c[4]!='D' && c[5]=='A')
                            || (c[1]=='B' && c[2]=='C' && c[3]!='A' && c[4]!='D' && c[5]!='A') || (c[1]!='B' && c[2]=='C' && c[3]=='A' && c[4]!='D' && c[5]!='A')
                            || (c[1]!='B' && c[2]!='C' && c[3]=='A' && c[4]=='D' && c[5]!='A'))
                        {
                            cout<<"\nYour Test result is VERY_GOOD\n";
                        }
                        else if((c[1]=!'B' && c[2]!='C' && c[3]!='A' && c[4]!='D' && c[5]=='A') || (c[1]=='B' && c[2]!='C' && c[3]!='A' && c[4]!='D' && c[5]!='A')
                            || (c[1]!='B' && c[2]=='C' && c[3]!='A' && c[4]!='D' && c[5]!='A') || (c[1]!='B' && c[2]!='C' && c[3]=='A' && c[4]!='D' && c[5]!='A')
                            || (c[1]!='B' && c[2]!='C' && c[3]!='A' && c[4]=='D' && c[5]!='A'))
                        {
                            cout<<"\nYour Test result is BAD";
                        }
                        else
                        {
                            cout<<"\nYour result is VERY_BAD\n";
                        }


                    cout<<"\n                                   THANK YOU FOR ATTEMPTING THIS TEST. \n";

                    cout<<"                                         Please press EXIT Option.     \n";

                        break;
        case 4:
                cout<<"                                        ***YOUR TEST RECORDED***      \n";
                cout<<"\n                                   THANK YOU FOR ATTEMPTING THIS TEST. \n";
                cout<<"\n                                      You are Good in this test        \n";
                exit(0);

        default :
                break;
    }
    }
}

