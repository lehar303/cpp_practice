  #include<iostream>

    auto& max(int& a,int&b)
{
    if(a>b)
        return a;
    else
        return b;
}

  int main()
  {
    int a = 5,b = 6;

    int& ref = max(a,b);

    return 0;
  }

