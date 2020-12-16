#include <iostream>

int main (int argc, char *argv[])
{
  if (argc != 5)
  {
    std::cout <<"you must enter only 3 command line arguments"<<std::endl;
    std::cout << "Usage: " << argv[0] << " arg1 arg2" << std::endl;
    return EXIT_FAILURE;
  }

  for (int i=0; i<argc;i++)
  {
    std::cout<<argv[i]<<std::endl;
  }
//  std::cout<<argv[0]<<std::endl;
//  std::cout<<argv[1]<<std::endl;
//  std::cout<<argv[2]<<std::endl;

  return EXIT_SUCCESS;
}
