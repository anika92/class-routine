#include <iostream>

using namespace std;

int main()

{
    int index,i;
    for(i=0;i<=6;i++)
    {
    cout<<"\n\n";
    cout<<"Enter your choice  1 to see routine for SUNDAY \n\n";
    cout<<"Enter your choice  2 to see routine for  MONDAY \n\n";
   cout<<"Enter your choice  3 to see routine for TUESDAY \n\n";
     cout<<"Enter your choice  4 to see routine for WEDNESSDAY \n\n";
    cout<<"Enter your choice  5 to see routine for THURSDAY \n\n";
    cout<<"Enter your choice  6 to Exit \n\n";
    cin>>index;
    switch(index)
    {
        case 1:
        cout<<"1. 8-8.50-CSTE 2105-(MKU)\n\n";
        cout<<"2. 11-11.50-CSTE 2103-(IA)\n\n";
        cout<<"3. 12-12.50-HUM 2105-(MBH)\n\n";


        break;
        case 2:
        cout<<"10-10.50_CSTE 2101(MKU)\n\n";
        cout<<"11-12.50_OOP Lab(MKU)\n\n";
        cout<<"2-2.50-CSTE 2107(AKA\n\n)";
        cout<<"3-3.50-CSTE 2103(IA)\n\n";
        cout<<"4-4.50 CSTE2105(MKU)\n\n";




        break;
        case 3:
        cout<<"9-10.50-CSTE 2101(MKU)\n\n";
        cout<<"11-11.50-HUM 2105(MBH)\n\n";
        cout<<"12-12.50-MATH(2105)(tba)\n\n";
        cout<<"2-2.50-CSTE 2107(AKA)\n\n";
        cout<<"3-3.50-CSTE 2103 (IA)\n\n";
        cout<<"4-4.50-CSTE 2105(MKU)\n\n";



        break;
        case 4:
        cout<<"9-9.50-CSTE 2107-(AKA)\n\n";
        cout<<"10-11.50-MATH(2105)-(tba)\n\n";
        cout<<"12-12.50-HUM 2105-(MBH)\n\n";
;



        break;
        case 5:
         cout<<"9-10.50-DLD LAB(Grp A)\n\n";
        cout<<"11-12.50-DLD LAB(Grp B)\n\n";




        break;
        default:
        cout<<"\n\n!!!!!!! Thank you!!!!  !!!!\n\n";

    }
    break;
}
}
