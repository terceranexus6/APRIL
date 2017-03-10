#include<iostream>

using namespace std;



int main()
{
  April player;
  NoteBook blue;
  Backpack bp;

  string act;
  int elec;

  cout<<"> ";
  cin>>act;

  elec = action(act);
  cout<<elec;

  switch(elec)
  {
    case 61:
      cout<<"\nyou read over";
      break;
    case 71:
      cout<<"\nyou read a page";
      break;
    case 2:
      cout<<"\nyou write";
      break;
    case 23:
        cout<<"\nyou walk straight";
        break;
    case 33:
        cout<<"\nyou walk right";
        break;
    default:
      cout<<"prueba";
      break;
  }


  cout<<"\n";
}
