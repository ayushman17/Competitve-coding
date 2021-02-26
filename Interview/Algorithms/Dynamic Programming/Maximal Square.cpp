/*
 A quality agent is responsible for inspecting samples of the finished products in the production line. Each sample contains defective and non-defective products represented by 1 and 0 respectively.  After placing the product samples sequentially in a two-dimensional square matrix of product samples, determine the size of the largest square area of defective products.

 

 

Example

n x n = 5 x 5 matrix of product samples

samples = [[1,1,1,1,1], [1,1,1,0,0], [1,1,1,0,0], [1,1,1,0,0], [1,1,1,1,1]]

 



 

 

The first square area of defective products is a sub-matrix 3 x 3 starting at (0,0) and ending at (3,3)
The second square area of defective products is also a sub-matrix 3 x 3 starting at (1,0) and ending at (4,3)
The third square area of defective products is also a sub-matrix 3 x 3 starting at (2,0) and ending at (5,3)
The size of the largest square area of defective products is 3
 

 

Function Description

Complete the function largestArea in the editor below.

 

largestArea has the following parameter:

    int samples[n][n]:  a two-dimensional array of integers

 

Returns:

    int: an integer that represents the size of the largest square sub-matrix of defective products.

 

Constraints

0 ≤ n ≤ 500
samples[i][j] is in the set {0, 1} (0 denotes anon-defective products and 1 denotes a defective product)
 

Input Format For Custom Testing
Sample Case 0
Sample Input For Custom Testing

STDIN       Function 
-----       -------- 
3       →   samples[] size n = 3
3       →   samples[i][] size n = 3
1 1 1   →   samples=[[1,1,1],[1,1,0],[1,0,1]]
1 1 0
1 0 1
Sample Output

2
Explanation



 

 
The first  square area of defective products is a sub-matrix 2 x 2 starting at (0,0) and ending at (1,1)
The other square area of defective products are a sub-matrix 1 x 1 at (2,0) ,  (0,2) and (2,2)
The size of the largest square area of defective products is 2
 

Sample Case 1
Sample Input For Custom Testing

STDIN     Function
-----     --------
3     →   samples[] size n = 3
3     →   samples[i][] size n = 3
0 1 1 →   samples=[[0,1,1],[1,1,0],[1,0,1]]
1 1 0
1 0 1
Sample Output

1
Explanation


 

 
All square area of defective products are a sub-matrix 1 x 1 at (0,1) ,  (0,2) , (1,0), (1,1), (2,0) and (2,2)
The size of the largest square area of defective products is 1
 */

int dp[502][502];
int largestArea(vector<vector<int>> samples) {
    int h = samples.size();
    int w = samples[0].size();
    int maxsqlen=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(samples[i][j]==1){
                dp[i][j]=1;
                if(i>0 && j>0){
                    dp[i][j]+=min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]}); 
                }
                maxsqlen = max(maxsqlen, dp[i][j]);   
            }
        }
    }
    return maxsqlen;
    
}


