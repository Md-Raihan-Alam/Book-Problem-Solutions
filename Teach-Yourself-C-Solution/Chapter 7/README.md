## Chapter 7

### Skills Check

<br/>
Answer to Q no 1->the value of i is indirectly set by pointer<br/>
<br/>
Answer to Q no 2->An array without an index generate a pointer at the beginning in the array<br/>
<br/>
Answer to Q no 3->Yes. It works because the compiler creates a string level entry for "this is a string" and make the pointer point to it<br/>
<br/>
Answer to Q no 6->Yes. It displays 'C'<br/>
<br/>

### 7.1

<br/>
Answer to Q no 3->Yes. but it can be made better if the function was fully declared in function prototype.<br/>
<br/>
Answer to Q no 4->double *Purge(void)<br/>
<br/>

### 7.2

<br/>
Answer to Q no 2->The function will keep calling until it crashes because it has no condition that stop the function from recalling itself over and over<br/>
<br/>

### 7.3

<br/>
Answer to Q no 1->NO, myfunc has no  parameter pointer so it will show error<br/>
<br/>
Answer to Q no 3->call by value, the value of argument is passed to function. call by reference, the address of argument is passed to function<br/>
<br/>

### Mastery Skills Check

<br/>
Answer to Q no 1->A function prototype that has no parameter that specifies "void" in the parameter list in function prototype<br/>
<br/>
Answer to Q no 2->A function that has been declare once and revealed it body later is called function prototype. A function prototype tells the compiler three things, one is function return type, two is function name and three is function paramter. The compiler will be able to tell whether the function is declared incorrectly later<br/>
<br/>
Answer to Q no 3->The command line arguments get passed to using "argc" and "argv" in the parameter in function "main()"<br/>
<br/>
Answer to Q no 6->double myfunc(int x,int y,char ch);<br/>
<br/>
Answer to q no 7->
double myfunc(x,y,z) 
int x,y;
char ch;
{

}<br/>
<br/>
Answer to Q no 8->exit() terminates the program<br/>
<br/>
Answer to Q no 9->atoi() turn the string to integer value<br/>
<br/>

### Cumulative Skills-Check

<br/>
Answer to Q no 4->Pointer contains the address of object/value. When this pointer is passed to function, the function may alter the content of object pointed to by the pointer. This is equivalent to call by reference parameter<br/>
<br/>