def getMessageFromLine(line):
    message = ""
    if(len(line) >= 4):
        line[3] = line[3][1:]
        for i in range(3,len(line)):
            message = message + line[i] + " "
        return message

def getNickFromLine(line):
    if(len(line) >= 4):
        arr = line[0].split("!")
        arr = arr[0].replace(":","")
        return arr
