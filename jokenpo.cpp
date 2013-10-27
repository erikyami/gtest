#include <iostream>
#include <cstring>

using namespace std;


string jokenpo(string j1, string j2)
{
  if (j1 == "pedra" || j2 == "tesoura" || j1=="tesoura" || j2=="pedra")
    return "pedra";

  return "";
}


/*
int main()
{
  cout << jokenpo("pedra","tesoura");
  return 0;
}*/
