#include"function.h"
using namespace std;

vector<string> getResult(vector<string> strs){
	vector<string> result;
	string line="[Summary]";
	result.push_back(line);
	string lineNull;
	result.push_back(lineNull);
	int income=0;
	int payment=0;
	for(int i=0;i<strs.size();i++){
		string line=generateSummary(strs[i]);
		result.push_back(line);
		int tempincome=0;
		int j=24;
		while(line[j]!=' '){
			tempincome=tempincome*10+line[j]-'0';
			j++;
		}
		j+=2;
		int tempPayment=0;
		while(line[j]!=' '){
			tempPayment=tempPayment*10+line[j]-'0';
			j++;
		}
		income+=tempincome;
		payment+=tempPayment;
	}
	result.push_back(lineNull);
	string line1="Total Income: ";
	line1+=intToStr(income);
	result.push_back(line1);
	string line2="Total Payment: ";
	line2+=intToStr(payment);
	result.push_back(line2);
	string line3="Profit: ";
	if(income>=payment){
		line3+=intToStr(income-payment);
	}
	else{
		line3.push_back('-');
		line3+=intToStr(payment-income);
	}
	result.push_back(line3);
	return result;
}

string generateSummary(string input){
	int year=0;
	int month=0;
	int day=0;
	int startTime=0;
	int endTime=0;
	int x=0;
	string result=input.substr(0,23);
	for(int i=0;i<4;i++){
		year=year*10+(input[i]-'0');
	}
	for(int i=5;i<7;i++){
		month=month*10+(input[i]-'0');
	}
	for(int i=8;i<10;i++){
		day=day*10+(input[i]-'0');
	}
	if(month<1||month>12||day<1||day>31){
		result+="+0 -0 0";
		return result;
	}
	for(int i=11;i<13;i++){
		startTime=startTime*10+(input[i]-'0');
	}
	for(int i=17;i<19;i++){
		endTime=endTime*10+(input[i]-'0');
	}
	for(int i=23;input[i]!='\0';i++){
		x=x*10+(input[i]-'0');
	}
	int weekday=getWeekDay(year,month,day);
	int sumCourt=getCourtNum(x);
	int sumCost=sumCourt*getSumCost(weekday,startTime,endTime);
	int sumIncome;
	if(x<4){
		sumIncome=0;
	}
	else{
		sumIncome=30*x;
	}
	result.push_back('+');
	result+=intToStr(sumIncome);
	result+=" -";
	result+=intToStr(sumCost);
	result.push_back(' ');
	if(sumCost==sumIncome){
		result.push_back('0');
	}
	else if(sumCost<sumIncome){
		result.push_back('+');
		result+=intToStr(sumIncome-sumCost);
	}
	else{
		result.push_back('-');
		result+=intToStr(sumCost-sumIncome);
	}
	return result;
}

string intToStr(int num){
	string result;
	if(num<=0){
		result.push_back('0');
		return result;
	}
	while(num>0){
		result.push_back(num%10+'0');
		num/=10;
	}
	for(int i=0,j=result.length()-1;i<j;i++,j--){
		int temp=result[j];
		result[j]=result[i];
		result[i]=temp;
	}
	return result;
}

int getWeekDay(int y,int m,int d){
	if(m==1||m==2){
		m+=12;
		y--;
	}
	int weekday=(d+(2*m+3*(m+1)/5+y+y/4-y/100+y/400))%7;
	return weekday+1;
}

int getCourtNum(int x){
	if(x<4){
		return 0;
	}
	int t=x/6;
	if(t==0){
		return 1;
	}
	if(t==1){
		return 2;
	}
	if(t==2||t==3){
		if(x%6>=4){
			return t+1;
		}
		else{
			return t;
		}
	}
	else{
		return t;
	}
}

int getSumCost(int weekday,int startTime,int endTime){
	int sumCost;
	if(startTime<9||endTime>22){
		return 0;
	}
	if(weekday>=1&&weekday<=5){
		if(startTime<=12){
			if(endTime<=12){
				sumCost=(endTime-startTime)*30;
			}
			else{
				sumCost=(12-startTime)*30+(endTime-12)*50;
			}
		}
		else if(startTime<=18){
			if(endTime<=18){
				sumCost=(endTime-startTime)*50;
			}
			else{
				sumCost=(18-startTime)*50+(endTime-18)*80;
			}
		}
		else if(startTime<=20){
			if(endTime<=20){
				sumCost=(endTime-startTime)*80;
			}
			else{
				sumCost=(20-startTime)*80+(endTime-20)*60;
			}
		}
		else{
			sumCost=(endTime-startTime)*60;
		}
	}
	else{
		if(startTime<=12){
			if(endTime<=12){
				sumCost=(endTime-startTime)*40;
			}
			else{
				sumCost=(12-startTime)*40+(endTime-12)*50;
			}
		}
		else if(startTime<=18){
			if(endTime<=18){
				sumCost=(endTime-startTime)*50;
			}
			else{
				sumCost=(18-startTime)*50+(endTime-18)*60;
			}
		}
		else{
			sumCost=(endTime-startTime)*60;
		}
	}
	return sumCost;
}
