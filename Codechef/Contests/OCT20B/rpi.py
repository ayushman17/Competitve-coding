from __future__ import print_function
import paho.mqtt.publish as publish
import psutil
import pandas as pd
from time import sleep
from random import choice
from random import seed
import pandas as pd
from urllib.request import urlopen
import csv
channelID = "1149407"
read_api = '9QG5FHLPPN4NOV9N'
write_api = 'TIJ5WV18SEH5VCJO'
useUnsecuredTCP = False
useUnsecuredWebsockets = False
useSSLWebsockets = True
mqttHost = "mqtt.thingspeak.com"
if useUnsecuredTCP:
    tTransport = "tcp"
    tPort = 1883
    tTLS = None

if useUnsecuredWebsockets:
    tTransport = "websockets"
    tPort = 80
    tTLS = None

if useSSLWebsockets:
    import ssl
    tTransport = "websockets"
    tTLS = {'ca_certs':"/etc/ssl/certs/ca-certificates.crt",'tls_version':ssl.PROTOCOL_TLSv1}
    tPort = 443
topic = "channels/" + channelID + "/publish/" + write_api
PM25 = pd.read_csv('1.csv')
PM_25 = PM25.field1
PM10 = pd.read_csv('2.csv')
PM_10 = PM10.field2
seed = 123
def getSensorData(count):
  field1 = PM_10[count] 
  field2 = PM_25[count]
  return (str (field1) , str (field2))
count=0
while(True):
    PM10, PM25 = getSensorData(count)
    count+=1
    print (" PM10 =",PM10,"   PM25 =",PM25)
    tPayload = "field1="+PM10+"&field2="+PM25
    try:
        publish.single(topic, payload=tPayload, hostname=mqttHost, port=tPort, tls=tTLS, transport=tTransport)

    except (KeyboardInterrupt):
        break

    except:
        print ("There was an error while publishing the data.")