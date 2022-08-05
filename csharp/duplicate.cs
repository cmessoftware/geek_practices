//{ Driver Code Starts
//Initial Template for C#

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DriverCode
{

    class GFG
    {
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                int N = Convert.ToInt32(Console.ReadLine());// Input for size of array
                int[] arr = new int[N];

                string[] stringArray = Console.ReadLine().Split(' ');
                for (int i = 0; i < N; i++)
                {
                    arr[i] = int.Parse(stringArray[i]);
                }

                Solution obj = new Solution();
                int[] res = obj.duplicates(arr, N);
                for(int i = 0;i<res.Length;i++){
                    Console.Write(res[i]+" ");
                }
                Console.Write("\n");

            }

        }
    }

    
// } Driver Code Ends
//User function Template for C#

class Solution
    {
        //Complete this function
        //Function to check if there is a pair with the given sum in the array.
        public int[] duplicates(int[] arr, int n)
        {
            //Your code here
            int aux[];
            foreach (var a in arr)
            {
               int current = arr[i];
               aux = arr.Select(x => x == current).ToList()
            }
            
        }

    }

//{ Driver Code Starts.
    
}
// } Driver Code Ends