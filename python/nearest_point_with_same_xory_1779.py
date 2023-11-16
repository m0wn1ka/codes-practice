class Solution:
    def nearestValidPoint(self, x, y, points):
        #Input: x = 3, y = 4, points = [[1,2],[3,1],[2,4],[2,3],[4,4]]
        #Output: 2
        #first find valid points
        #then find distance
        #then find which is small point
     
        valid_points=[]
        distance_dict={}
        for i in points:
            if(i[0]==x or i[1]==y ):
                valid_points.append(i)
        # print("valid points are",valid_points)
        for i in valid_points:
            dist=0
            dist=abs(i[0]-x)+abs(i[1]-y)
            distance_dict[tuple(i)]=abs(dist)
        x=distance_dict.values()
        # print(x,"is distance dict values")
        if not x:
            return -1
        min_distance=min(x)
        
        min_dist_points=[]
        for i in distance_dict:
            if(distance_dict[i]==min_distance):
                min_dist_points.append(i)
        # print("mindist points are",min_dist_points)
        min_manhat_dist=9999999
        min_manhat_point=[0,0]
      
        for i in min_dist_points:
            if(distance_dict[i]<min_manhat_dist):
                min_manhat_dist=distance_dict[i]
                min_manhat_point=i

        # print("points now is ",points,"and min_manhat point is ",min_manhat_point) 
        for i in range(len(points)):
            # print("comapreing points[i] &min_manghat",points[i],min_manhat_point,"types",type(points[i]),type(min_manhat_point))
            if (tuple(points[i])==min_manhat_point):
                return i
                  
        return -1  
obj=Solution()
ans=obj.nearestValidPoint(3,4,[[1,2],[3,1],[2,4],[2,3],[4,4]])
# ans=obj.nearestValidPoint(3,4,[[2,3]])
print("ans is ",ans)
        
        