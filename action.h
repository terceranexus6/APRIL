int action(string line)
{
  cout<< line<<endl; //para debuggear
    int ac,ac2;
    ac2=ac=0;
    string line2;
    if(line == "read")
    {
      ac = 1;
      cout<<"\n>> ";
      cin>>line2;
      if(line2 == "over")
      {
        ac2=60;
      }
      else if(line2 == "page")
      {
        ac2=70;
      }
    }
    else if(line == "write")
    {
      ac = 2;
    }

    else if(line == "walk")
    {
      ac = 3;
      cout<<"\n>> ";
      cin>>line2;
      if(line2 == "straight")
      {
        ac2=20;
      }
      else if(line2 == "right")
      {
        ac2=30;
      }
      else if(line2 == "left")
      {
        ac2=40;
      }
      else if(line2 == "back")
      {
        ac2=50;
      }
    }
/*
    else if()
    {

    }*/
    else
    {
      ac = 99;
    }


    return ac+ac2;
}
