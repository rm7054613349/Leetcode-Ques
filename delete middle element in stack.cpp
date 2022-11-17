  #include<bits/stdc++.h>
   void dm(stack<int>&s,int k,int count)
    {
       if(count==k)
        {
            s.pop();
            return;
        }
        
        int temp=s.top();
        s.pop();
        dm(s,k,count+1);
        s.push(temp);
        
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here..
        
        int k=sizeOfStack/2;
         dm(s,k,0);
        
    }