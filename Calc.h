// calc2.h

class Calc
{
// Public Methods
public:
  Calc(); //Constructor
  ~Calc(); //Destructor

  void num1_set(int num);
  int num1_get();

  void num2_set(int num);
  int num2_get();

  int sum_get();
  int mult_get();

  // Private Data
 private:
  int num1;
  int num2;
  int sum;
  int mult;
};