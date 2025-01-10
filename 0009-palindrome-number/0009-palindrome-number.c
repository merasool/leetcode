bool isPalindrome(int x) {
    int rem,n;
    n=x;
    if(n<0){
        return false;
    }else{
       long int rev=0;
        while(n!=0){
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;

        }
        if(x==rev){
            return true;
        }else{
            return false;
        }
    }
    
}