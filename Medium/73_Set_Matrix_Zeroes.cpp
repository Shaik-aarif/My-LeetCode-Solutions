/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.
*/

 int  n = matrix.size();
        int  m = matrix[0].size();
        int col0 = 1;
        // marking 1st col and row of respective zero cols and rows
        for(int i = 0 ;  i < n ; i++){
            for(int j = 0 ; j< m ; j++){

                if(matrix[i][j] == 0 ){
                    // row marking
                    matrix[i][0] =  0 ;
                    // col marking 
                    if(j != 0 ){
                        matrix[0][j] = 0 ;
                    }
                    else{
                        col0 = 0 ; 
                    }

                }
            }
        }

        // iterating and changing other than the first row and col

        for(int i = 1 ; i< n ; i++ ){
            for(int j = 1; j< m ; j++){
                if(matrix[i][j]!= 0 ){
                    if(matrix[i][0] ==  0  || matrix[0][j]==0){
                        matrix[i][j] = 0 ;
                    } 
                }
            }
        }

        if(matrix[0][0] == 0){
            for(int j = 0 ; j < m ; j++){
                matrix[0][j] = 0 ;
            }
        }
        if(col0 == 0){
            for(int i  = 0 ; i< n ; i++){
                matrix[i][0] = 0;
            }
        }

        for(auto x : matrix){
            for(auto y : x){
                cout<<y<<" ";
            }
        }