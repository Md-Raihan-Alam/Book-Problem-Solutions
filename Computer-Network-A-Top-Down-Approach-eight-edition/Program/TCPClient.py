from socket import *
serverName='192.168.56.1'
serverPort=12000
clientSocket=socket(AF_INET,SOCK_STREAM)
clientSocket.connect((serverName,serverPort))
sentence=input('input lowercase sentence: ')
clientSocket.send(sentence.encode())
modifiendSetence=clientSocket.recv(1024)
print("From server: ",modifiendSetence.decode())
clientSocket.close()