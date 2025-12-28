// Akmal Rafique bin Ahmad Raphaie A25CS0181
// Wan Faruq Jazli Bin Wan Ahmad Jaffry A25CS0372
// date:24/12/2025
#include <iostream>
#include <cmath>
using namespace std;
float calcpayment(float a,float b,float c,float d){
    float loanamount=a-b;
    float ttinterest=loanamount*(c/100)*d;
    float ttpay=loanamount+ttinterest;
    float monthpay=ttpay/(d*12);
    monthpay=  round(monthpay * 100.0) / 100.0;
    return monthpay;
}
int main() {
    float price,downpayment,intrate,period,monthpayment;
    int model,variant,region;
    char looping;
    do{
        cout << "Proton Car Loan Calculator\n";
        cout<<"Model [1-X50, 2-Exora, 3-Persona]:";
        cin>>model;
        cout<<"Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT]:";
        cin>>variant;
        cout<<"Region [1-Peninsular Malaysia, 2-East Malaysia]:";
        cin>>region;
        cout << "\nCar Info\n";
        cout << "Model: ";
        if(model==1){
            cout<<"X50\n";
        }else if(model==2){
            cout<<"Exora\n";
        }else if(model==3){
            cout<<"Persona\n";
        }
        cout << "Variant: ";
        if(variant==1){
            cout<<"1.6L Standard CVT\n";
        }else if(variant==2){
            cout<<"1.6L Premium CVT\n";
        }
        cout << "Region: ";
        if(region==1){
            cout<<"Peninsular Malaysia\n";
        }else if(region==2){
            cout<<"East Malaysia\n";
        }
        cout << "\nPaint Type: Metallic\n\n";
        if(model==1&&variant==1&&region==1){
            price=89800.00;
        }else if(model==1&&variant==1&&region==2){
            price=91800.00;
        }else if(model==1&&variant==2&&region==1){
            price=101800.00;
        }else if(model==1&&variant==2&&region==2){
            price=103800.00;
        }else if(model==2&&variant==1&&region==1){
            price=62800.00;
        }else if(model==2&&variant==1&&region==2){
            price=65300.00;
        }else if(model==2&&variant==2&&region==1){
            price=69800.00;
        }else if(model==2&&variant==2&&region==2){
            price=72300.00;
        }else if(model==3&&variant==1&&region==1){
            price=47800.00;
        }else if(model==3&&variant==1&&region==2){
            price=49800.00;
        }else if(model==3&&variant==2&&region==1){
            price=54600.00;
        }else if(model==3&&variant==2&&region==2){
            price = 60300.00;
        }
        cout<<"Price (MYR):"<<price<<endl;

        cout<<"Down Payment (MYR):";
        cin>>downpayment;
        cout<<"Interest Rate (%):";
        cin>>intrate;
        cout<<"Repayment period (in years):";
        cin>>period;
        monthpayment=calcpayment(price,downpayment,intrate,period);
        cout<<"MONTHLY INSTALLMENT (MYR):"<<monthpayment<<endl;
        cout<<"Do you want to enter other data? [Y @ N]:";
        cin>>looping;
    }while(looping=='y'||looping=='Y');
    cout<<"Thank you :)";
    return 0;
}