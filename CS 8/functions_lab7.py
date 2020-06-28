import urllib.request

infile = open('UCSB_URLs.txt', 'r')
URLs = infile.readlines()
infile.close()

def cleanURLs(URLs):
    acc = [] 
    for i in range(len(URLs)):
        newURLs = URLs[i].strip('\n')
        acc.append(newURLs) 
    return acc  

import urllib.request
webRef = urllib.request.urlopen('http://www.cs.ucsb.edu')
webpage = webRef.read()
webpage = webpage.decode('utf-8')

string = webpage
def title(string):
    start = string.find('<title>')
    end = string.find('</title>')
    title = string[start + len('<title>'):end]
    return title

myList = cleanURLs(URLs)  
def UCSBTitles(myList):
    for url in myList:
        web_ref = urllib.request.urlopen(url)
        web_page = web_ref.read()
        web_page = web_page.decode('utf-8')
        title1 = title(web_page)
        if '<title>' and '</title>' not in web_page:
            start = web_page.find('<TITLE>')
            end = web_page.find('</TITLE>')
            title2 = web_page[start + len('<TITLE>'):end]
            print(title2)
        else:
            print(title1) 
            
        
        
    
    
    

        
