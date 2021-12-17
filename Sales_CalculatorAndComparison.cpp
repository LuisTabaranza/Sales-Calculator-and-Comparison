#include<iostream>
using namespace std;
int main()
{
   const int MONTHLY_SALES = 12;
   const string month[12] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
   double totalSales = 0;
   double storeSales[12];
   double Average, Prevsale;
   int x;
   cout << "Enter your previous total sale: ";
   cin >> Prevsale;
   cout << endl;

   for(x = 0; x < MONTHLY_SALES; ++x)
   {
      cout << "Enter the sales for month " << month[x] << " "; 
      cin >> storeSales[x];
   }

   cout << endl << "The sales for each month are:" << endl;
   for(x = 0; x < MONTHLY_SALES; ++x)
   {
      totalSales += storeSales[x];
      cout << storeSales[x] << "  ";
   }
   cout << endl;
   Average = totalSales / MONTHLY_SALES;
   cout << "The average sales is " << Average << endl;
   
   if(Average == Prevsale)
   {
       cout << "\nThe total amount of sale " << Average << " is equal to the previous total sale " << Prevsale; 
   }
   else if(Average < Prevsale)
   {
       cout << "\nThe total amount of sale " << Average << " is lower compared to the previous total sale " << Prevsale;
   }
   else if(Average < Prevsale)
   {
       cout << "\nThe total amount of sale " << Average << " is lower compared to the previous total sale " << Prevsale;
   }

   return 0;
}