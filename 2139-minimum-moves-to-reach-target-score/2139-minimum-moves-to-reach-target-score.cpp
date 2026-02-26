class Solution {
public:
    int minMoves(int target, int maxDoubles)
    {
        //time complexity: O(log(target))
        //space complexity: O(1)

        //to count total number of moves required
        int moves=0;

        //keep repeating until target becomes '1'
        while(target>1)
        {
            //if 'target' is even, and 'double' operation can be used
            if((target%2==0) && (maxDoubles))
            {
                //undoing 'double' once(dividing 'target' by 2)
                target=target/2;
                //decreasing remaining number of 'double' operations by 1
                maxDoubles--;
            }
            //checking if no double operations are left
            else if(maxDoubles==0)
            {
                //subtracting remaining number at once
                moves=moves + (target-1);
                //breaking the loop to avoid further iterations
                break;
            }
            //subtracting 1 if 'target' is odd
            else
                target=target-1;

            //increasing 'moves' by 1 after performing each iteration
            moves++;
        }
        //returning 'minimum moves' required to reach target
        return moves;
    }
};