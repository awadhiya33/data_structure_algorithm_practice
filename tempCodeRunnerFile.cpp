int leap_year_checking(int year){

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