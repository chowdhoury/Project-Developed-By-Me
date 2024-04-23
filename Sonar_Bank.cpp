/*-------------------Project Name: Bank Management System----------------------*/

/*---------------Author: Md Raihan Chowdhoury------------------*/
/*------------Daffodil International University----------------*/
/*------------Depertment Of Software Engineering---------------*/
/*------------------------Batch:40th---------------------------*/
/*----------------------Second Semister------------------------*/
/*------------------------Section: A---------------------------*/
/*-------------------Id: 0242310005341002----------------------*/

/*-------------------Default Account No: 1---------------------*/
/*-------------------Default Account Pin: 1--------------------*/



#include <bits/stdc++.h>
using namespace std;

double balance = 0, amount, var = 0;
int pin = 1, given_pin, option;
string  account_number = "1", given_number;

/*-----------------------End Session----------------------------*/

int end_session()
{
    cout << "\nThanks For Using Bank Management System\nYour Session Successfully ended!" << endl;
    cout << "\n----------------------------------------------------" << endl;
}

/*---------------------End Session End--------------------------*/

/*-----------------------End Screen----------------------------*/
int menu();
int end_screen()
{
    cout << "\n0.Main Menu" << endl;
    cout << "1.End Session" << endl;
    cout << "\nEnter Your Choice : ";
    cin >> option;
    cout << "\n----------------------------------------------------" << endl;
    if (option == 0)
    {
        menu();
    }else
    {
        end_session();
    }
    
    

}

/*-----------------------End Screen end------------------------*/

/*-----------------------Pin Change------------------------*/

int pin_change()
{
    while (1)
    { 
        cout << "\nBank Management System\n" << endl;
        cout << "Enter Correct Account Pin : ";
        cin >> given_pin;
        if(pin == given_pin)
        {
            cout << "\nEnter a New Pin : ";
            cin >> given_pin;
            pin = given_pin;
            cout << "\nPin Changed Successfully" << endl;
            end_screen();
            break;
        }
    }
}

/*-----------------------Pin Change end------------------------*/

/*-----------------------Balance Check------------------------*/

int balance_check()
{
    cout << "\nBank Management System\n" << endl;
    while (1)
    { 
        cout << "Enter Correct Account Pin : ";
        cin >> given_pin;
        if(pin == given_pin)
        {
            cout << "\nYour Balance is " << balance << " TK" << endl;
            end_screen();
            break;
        }
    }

}

/*-----------------------Balance Check end------------------------*/

/*----------------------Mobile Recharge------------------------*/

int recharge()
{
    cout << "\nBank Management System\n" << endl;

    while (1)
    {
        cout << "Enter a Valid number : ";
        cin >> given_number;
        if(given_number.length() == 11 && given_number != account_number && given_number[0] == '0' && given_number[1] == '1' && ( given_number[2] != '0' || given_number[2] != '1' || given_number[2] != '2' )) break;
    }
    while (1)
    {
        cout << "Enter Amount (Minimum 10 TK) : ";
        cin >> amount;
        if (amount >= 10)
        {
            if(amount > balance && balance >= 10)
            {
                cout << "Insufficent Balance\nYour Balance is " << balance << " TK" << endl;
            }else if(amount > balance && balance < 10)
            {
                cout << "\nYour Balance is Less than 10 TK\nAdd Money and Try Again" << endl;
                end_screen();
                break;
            }else
            {
                var = 1;
                break;
            }
        }   
    }

    while (var == 1)
    { 
        cout << "Enter Correct Account Pin : ";
        cin >> given_pin;
        if(pin == given_pin)
        {
            balance -= amount;
            cout << "\nMobile Recharge Successful" << endl;
            cout << "Your Balance is " << balance << " TK" << endl;
            end_screen();
            break;
        }
    }
}

/*-------------------Mobile Recharge End-----------------------*/

/*-----------------------Change Account Number------------------------*/

int change_account()
{
    cout << "\nBank Management System\n" << endl;
    while (1)
    {
        cout << "Enter Valid Account Number : ";
        cin >> given_number;
        if(account_number == given_number) break;
    }
    
    while (1)
    { 
        cout << "Enter Correct Account Pin : ";
        cin >> given_pin;
        if(pin == given_pin) break;
    }
    while (1)
    {
        cout << "Enter a Valid number : ";
        cin >> given_number;
        if(given_number.length() == 11 && given_number != account_number && given_number[0] == '0' && given_number[1] == '1' && ( given_number[2] != '0' || given_number[2] != '1' || given_number[2] != '2' ))
        {
            account_number = given_number;
            cout << "\nAccount Number Changed Successfully" << endl;
            end_screen();
            break;
        }
    }

}

/*-----------------------Change Account Number end------------------------*/

/*----------------------Cash Out------------------------*/

int cash_out()
{
    cout << "\nBank Management System\n" << endl;

    while (1)
    {
        cout << "Enter a Valid number : ";
        cin >> given_number;
        if(given_number.length() == 11 && given_number != account_number && given_number[0] == '0' && given_number[1] == '1' && ( given_number[2] != '0' || given_number[2] != '1' || given_number[2] != '2' )) break;
    }
    while (1)
    {
        cout << "Enter Amount (Minimum 10 TK) (Cash Out Charge 0.5%) : ";
        cin >> amount;
        amount = amount + (amount*0.005);
        if (amount >= 10)
        {
            if(amount > balance && balance >= 10)
            {
                cout << "Insufficent Balance\nYour Balance is " << balance << " TK" << endl;
            }else if(amount > balance && balance < 10)
            {
                cout << "\nYour Balance is Less than 10 TK\nAdd Money and Try Again" << endl;
                end_screen();
                break;
            }else
            {
                var = 1;
                break;
            }
        }   
    }

    while (var == 1)
    { 
        cout << "Total : " << amount << " TK" << endl;
        cout << "Enter Correct Account Pin : ";
        cin >> given_pin;
        if(pin == given_pin)
        {
            balance -= amount;
            cout << "\nCash Out Successful" << endl;
            cout << "Your Balance is " << balance << " TK" << endl;
            end_screen();
            break;
        }
    }
}

/*-------------------Cash Out End-----------------------*/

/*----------------------Payment------------------------*/

int payment()
{
    cout << "\nBank Management System\n" << endl;

    while (1)
    {
        cout << "Enter a Valid number : ";
        cin >> given_number;
        if(given_number.length() == 11 && given_number != account_number && given_number[0] == '0' && given_number[1] == '1' && ( given_number[2] != '0' || given_number[2] != '1' || given_number[2] != '2' )) break;
    }
    while (1)
    {
        cout << "Enter Amount (Minimum 10 TK) : ";
        cin >> amount;
        if (amount >= 10)
        {
            if(amount > balance && balance >= 10)
            {
                cout << "Insufficent Balance\nYour Balance is " << balance << " TK" << endl;
            }else if(amount > balance && balance < 10)
            {
                cout << "\nYour Balance is Less than 10 TK\nAdd Money and Try Again" << endl;
                end_screen();
                break;
            }else
            {
                var = 1;
                break;
            }
        }   
    }

    while (var == 1)
    { 
        cout << "Enter Correct Account Pin : ";
        cin >> given_pin;
        if(pin == given_pin)
        {
            balance -= amount;
            cout << "\nPayment Successful" << endl;
            cout << "Your Balance is " << balance << " TK" << endl;
            end_screen();
            break;
        }
    }
}

/*-------------------Payment End-----------------------*/

/*-----------------------Send Money----------------------------*/

int send_money()
{
    cout << "\nBank Management System\n" << endl;

    while (1)
    {
        cout << "Enter a Valid number : ";
        cin >> given_number;
        if(given_number.length() == 11 && given_number != account_number && given_number[0] == '0' && given_number[1] == '1' && ( given_number[2] != '0' || given_number[2] != '1' || given_number[2] != '2' )) break;
    }
    while (1)
    {
        cout << "Enter Amount (Minimum 10 TK) : ";
        cin >> amount;
        if (amount >= 10)
        {
            if(amount > balance && balance >= 10)
            {
                cout << "Insufficent Balance\nYour Balance is " << balance << " TK" << endl;
            }else if(amount > balance && balance < 10)
            {
                cout << "\nAdd Money and Try Again" << endl;
                end_screen();
                break;
            }else
            {
                var = 1;
                break;
            }
        }   
    }

    while (var == 1)
    { 
        cout << "Enter Correct Account Pin : ";
        cin >> given_pin;
        if(pin == given_pin)
        {
            balance -= amount;
            cout << "\nSend Money Successful" << endl;
            cout << "Your Balance is " << balance << " TK" << endl;
            end_screen();
            break;
        }
    }
}

/*---------------------Send Money End--------------------------*/

/*-----------------------Add Money----------------------------*/

int add_money()
{
    cout << "\nBank Management System\n" << endl;

    while (1)
    {
        cout << "Enter Amount (Minimum 10 TK) : ";
        cin >> amount;
        if (amount >= 10)
        {
            break;
        }   
    }

    while (1)
    { 
        cout << "Enter Correct Account Pin : ";
        cin >> given_pin;
        if(pin == given_pin)
        {
            balance += amount;
            cout << "\nAdd Money Successful" << endl;
            cout << "Your Balance is " << balance << " TK" << endl;
            end_screen();
            break;
        }
    }
    
}

/*-----------------------Add Money End------------------------*/

/*-----------------------Menu----------------------------*/

int menu()
{
    while (1)
    {
        //cout << "\n----------------------------------------------------" << endl;
        cout << "\nBank Management System" << endl;

        cout << "\n1.Add Money" << endl;
        cout << "2.Send Money" << endl;
        cout << "3.Mobile Recharge" << endl;
        cout << "4.Payment" << endl;
        cout << "5.Cash Out" << endl;
        cout << "6.Balance Check" << endl;
        cout << "7.Pin Change" << endl;
        cout << "8.Account Number Change" << endl;
        cout << "9.End Session\n" << endl;

        cout << "Enter Your Choice : ";
        cin >> option;

        cout << "\n----------------------------------------------------" << endl;

        if(option > 0 && option < 9)
        {
            switch (option)
            {
                case 1 :
                    add_money();
                    break;
                case 2 :
                    send_money();
                    break;
                case 3 :
                    recharge();
                    break;
                case 4 :
                    payment();
                    break;
                case 5 :
                    cash_out();
                    break;
                case 6 :
                    balance_check();
                    break;
                case 7 :
                    pin_change();
                    break;
                case 8 :
                    change_account();
                    break;
                case 9 :
                    end_session();
                    break;
                
            }

            break;

        }

    }

}

/*-----------------------Menu end----------------------------*/

/*-----------------------Login page----------------------------*/

int login_page()
{
    cout << "\nBank Management System\n" << endl;
    while (1)
    {
        cout << "Enter Valid Account Number : ";
        cin >> given_number;
        if(account_number == given_number) break;
    }
    
    while (1)
    { 
        cout << "Enter Correct Account Pin : ";
        cin >> given_pin;
        if(pin == given_pin) break;
    }

    cout << "\n----------------------------------------------------" << endl;
    
    menu();

}

/*-----------------------Login page end------------------------*/

/*-----------------------Main Function------------------------*/

int main()
{
    login_page();
}

/*-----------------------Main Function------------------------*/