#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int number1, number2, number3, nums_sum, nums_average,nums_product,nums_smallest,nums_largest;

int main()
{
    cout<<"Input 3 different Integers:"<<endl;
    cin>> number1>> number2>> number3;

    nums_sum = number1 + number2 + number3;
    nums_average = nums_sum / 3;
    nums_product = number1 * number2 * number3;
    if (number1 < number2){
        nums_smallest = number1;
        nums_largest = number2;
    }
    else if (number2<number3)
    {
        nums_smallest = number2;
        nums_largest = number3;
    }
    else{
        nums_smallest = number3;
        nums_largest = number1;
    }
    cout<<"Sum is "<<nums_sum;
    cout<<"\nAverage is "<<nums_average<<endl;
    cout<<"Product is "<<nums_product<<endl;
    cout<<"Smallest is "<<nums_smallest<<endl;
    cout<<"Largest is "<<nums_largest<<endl;   

}