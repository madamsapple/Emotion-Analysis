# bigdata-finalproject
My final project for the unit "Creative Making: Big Data, The Self and Social Platforms"

This is the final project, called "How are we feeling today?", for the Big Data unit.

I have used the Spotify API here to collect the top 50 tracks over
22 days and in specific picked up their valence values to best
analyze what emotion they represent.

This was further used to run a wheel which shows what emotion
is each day conveying through the top 50 track data.

You can run the notebook to get your tokens, collect all tracks
from the chart, clean out things like just having the title,
date, and valence, and save them as CSVs.

The arduino sketch creates 10 angles for the 10 emotional faces.
This is done to map the values to the valence distribution:
valence is represented by a number from 0.0 to 1.0. 

Since the data collected was still mostly in the range of
0.5s, I further whittled down and mapped the faces to a range
of 0.5 to 0.6. 

You can run the arduino sketch which will move a 360 degree
motor to fully utilize the "wheel" of emotions.
