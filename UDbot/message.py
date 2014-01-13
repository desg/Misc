def messageChan(socket, nicks, message):
    for nick in nicks:
        socket.send("PRIVMSG " + nick + " " + message + "\r\n")
