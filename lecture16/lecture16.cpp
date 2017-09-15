//Created By: April Browne
 //Created On: 8/22/2016
 
 #include <iostream>
 using namespace std;
 
 struct monster{ // IMPORTANT BECAUSE THIS IS OUR STRUCT WHICH IS THE TEMPLATE OF OUR OBJECTS // // NOT SURE WHY THE BRACKET IS ON THERE //
  string head;
  string eyes;
  string ears;
  string mouth;
  string nose;
 }; // WHY IS THE BRACKET HERE ?? //
 
 int main()
 {
   monster monsterA; // variables YAAAAAASSSSSS IMPORTANT //
   monsterA.head = "Zombus";
   monsterA.eyes = "Vegitas";
   monsterA.ears = "Wackus";
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   
   cin>>monsterA.head;
   
   cout<<"Head:"<<monsterA.head<<endl; // i want to make sure that this is an output //
   cout<<"Eyes:"<<monsterA.eyes<<endl;
   cout<<"Ears:"<<monsterA.ears<<endl;
   cout<<"Nose:"<<monsterA.nose<<endl;
   cout<<"Mouth:"<<monsterA.mouth<<endl;
     
 }