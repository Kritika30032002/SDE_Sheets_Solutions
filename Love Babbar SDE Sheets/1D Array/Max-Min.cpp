
class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int max = INT_MIN; 
    	int min = INT_MAX;
    	int sum = 0;
    	for(int i=0; i<N; i++){
    	    if(A[i] < min)
    	    {
    	        min = A[i];
    	    }
    	    if(A[i] > max){
    	        max = A[i];
    	    }
    	}
    	sum = min + max;
    }

};
