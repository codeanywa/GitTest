// test1.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "StdAfx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//xin
int main()
{
	string s,temp,c;
	vector<string> candidate;	//��ѡ������
	int voteNum[255]={0};		//��Ʊ������
	int i=0,invalid=0;			//invalid��ЧƱ
	int b;
	int eeee;
	int eed;
	float ee;
	while(cin>>s)
	{
		if (s.compare("addCandidate")==0)
		{
			cin>>c;
			candidate.push_back(c);
		} 
		else if(s.compare("vote")==0)
		{
			int j;
			cin>>temp;
			for (j=0;j<candidate.size();j++)
			{
				if (temp.compare(candidate[j])==0)
				{
					voteNum[j]++;
					break;
				}
			}
			if (j==candidate.size())
			{
				invalid++;
			}
		}	
		else if (s.compare("getVoteResult")==0)
		{
			break;
		}
	}
	//���
	for (int k=0;k<candidate.size();k++)
	{
		cout<<candidate[k]<< " "<<voteNum[k]<<endl;
	}
	cout<<invalid<<endl;
	system("pause");
	return 0;
}


