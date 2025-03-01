/*
// int leap_year_checking(int year){

// 	if(year%400==0) return 1;
// 	else if(year%100==0) return 0;
// 	else if(year%4==0) return 1;
// 	else return 0;

// 	}

// int no_of_days_in_month(int month, int year){

//     if( month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ) // jan, march, may, july, aug, oct, dec contains 31 days
//         return 31;
        
//     if( month==4 || month==6 || month==9 || month==11 ) // april, jun, sept, nov contains 30 days
//         return 30;
    
//     if( month==2 ){
//         int n=leap_year_checking(year);
//         if(n==1) return 29;  // if year is a leap year then Feb contain 29 days, otherwise it contain 28 days
//         else return 28;
//     }
// }


// int sub_str(string s,int i,int pos){
//     string res="";
//     while(pos){
//         res+=s[i];
//         i++;
//         pos--;
//     }
//     stringstream container(res);
//     int x;
//     container >> x;
//     return x;
// }

    // int day1,day2,month1,month2,year1,year2;
    // int n;
    
    // // Inputting both dates
    // cout<<"Enter the first date=>\n";
    // cout<<"Day :";
    // cin>>day1;
    // cout<<"Month (ex: for january write '1') :";
    // cin>>month1;
    // cout<<"Year :";
    // cin>>year1;
    // n=no_of_days_in_month(month1,year1);
    
    // // checking if entered date is valid or not
    // if(day1<1 || day1>n || month1<1 || month1 >12 || year1 <1)
    // {
    //     cout<<"\nEntered date is not valid";
    //     exit(0);    // exiting from the program if the entered date is invalid
    // }
    
    // cout<<"\nEnter the second date=>\n";
    // cout<<"Day :";
    // cin>>day2;
    // cout<<"Month (ex: for january write '1') :";
    // cin>>month2;
    // cout<<"Year :";
    // cin>>year2;
    // n=no_of_days_in_month(month2,year2);
    
    // if(day2<1 || day2>n || month2<1 || month2 >12 || year2 <1)
    // {
    //     cout<<"\nEntered date is not valid";
    //     exit(0);
    // }
    
    // //Counting the difference between 2 dates in terms of no of days
    // long long int diff = difference_of_days(day1, month1, year1, day2, month2, year2);
    // cout<<"\nDifference between 2 dates in terms of =>";
    // cout<<"\nNo. of days :"<<diff<<" days";

    


// if(year1==year2){
//         if(month1==month2){
//             if(day1==day2)      //for same dates
//                 return 0;
//             else
//                 return abs(day1-day2);  //for same year, same month but diff days
//         }
//         else if(month1<month2){
//             int result=0;
//             for(int i=month1; i<month2; i++)
//             result=result+no_of_days_in_month(i,year1);
                
//             if(day1==day2)      //for same year, same day but diff month 
//                 return result;
//             else if(day1<day2){
//                 result=result+(day2-day1);
//                 return result;
//             }
//             else{
//                 result=result-(day1-day2);
//                 return result;
//             }
//         }
//         else{
//             int result=0;
//             for(int i=month2; i<month1; i++)
//             result=result+no_of_days_in_month(i,year1);
                
//             if(day1==day2)
//                 return result;
//             else if(day2<day1){
//                 result=result+(day1-day2);
//                 return result;
//             }
//             else{
//                 result=result-(day2-day1);
//                 return result;
//             }
//         }
//     }
//     else if(year1<year2){
//         int yeardays=0;
//         for(int i=year1; i<year2; i++){
//             if(leap_year_checking(i))
//                 yeardays=yeardays+366;
//             else
//                 yeardays=yeardays+365;
//         }
        
//         if(month1==month2){
//             if(day1==day2)      //for same month, same day but diff year
//                 return yeardays;
//             else if(day1<day2)
//                 return yeardays+(day2-day1);
//             else
//                 return yeardays-(day1-day2);
//         }
//         else if(month1<month2){
//             int result=0;
//             for(int i=month1; i<month2; i++)
//             result=result+no_of_days_in_month(i,year2);
                
//             if(day1==day2)      // for same day, diff year and diff month
//                 return yeardays+result;
//             else if(day1<day2){
//                 result=result+(day2-day1);
//                 return yeardays+result;
//             }
//             else{
//                 result=result-(day1-day2);
//                 return yeardays+result;
//             }
//         }
//         else{
//             int result=0;
//             for(int i=month2; i<month1; i++)
//             result=result+no_of_days_in_month(i,year2);
                
//             if(day1==day2)
//                 return yeardays-result;
//             else if(day2<day1){
//                 result=result+(day1-day2);
//                 return yeardays-result;
//             }
//             else{
//                 result=result-(day2-day1);
//                 return yeardays-result;
//             }
//         }
//     }
//     else{
//         int yeardays=0;
//         for(int i=year2; i<year1; i++){
//             if(leap_year_checking(i))
//                 yeardays=yeardays+366;
//             else
//                 yeardays=yeardays+365;
//         }
        
//         if(month1==month2){
//             if(day1==day2)      // for same day, same month but diff year
//                 return yeardays;
//             else if(day2<day1)
//                 return yeardays+(day1-day2);
//             else
//                 return yeardays-(day2-day1);
//         }
//         else if(month2<month1){
//             int result=0;
//             for(int i=month2; i<month1; i++)
//             result=result+no_of_days_in_month(i,year1);
                
//             if(day1==day2)
//                 return yeardays+result;
//             else if(day2<day1){
//                 result=result+(day1-day2);
//                 return yeardays+result;
//             }
//             else{
//                 result=result-(day2-day1);
//                 return yeardays+result;
//             }
//         }
//         else{
//             int result=0;
//             for(int i=month1; i<month2; i++)
//             result=result+no_of_days_in_month(i,year1);
                
//             if(day1==day2)      // for same day, diff year and diff month
//                 return yeardays-result;
//             else if(day1<day2){
//                 result=result+(day2-day1);
//                 return yeardays-result;
//             }
//             else{
//                 result=result-(day1-day2);
//                 return yeardays-result;
//             }
//         }
//     }
*/