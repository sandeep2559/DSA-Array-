void intersection(int input1[], int input2[], int size1, int size2) {
    
    sort( input1, input1+size1);
    sort( input2,  input2+size2);
    
    int i=0,j=0;
    while((i<size1)&&(j<size2))
    {
    if(input1[i]==input2[j])
    {
    cout<<input1[i]<<" ";
        i++;j++;
    }
    else if(input1[i]<input2[j])
       i++;
    else
      j++;
    
    }
     
}
