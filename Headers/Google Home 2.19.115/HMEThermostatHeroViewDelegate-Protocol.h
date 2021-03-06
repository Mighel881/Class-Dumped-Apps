//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber;

@protocol HMEThermostatHeroViewDelegate <NSObject>
- (void)triggerLightHapticAction;
- (void)triggerMediumHapticAction;
- (void)logUserInteractionWithActionType:(int)arg1 withValue:(NSNumber *)arg2;
- (void)logUserInteractionWithActionType:(int)arg1;
- (void)didUpdateTemperature:(double)arg1;
- (void)didUpdateRangeTemperatureWithHeatThreshold:(double)arg1 coolThreshold:(double)arg2;
- (void)didUpdateMode:(int)arg1;
@end

