//Anthony Reyes
// Assignment 5

#include <iostream>
#include <math.h>


using namespace std;
 
   

int main ()
{
    int male = 2;
    int female = 1;
    int gender;
    int height;
    int weight;
    
    cout << "Hello :D! This will be a calorie calculator on if you'd like to maintain weight, lose weight, or gain weight!" << endl;
    cout << "Let's begin with getting your BMI (Body Mass Index) <3! " << endl;
    cout << "Are you a male or female ? " << endl;
    cout << "Enter 1 for female enter 2 for male " << endl;
    cin >> gender;
    
    while (gender <=0 || gender >= 3) // if use enter a number before 1 or above 2
    {
        cout << "Error gender not leget :(" << endl; // code will say error
        cout << "Please type in 1 for male or 2 for female please :3 " << endl; // code will ask again
        cin >> gender; // user inputnumber number again
    }
    if (gender == 1)//if statement for 1
    {
        int female;
    }
    else //if statment for 2
    {
        int male;
    }
    
    double weight1; 
    double height1;
    double bmi;

    cout << "Let's get your weight in pounds please: " << endl;
    cin >> weight; // asking user for weight
    cout << "How about your height in inches? " << endl;
    cin >> height; // asking user for height

     bmi = (weight1 * 703) / (height1 * height1); // caculation for BMI
    
    if(bmi < 18.5) // underweight bmi
    {
    cout << "Your weight is below average, please consider eating more nutrient dense foods in lipids such as nuts, fatty fish, and unsaturated oils <3. Increase calorie intake by 500 each day off of your AMR to gain a pound each week, not exceeding 2 pounds is best!" << endl;
    }
    if(bmi >= 18.5 && bmi <= 25); // healthy bmi
    {
    cout << "Congrats! You're in the green healthy zone, gg! Eating your recommended calories is great enough, but if you want to become physically active and maintain weight consider following the AMR" << endl;
    }
    if(bmi >= 25 && bmi <=29.9); // overweight bmi
    {
    cout << "You are overweight, try and reach torwards an active level and decrease calorie intake by 500 each day off of your AMR to lose a pound each week, do not exceed losing 2 pounds is best!" << endl;
    }
    if(bmi >= 30)
    {
    cout << " You're in the red zone, you'll have to start losing weight and consume less calories. Start by looking at the AMR that'll come up soon to see about how many calories you'll want to consume less!" <<endl; // obese bmi
    }
    cout << "Your BMI is " << bmi << "!" << endl; //bmi caculations

    int age;
    double bmr;
    double amr;
    int numbers;
    cout << "How old are you? " << endl;
    cin >> age;
    cout << "Computing BMR. " << endl;
    if (gender == 1) // boolean statement
    {
    bmr = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age); //caculations for bmr if female
    }
    else
    {
    bmr = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age); //caculations for male bmr
    }
    
    cout << "BMR is known as Basal Metabollic Rate which determines how much calories is used during no physical activiaty in a day~. " << endl;
    cout << "Your BMR is " << bmr << endl ;
    cout << "Let's go ahead and get your Adjusted Metabollic Rate (AMR) to find out how many calories you need daily. " << endl;
    cout << "How active are you ? " << endl;
    cout << "Would you say:" << endl; 
    cout << "1. For not active" << endl; 
    cout << "2. A little active" << endl;
    cout << "3. Or really active?" << endl;
    cin >> numbers;

    
    while (numbers <=0 || numbers >= 4)
    if (numbers  == 1);
    {
      amr = ( bmr * .30 ) + bmr;
    }
    if (numbers == 2);
    {
      amr = (bmr * .50) + bmr;
    }
    if (numbers == 3);
    {
      amr = (bmr * 1) + bmr;
    }
    cout << " Your AMR is " << amr << "!" << endl;
    cout << "Rember, if you want to lose weight try to consume 500 calories less each day to lose a pound each week. " << endl;
    cout << "To gaind weight, you'd want to consume 500 calories more each day to gain a pound each week. " << endl;
    cout << "Try not to exceed past 2 pounds in losing and gaining or losing weight." << endl;
    
return 0;
    
}


//tried to use if else staements. while statements, but still not getting the correct output...
