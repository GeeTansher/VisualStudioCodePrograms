bool operator <( Box &A , Box &B){
    if(A.l<B.l || ((A.b < B.b) && (A.l==B.l)) || ((A.h<B.h) && (A.b==B.b) && (A.l==B.l))){
                  return true;
             }
             else{
                 return false;
             }
            }          
        
ostream& operator<<(ostream& output, Box& B)
    {
    int l=B.getLength();
    int b=B.getBreadth();
    int h=B.getHeight();
                 
    output<<l<<" "<<b<<" "<<h;
    return output;   
    }  
