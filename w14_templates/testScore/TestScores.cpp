#include <iostream>
using namespace std;


class TestScores{

    
    private :
        int scores[5];
    
    public:
    TestScores(int array [] ){
        for (int i = 0; i < 5; i++)
        {
            scores [i] = array[i];
        }
    }
    int average(){
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            if(scores[i] < 0 || scores[i] > 100 ) {
                throw  "Invalid test score" ;
            }
            total += scores[i];
        }
            return total/5; 
        
    }
    


};

int main(){
    int scores [] = {200, 90, 60, -1, 80};
    TestScores t(scores);
    try{
        cout  << "Average score : " << t.average() << endl;
    }
    catch(const char* ex){
        //outputs error msg. 
        //Unlike cout, cerr doesn't use buffer, therefore it flushs the output immediately
        cerr << ex;
    }


    // int marks[] = {440, 55, 66,77,22};
    // TestScores *test = new TestScores(marks);
    // try {
    //     double av = test->average();
    //     cout << "Average marsk: " << av;
    // }
    // catch(const char* msg){
    //     cerr
    //     << msg;
    // }
}