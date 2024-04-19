#先知道左手M右手N有多大，才能用迴圈
        M,N=len(grid),len(grid[0])
        def travel(i,j):#會往上下左右(四個方向)同時旅行，同時蓋章，能到的地方都左過
            if i<0 or j<0 or i>=M or j>=N: return#超過格子範圍，離開
            if grid[i][j]=='0':return#不能走的格子，離開
            #現在還沒離開，代表這格可以走
            grid[i][j]='0'#標示現在走了，以後不要再進來了
            travel(i+1,j)
            travel(i-1,j)
            travel(i,j+1)
            travel(i,j-1)
        ans=0
        for i in range(M):
                for j in range(N):
                    if grid[i][j]=='1':#找到一個可以落腳的陸地
                        ans+=1#找到1個答案了
                        travel(i,j)#開始旅行
        return ans