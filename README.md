# thoughtWorks:HomeWork
## generateSummary 主要工程文件      
* solution.h 类定义头文件   
* solution.cpp 类的成员函数定义cpp文件   
* generateSummary.cpp 包含主函数的cpp文件   
   
### 主要函数
* `int _tmain(int argc, _TCHAR* argv[])`：主函数
* `vector<string> getResult(vector<string> strs)`：主要功能函数    
* `string generateSummary(string input)`：核心函数
* `string intToStr(int num)`：整数转字符串函数
* `int getWeekDay(int y,int m,int d)`：根据一个给定日期，获得星期几
* `int getCourtNum(int x)`：给定参加的人员数量，计算出需要预定的y场地数量
* `int getSumCost(int weekday,int startTime,int endTime)`：给定时间，计算出定一个场地所需要的费用  

### 函数功能介绍
* `int _tmain(int argc, _TCHAR* argv[])`：主函数   
    * 输入：循环接收输入，对于每次循环，给定数据组数n，并输入n组数据；   
    * 输出：对于给定的n组数据，调用getResult()函数，得到数据处理结果，并将处理结果依次输出；   
    * 功能：输入n组数据，通过调用getResult()函数，输出数据处理结果。   
         
* `vector<string> getResult(vector<string> strs)`：主要功能函数   
    * 输入：将n组数据从作为实参传递给函数参数，作为函数的输入数据；   
    * 输出：通过调用函数，对传入函数的c实参进行s处理，得到每组数据的最终处理结果；   
    * 功能：将实参传递过来的数据，通过调用函数对其进行处理，得到每组数据的处理结果。    
       
* `string generateSummary(string input)`:核心函数   
    * 输入：输入一组数据，以字符串形式表示日期、时间、人数；   
    * 输出：对于输入的数据，通过调用函数获得字符串中的日期并计算出其对应的星期几，根据输入的时间计算出该时间段单个场地所需的费用，同时对于输入的人数计算出需要定的场馆数量，并综合计算出总的收入、费用和总的收益。    
    * 功能：根据输入的日期、时间段和人数，计算出总的收入、支出和收益。
       
* `string intToStr(int num)`：整数转字符串函数    
    * 输入：输入一个整型数；    
    * 输出：输出该整数转换成的字符串；    
    * 功能：将一个给定的整数，将其转换成字符串格式。   
        
* `int getWeekDay(int y,int m,int d)`：根据一个给定日期，获得星期几    
    * 输入：输入一个日期包括年、月、日；   
    * 输出：根据给定的日期，根据一个函数计算出该日期对应的星期几；   
    * 功能：输入一个日期，输出该日期对应的星期几。   
       
* `int getCourtNum(int x)`：给定参加的人员数量，计算出需要预定的y场地数量    
    * 输入：输入一个整数，表示参加活动的人员数量；    
    * 输出：根据一定的规则，计算出对于x个人员需要定的场地的数量；   
    * 功能：输入参加活动的人员数量，计算出需要定的场地数量。    
    
* `int getSumCost(int weekday,int startTime,int endTime)`：给定时间，计算出定一个场地所需要的费用    
    * 输入：输入一个活动的时间段；   
    * 输出：输出该时间段内定一个场地所需要的单位费用；    
    * 功能：输入一个时间段，输出该时间段段内定一个场地所需的单位费用。    
          
## UnitTest 单元测试工程文件   
* solution.h 类定义头文件   
* solution.cpp 类的成员函数定义cpp文件   
* solutionTest.cpp 单元测试cpp文件   
      
### 主要函数   
* `TEST_METHOD_INITIALIZE(setUp)` 测试类的构造函数；    
* `TEST_METHOD_CLEANUP(tearDown)` 测试类的析构函数；    
* `TEST_METHOD(testIntToStr)` 测试类的成员函数：整数转字符串函数；    
* `TEST_METHOD(testGetWeekDay)` 测试类的成员函数：获取一个日期对应的星期几；   
* `TEST_METHOD(TestGetCourtNum)` 测试类的成员函数：获取给定人数对应的场地数量；   
* `TEST_METHOD(TestGetSumCost)` 测试类的成员函数：获取给定日期某一时间段一个场地对应的费用；    
* `TEST_METHOD(TestGenerateSummary)` 测试类的成员函数：给定一个字符串表示输入，计算出相应的结果；   

