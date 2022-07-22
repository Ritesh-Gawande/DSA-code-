#include<iostream>  //header file
#include<vector>    //header file
#include<algorithm>  //header file
using namespace std;
class Solution {       //we had made a class of name solution 
    public:
        
        bool dfs(vector<int> matchsticks, int target, vector<int> &sides, int idx){
            //we have decleare boolean method type 
            //we made vector of integer variable which will take matchstick array
           // side are giving length of each side
           //idx = index position in array
           //base condition
            if(idx == matchsticks.size()) //when idx is equal to size of array
            {  // check that is all the sides are equal
                if(sides[0] == sides[1] && sides[1] == sides[2] && sides[2] == sides[3]){
                    return true; //if yes return true
                }
                return false; //else false
            }//end of base condition
            
            for(int i = 0; i < 4; i++)//putting loop for sides of square
            { //if the side sides[i] + matchsticks[idx] is greater
            // than target then no need to call dfs
            // because from  this, side cannot be made
                if (sides[i] + matchsticks[idx] > target){
                    continue;
                }
              
                //putting the  matchstick in all the sides square
                sides[i] += matchsticks[idx];
                //check if we get the correct ans then return true
                if( dfs(matchsticks, target, sides, idx+1) ){
                    return true;
                }
                 //else backtrack
            //remove the matchstick from that position
                sides[i] -= matchsticks[idx];
            }
        //and return false
             
            return false;
        
            
        }
        
        //This is for checking square Condtion 
        bool makesquare(vector<int>& matchsticks) {
            
            if(matchsticks.size() == 0)//this is a case where no matchstick is given
            {
                return false;//return false
            }
        //initially sum of matchstick is zero
            int sum = 0;
        //from this we will calculate the sum of matchstick 

            for(int i = 0; i < matchsticks.size() ; i++){
                sum += matchsticks[i];
            }
        //side of each length is target
            //taking target variable for making the average
            //side of each length is target
            int target = sum / 4;
            vector<int> sides(4,0);//we made a vector of name side
            sort(matchsticks.begin(), matchsticks.end(), greater<int>()); 
            // sort the matchstick in ascending order 
            //to check weather the given array can form the square
            return dfs(matchsticks, target, sides, 0);
            //passing value to dfs function
            

            
        }
    };
int main() //this is for taking input
{
   vector<int> v;
   int n,leangth,c;
   cout<<"Enter the total number of the matchsticks"<<endl;//this is for no of matchstick array input
   cin>>n;
   cout<<"Enter the leangth of the of the matchsticks"<<endl;//this is for length of array
   for(int i=0;i<n;i++){
    cin>>leangth; //taking input of elements
    v.push_back(leangth);//pushing element from back
   }
   Solution obj;
   c=obj.makesquare(v);
   if(c==1)
   cout<<"True"<<endl; //if it form the square then return true
   else
   cout<<"False"<<endl;//if it does not form the square then return False/
   
}