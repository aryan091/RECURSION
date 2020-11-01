def subset(string,curr="",index=0):
    if index==len(string):
        print(curr)
        return 0;
    else:
        subset(string,curr,index+1)
        subset(string,curr+string[index],index+1)

if __name__ == '__main__':
    subset("ABC")





