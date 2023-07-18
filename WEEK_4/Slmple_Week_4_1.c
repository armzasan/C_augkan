if (head == NULL)
    display 'List is em[ty !! Deletion is not psooible'
else 
    define a Node pointer 'temp' and initalize with head;
        head = temp -> link 
        delete temp 
        count = count -1



if (head == NULL) 
 display "List Is Empty!!! Deletion is not possible"
 else 
  define twi node pointer 'temp1' and 'temp2' and initialize 'temp1' with head.
  if (temp -> temp link == NULL )
   head = NULL 
   delete temp1 
   count = count - 1  
else{
 for (i=1;i<count-1;i=i+1){
        temp1 = temp1->link
 }
 temp2 - temp1 ->link 
 delete temp2 
 count = count -1 

}