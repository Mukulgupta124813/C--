 while(i<j){
     if(v[i]<=b || v[i]<=h){
         if(i>(i+j)/2){
             break;
         }
         else{
             continue;
         }
     }
     count++;
     Min = min(Min,v[i]);
     i++;
 }