

#Task-2
def xor(a,b):
    result =""
    for i in range (len(a)):
        if a[i]==b[i]:
            result+='0'
        else:
            result += '1'
        return result
#Task-3: Implementation S-BOx Substitution

def sbox_substitution(data):
    result=''
    for i in range(8):#fro 8 s_boxex loop will for 8
        chunk=data[i*6:(i+1)*6]
        
        row=int(chunk[0]+chunk[5],2)
        col=int(chunk[1:5],2)
        
        val =s_boxes[i][row][col]
        result+=bin(val)[2:].zfill(4)
        
#Task-4:Implementation of DES round funtion(f-function)

def des_function(right,round_key):
    temp=permute(right,expansion_p_box_table)
    xor_res=xor(temp,round_key)
    sbox_res=sbox_substitution(xor_res)
    des_function_res=permute(sbox_res,straight_p_box_table)
    return des_function_res
#Task-4:Implementation of DES Encrypte

def des_encrypt(plaintext, round_keys):
    

    
