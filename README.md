# NfiniteDecryptValue

How to use

load a older Nfinite.xex into IDA Pro

if you find something like this then you found a encrypted address

sub_815148A0 is the DecryptValue Function

V11 = First Address
V10 = Decryption Key

 if ( m_xdk )
  {
    v10 = 0x25C0;
    v11 = 0x92322B82;
  }
  else
  {
    v10 = 0x1925;
    v11 = 0x923201C7;
  }
  v12 = (const void *)sub_815148A0(v11, v10);
