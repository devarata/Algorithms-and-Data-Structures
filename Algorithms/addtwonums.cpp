
/*Approach:
1. calculating counts of both reversed linkedlist nums
2. if either one is null then return the other
3. swap to make a standard l1>l2
4. since l2 is smaller first run till l2 is null
5. if there is still carry then add it to l1  with following cases:
    a. if temp1 is still having numbers 
        i.  add till carry and temp both are there like case of 9999+1 
        ii. if last number of temp1 + carry >=10 then need to add a new linklist node to the last node's next
    b. if both are of same length and still have a carry at end
6. return l1
*/


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int c1=0;
        int c2=0;

        //calculating counts of both reversed linkedlist nums
        while(temp1)
        {
            c1++;
            temp1=temp1->next;
        }
        
        
        while(temp2)
        {
            c2++;
            temp2=temp2->next;
        }
        
        //if either one is null then return the other
        if(!c1)
            return l2;
        
        if(!c2)
            return l1;
        

        //exchange to make a standard
        if(c1<c2)
        {
            temp1 = l1;
            l1 = l2;
            l2=temp1;
        }
        int carry=0;
        int sum=0;
        temp1 = l1;


        //since l2 is smaller first run till l2 is null

        while(l2)
        {
            sum = temp1->val + l2->val + carry;
            carry = (int)(sum/10);
            temp1->val = sum%10;
            temp1 =  temp1->next;
            l2 = l2->next;
            
        }
        
        
        //if there is still carry then add it to l1  with following cases:

        if(carry)
        {
            //a. if temp1 is still having numbers 
            if(temp1!=NULL)
            {
                ListNode* prev=NULL;
                //add till carry and temp both are there like case of 9999+1
                while(temp1&&carry)
                {
                sum = temp1->val+carry;
                carry = (int)(sum/10);
                temp1->val = sum%10;
                prev = temp1;
                temp1 = temp1->next;
                }
                
                //if last number of temp1 + carry >=10 then need to add a new linklist node to the last node's next
                if(carry&&!temp1&&prev)
                {
                    prev->next = new ListNode(carry);
                }
                
            }
            //if both are of same length and still have a carry at end
            else{
                temp2 = new ListNode(carry);
                temp1 = l1;
                while(temp1->next)
                    temp1=temp1->next;
                temp1->next = temp2;
                
            }
        }
        
        
        
        
        return l1;
        
        
        
        
    }