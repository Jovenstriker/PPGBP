Contains two smaller projects concerning photoplethysmography (PPG) analysis, similar to previous blood pressure project.
Photoplethysmography basically allows us to measure and see the waveform of the pulse (like a EKG).

Big goal is to build a neural network classifer to see if can detect changes in blood glucose levels (not necessarily regression but classify yes or no change)

# PPGCaffeineDetection:
PPGCaffeineDetection is project to build a neural network classifer if able to tell if I drank caffeine or not.

## Idea
Idea is that caffeine drastically elevates heart rate and is known to change the pulse.
A neural network should be able to pick up on the differences

## Testing condition:
Caffeine used: 4oz shot of espresso from MeanTime Coffee<br/>
Measured 2 control (BeforeReading, FirstReading)<br/>
Measured 2 after (5 min after, 45 min after)<br/>

# PPGGlucoseDetection:
PPGGlucoseDetection is a follow up project after successfully building PPGCaffeineDetection

## Idea
Idea is that eating should elevate glucose levels and change the pulse and a neural network should be able to pick up on the changes before and after eating. 
We did a project on caffeine detection because the changes due to eating is not as noticeable. We wanted see if even a big change can be detected (caffeine).
A neural network was able to see the difference due to caffeine so I hope it can pick up difference with eating.

A subproject in PPGGlucoseDetection was detecting whether or not writing or biking affected the PPG signal.
PPG signals are known to be very prone to motion artifacts, changes a lot if subject moves. However found that adjusting where you put the sensor reduces the amount of motion artifacts drastically.
