void dfs(vector<vector<int>> &image,int i,int j, int newcolor,int oldcolor)
    {
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=oldcolor)
        {
            return;
        }
        image[i][j]=newcolor;
        dfs(image,i-1,j,newcolor,oldcolor);
        dfs(image,i+1,j,newcolor,oldcolor);
        dfs(image,i,j-1,newcolor,oldcolor);
        dfs(image,i,j+1,newcolor,oldcolor);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int oldcolor=image[sr][sc];
        if(newcolor==oldcolor)
        {
            return image;
        }
        dfs(image,sr,sc,newcolor,oldcolor);
        return image;
        
    }
