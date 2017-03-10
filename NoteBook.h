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
