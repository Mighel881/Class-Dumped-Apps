//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

@interface RNCSliderManager : RCTViewManager
{
}

+ (id)propConfig_disabled;
+ (id)propConfig_inverted;
+ (id)propConfig_thumbImage;
+ (id)propConfig_thumbTintColor;
+ (id)propConfig_onRNCSliderSlidingComplete;
+ (id)propConfig_onRNCSliderSlidingStart;
+ (id)propConfig_onRNCSliderValueChange;
+ (id)propConfig_maximumTrackTintColor;
+ (id)propConfig_minimumTrackTintColor;
+ (id)propConfig_maximumValue;
+ (id)propConfig_minimumValue;
+ (id)propConfig_maximumTrackImage;
+ (id)propConfig_minimumTrackImage;
+ (id)propConfig_trackImage;
+ (id)propConfig_step;
+ (id)propConfig_value;
+ (void)load;
+ (id)moduleName;
- (void)set_disabled:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)sliderTouchEnd:(id)arg1;
- (void)sliderTouchStart:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (id)view;

@end

