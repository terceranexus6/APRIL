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
