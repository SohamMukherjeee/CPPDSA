// strings are used to store sequence same datatype
// string <string-name>="ABCD"


//********** input************

//string str; 
//cin>>str------> Soham Mukherjee
// cout<< str; ------> Soham
// only soham is printed because "cin " only works until input has space;
// to print every thing we need to use getline(cin,str)

//string str; 
//getline(cin,str)------> Soham Mukherjee
// cout<< str; ------> Soham Mukherjee




//************indexing of charac in a string*****************

// char = S O H A M \0    ------"\0" = null character
//index = 0 1 2 3 4 5



// *****************ASCII Value**********
// to know more about ascii ,just google it;



//****** String VS Character Array***********

//    string 
// string is a class & string variable is objects of this class
// string str_name;------> to declare a string
// dynamic memory allocation;
// no pre-allocated memory
// have inbuilt functions

//     charac array
// charac array of class data type
// char array-name[size]----------------->to declare a charac array;
// static memory allocation
// unused allocated memory is wasted  ---->
// faster

//---------------< INBUILT FUNCTION >------------

// reverse() --------> 

//reverse a string from starting ptr to end ptr 
// reverse(ptr`1,ptr2)
// example
// string str="abcd"
// reverse(str.begin(),str.end())
// Time complexity = o(length of string)

// substr() --------> 
// to find substring of an given string
// substr(position,length)
// string str="Soham"
// str.substr(0,3)------->"Soh"
// str.substr(1)------->"oham"
// Time complexity = o(length of string)


//  "+" add two string
// s1= "Soham"  , s2="Mukherjee"
// cout<<s1+s2  ------> SohamMukherjee

// s1+=s2 --> s2 is getting appended after s1
// s1=s1+s2 copy string created for s1, extra space used

// strcat() -------->  conatenate two charac array
// char s1[20]= "Soham"  , char s2[20]="Mukherjee"
// strcat(s1,s2);
// cout<<s1  ------> SohamMukherjee


// string s1="abcd";
// char ch= "e";
// s1.push_back(ch);
// cout<<s1<<endl;



// --------------
//  str.size()
//  str.length()
// ---------for string --------------
//  string s1="abcde"
//  cout<<s1.size()<<endl;-----> 5
//-------------for char array-----------
// char ch[20]="abcde"
// cout<<strlen(ch)


//---------to_sring()---------
// to convert int/numerical value to string
// int num=4;
// to.string(num)--->"4"


// int num =432
// string str=to_string(num);
// str+="1";
// cout<<str<<endl-----> 4321

// ------------------------------------------------------------------------
//*************************************************************************
 // ----->>>> sort a given array
 // index= 'a'-'a'=0;
//        (97-97)-0
 
 // index of b = 'b' -'a' =98-97=1;
 // index of str[i]=str[i]-'a'