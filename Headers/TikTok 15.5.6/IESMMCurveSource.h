//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IESMMCurveSource : NSObject
{
    _Bool _needReverse;
    float _avgRatio;
    NSArray *_xPoints;
    NSArray *_yPoints;
    long long _srcDuration;
}

@property(nonatomic) _Bool needReverse; // @synthesize needReverse=_needReverse;
@property(nonatomic) long long srcDuration; // @synthesize srcDuration=_srcDuration;
@property(nonatomic) float avgRatio; // @synthesize avgRatio=_avgRatio;
@property(retain, nonatomic) NSArray *yPoints; // @synthesize yPoints=_yPoints;
@property(retain, nonatomic) NSArray *xPoints; // @synthesize xPoints=_xPoints;
- (void).cxx_destruct;

@end
