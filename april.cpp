#include<iostream>

using namespace std;


class NoteBook
{
private:
  //string notes;
  string pages[100];

public:
  NoteBook()
  {
      for(int i=0;i<100;++i)
      {
        pages[i]="none";
      }
  }

  void setnotes(int pag, string note)
  {
    //pages[pag]=note;

    if(pages[pag]== "none")
    {
      pages[pag]=note;
    }
    else
    {
      cout<<"\nYou already wrote in this page.";
      cout<<"\n> "<< pages[pag];
    }
  }

  string getNotes(int i)
  {
    return pages[i];
  }
};

class April
{
  private:
    int life;
    string code;
    //string notes;
    bool death;
    int level;
    //Backpack bp;

  public:
    April()
    {
      life  = 20;
      death = false;
      level = 1;
      code = "none";
    }

    void setLife(int l)
    {
      life = l;
    }

    void setLevel(int le)
    {
      level = le;
    }

    void addLevel(int n)
    {
      level = level+n;
    }

    void levelUp()
    {
      //level= level+1;
      addLevel(1);
    }

    void killapril()
    {
      death = true;
    }

    void takeLife(int n)
    {
      life = life-n;
      if(life<=0)
      {
        killapril();
      }
    }

    void setcode(string c)
    {
      code = c;
    }

    string getcode()
    {
      return code;
    }

    int getLife()
    {
      return life;
    }

    int getLevel()
    {
      return level;
    }

};

class Backpack
{
private:
  int bp[9][1];
public:
  Backpack()
  {
    for(int i=0;i<10;++i)
    {
      bp[i][0]=0;
      bp[i][1]=0;
    }
  };

  int getOb(int i)
  {
    return bp[i][0];
  }

  int getLevOb(int i)
  {
    return bp[i][1];
  }

  void setOb(int o, int pos)
  {
    bp[pos][0] = o;
  }

  void setLevOb(int l,int pos)
  {
    bp[pos][1] = l;
  }
};

int main()
{
  April player;
  NoteBook blue;
  Backpack bp;

  
  cout<<"\n";
}
