#include <iostream>
#include "logcon.h"

using namespace std;

// V-2 // (p->(q^r)) ~ ((p->q)^(p->r))

int main()
{
    int q, r, p;
    LogCon ob;
    int choose;

    while(choose)
    {
        system("cls");
        cout << "Enter q r p: ";
        cin >> q >> r >> p;

        ob.a = q;
        ob.b = r;

        cout << "1 - NOT, 2 - AND, 3 - OR, 4 - IMP, 5 - EQU, 6 - XOR, 7 - MyFun" << endl;
        cin >> choose;

        switch (choose)
        {
            case 1: { if(ob.NOT()) cout << "TRUE" << endl;
                      else cout << "FALSE" << endl;
                      break;
                    }
            case 2: { if(ob.AND()) cout << "TRUE" << endl;
                      else cout << "FALSE" << endl;
                      break;
                    }
            case 3: { if(ob.OR()) cout << "TRUE" << endl;
                      else cout << "FALSE" << endl;
                      break;
                    }
            case 4: { if(ob.IMP()) cout << "TRUE" << endl;
                      else cout << "FALSE" << endl;
                      break;
                    }
            case 5: { if(ob.EQU()) cout << "TRUE" << endl;
                      else cout << "FALSE" << endl;
                      break;
                    }
            case 6: { if(ob.XOR()) cout << "TRUE" << endl;
                      else cout << "FALSE" << endl;
                      break;
                    }
            case 7: { if(ob.MyFun(q,r,p)) cout << "TRUE" << endl;
                      else cout << "FALSE" << endl;
                      break;
                    }
            default: { break; }
        }

        cout << endl;
        cout << "Continue? (1/0)" << endl;
        cin >> choose;
    }

    return 0;
}
