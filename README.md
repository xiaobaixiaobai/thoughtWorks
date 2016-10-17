# thoughtWorks:HomeWork
## 主要函数
* `int _tmain(int argc, _TCHAR* argv[])`:主函数
* `vector<string> getResult(vector<string> strs)`:主要子函数
* `string generateSummary(string input)`:核心函数
* `string intToStr(int num)`：整数转字符串函数
* `int getWeekDay(int y,int m,int d)`：获取一个给定日期，获得星期几
* `int getCourtNum(int x)`：给定参加的人员数量，计算出需要预定的y场地数量
* `int getSumCost(int weekday,int startTime,int endTime)`：给定时间，计算出定一个场地所需要的费用  

## 函数功能介绍
* `int _tmain(int argc, _TCHAR* argv[])`主函数   
    * 输入：循环接收输入，对于每次循环，给定数据组数n，并输入n组数据；   
    * 输出：对于给定的n组数据，调用getResult()函数，得到数据处理结果，并将处理结果依次输出；    
    * 功能：输入n组数据，通过调用getResult()函数，输出数据处理结果。   
         
* `vector<string> getResult(vector<string> strs)`:主要子函数    
    * 输入:
