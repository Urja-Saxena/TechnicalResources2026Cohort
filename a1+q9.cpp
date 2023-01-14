int num1,num2,div,dvt,rem,GCD,LCM;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    div=num1;
    dvt=num2;
    while(dvt%div!=0)
    {
        rem=dvt%div;
        dvt=div;
        div=rem;
    }
//GCD or HCF is divisor of successive division of the numbers till the time the remainder becomes '0'.
//LCM is the product of the numbers divided by GCD or HCF
    cout<<"GCD = "<<div<<endl;
    cout<<"LCM = "<<num1*num2/div<<endl;
