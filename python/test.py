import sys
import urllib2

def hello(url):
	request = urllib2.urlopen(url)
	data = request.read()
	print "sizeof %s content is: %d" %(url, len(data))

def world():
	print "hello world"

#if __name__ == "__main__":
#	if len(sys.argv) != 2:
#		url = "http://www.baidu.com"
#	else:
#		url = argv[1]
#	hello(url)
#	pass
