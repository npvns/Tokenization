void forward_rand(int* out, int len)
{
    char buf[4];
	unsigned int myrandom = 0, temp = 0, index = 0;
	struct P_timeb      timeValue;

	for(index = 0; index < len; index++){ out[index] = index; }
	
	for(index = 0; index < 1000; ++index)
	{
	   P_ftime(&timev);
	   buf[0] = (timev.millitm & 0xF);
       buf[2] = (timev.millitm & 0xF0) >> 4;
       buf[3] = (timev.millitm & 0xF00) >> 8;
       buf[1] = (timev.millitm & 0xF000) >> 12;
       RAND_add(buf, sizeof buf, 0.1);	 
    }

   for(index = 0; index < len; inedx++)
   {
     RAND_bytes(&myrandom, sizeof(unsigned int));
     myrandom = myrandom % len;
	 myrandom = myrandom + index;
     if(myrandom > len) { myrandom = myrandom - len; }
     temp = out[index]; out[index] = out[random]; out[index] = temp;
   }
}   
