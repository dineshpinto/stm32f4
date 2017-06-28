import serial 

stm_ports = []

for p in serial.tools.list_ports.comports():
    if 'STMicroelectronics' in p[1]:
        stm_ports.append(p[0])
        print("Device found at {}".format(p[1]))    
if not stm_ports:
    raise IOError("No STM devices found")
if len(stm_ports) > 1:
    warnings.warn('Multiple STM devices found. Using the first - {}'.format(stm_ports[0]))


with serial.Serial(stm_ports[0], timeout=1) as ser:
    print("Connection established at", ser.name)   
    line = ser.readline()
    print(line)      
    ser.write(b"jello")