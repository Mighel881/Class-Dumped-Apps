//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MLAVDAITimelineSection, NSArray;

@protocol MLVideoTimeline <NSObject>
- (MLAVDAITimelineSection *)timelineSectionContainingBaseTime:(double)arg1;
- (NSArray *)videoSectionsForTimeRangeWithStartBaseTime:(double)arg1 endBaseTime:(double)arg2;
@end
