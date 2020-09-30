import time
words_list = ['nemo']*1000

def findNemo(words_list):
  start = time.time()
  for i in range (len(words_list)):
    if(words_list[i]=='nemo'):
      print("found Nemo")
  end = time.time()
  print('Time taken is '+str(end-start)+' seconds')

findNemo(words_list)