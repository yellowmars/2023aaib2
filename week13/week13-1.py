if root==None: return root #沒有東西，就提早結束
        left=self.removeLeafNodes(root.left,target) #先用同一個函式，處理左半邊
        right=self.removeLeafNodes(root.right,target)#先用同一個函式，處理左半邊
        if left==None and right==None and root.val==target:
            return None
        root.left=left #把左邊的刪後的結果，接到左邊
        root.right=right #把右邊的刪後的結果，接到右邊
        return root #交回新答案
        