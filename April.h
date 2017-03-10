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
