import sys
import socket
import string
import time
from sets import Set
#my modules
from parse import *
from message import *

import urllib2
import string
from bs4 import BeautifulSoup

HOST="irc.swiftirc.net"
PORT=6667
IDENT="UDbot"
NICK="UDbot"
REALNAME="UDbot"
readbuffer=""

#app variables

s=socket.socket()
s.connect((HOST, PORT))
s.send("NICK %s\r\n" % NICK)
s.send("USER %s %s bla :%s\r\n" % (IDENT, HOST, REALNAME))
s.send("JOIN "+ "#reddit07" + "\n")



while 1:
    readbuffer = readbuffer + s.recv(1024)
    temp = string.split(readbuffer, "\n")
    readbuffer = temp.pop()

    for line in temp:
        line = string.rstrip(line)
        line = string.split(line)

        if(line[0] == "PING"):
            s.send("PONG %s\r\n" %line[1])
        print line

        if(len(line) >= 5 and line[3] == ":!ud"):
            message = getMessageFromLine(line)
            print "original message : "+ message
            newmessage = message.replace("!ud ","")
            newmessage = newmessage.replace(" ","+")
            print "replaced message is : " + newmessage
            soup = BeautifulSoup(urllib2.urlopen('http://www.urbandictionary.com/define.php?term=' + newmessage).read())
            div_content = soup.find("div", {"class": "definition"})
            contents = "".join([str(item) for item in div_content.contents])
            s.send("NOTICE " + getNickFromLine(line) + " " + contents[1:len(contents)-1] + "\r\n")

        if(len(line) >= 5 and line[3] == ":@ud"):
            message = getMessageFromLine(line)
            print "original message : "+ message
            newmessage = message.replace("@ud ","")
            newmessage = newmessage.replace(" ","+")
            print "replaced message is : " + newmessage
            soup = BeautifulSoup(urllib2.urlopen('http://www.urbandictionary.com/define.php?term=' + newmessage).read())
            div_content = soup.find("div", {"class": "definition"})
            contents = "".join([str(item) for item in div_content.contents])
            s.send("PRIVMSG " + "#reddit07" + " [\x033 UD\x03]: " + contents[1:len(contents)-1] + "\r\n")

