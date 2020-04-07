//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, NSString;

@interface LynxLayoutAnimationConfig : NSObject
{
    double _duration;
    double _delay;
    NSString *_prop;
    CAMediaTimingFunction *_timingFunction;
    NSString *_type;
    CDUnknownBlockType _completeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(copy, nonatomic) NSString *prop; // @synthesize prop=_prop;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(id)arg1;

@end
