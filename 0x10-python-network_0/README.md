# 0x10. Python - Network  

- HTTP (HyperText Transfer Protocol)  

Internet (or The Web) is a massive distributed client/server information system as depicted in the following diagram.  
Many applications are running concurrently over the Web, such as web browsing/surfing, e-mail, file transfer, audio & video streaming, and so on.  In order for proper communication to take place between the client and the server, these applications must agree on a specific application-level protocol such as HTTP, FTP, SMTP, POP, and etc.  

![The Web](https://www3.ntu.edu.sg/home/ehchua/programming/webprogramming/images/TheWeb.png)

HTTP (Hypertext Transfer Protocol) is perhaps the most popular application protocol used in the Internet (or The WEB).  

HTTP is an asymmetric request-response client-server protocol as illustrated.  An HTTP client sends a request message to an HTTP server.  The server, in turn, returns a response message.  In other words, HTTP is a pull protocol, the client pulls information from the server (instead of server pushes information down to the client).


![HTTP](https://www3.ntu.edu.sg/home/ehchua/programming/webprogramming/images/HTTP.png)

HTTP is a stateless protocol. In other words, the current request does not know what has been done in the previous requests.  
HTTP permits negotiating of data type and representation, so as to allow systems to be built independently of the data being transferred.  
Quoting from the RFC2616: "The Hypertext Transfer Protocol (HTTP) is an application-level protocol for distributed, collaborative, hypermedia information systems. It is a generic, stateless, protocol which can be used for many tasks beyond its use for hypertext, such as name servers and distributed object management systems, through extension of its request methods, error codes and headers."

# Browser  
Whenever you issue a URL from your browser to get a web resource using HTTP, e.g. http://www.nowhere123.com/index.html, the browser turns the URL into a request message and sends it to the HTTP server. The HTTP server interprets the request message, and returns you an appropriate response message, which is either the resource you requested or an error message. This process is illustrated below:

![Browser](https://www3.ntu.edu.sg/home/ehchua/programming/webprogramming/images/HTTP_Steps.png)



