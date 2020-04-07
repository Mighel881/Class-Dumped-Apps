//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramUI/NSCopying-Protocol.h>

@class NSArray;

@interface PGCurvesValue : NSObject <NSCopying>
{
    NSArray *_cachedDataPoints;
    double _blacksLevel;
    double _shadowsLevel;
    double _midtonesLevel;
    double _highlightsLevel;
    double _whitesLevel;
}

+ (id)defaultValue;
@property(nonatomic) double whitesLevel; // @synthesize whitesLevel=_whitesLevel;
@property(nonatomic) double highlightsLevel; // @synthesize highlightsLevel=_highlightsLevel;
@property(nonatomic) double midtonesLevel; // @synthesize midtonesLevel=_midtonesLevel;
@property(nonatomic) double shadowsLevel; // @synthesize shadowsLevel=_shadowsLevel;
@property(nonatomic) double blacksLevel; // @synthesize blacksLevel=_blacksLevel;
- (void).cxx_destruct;
- (id)interpolateCurve;
- (_Bool)isDefault;
- (id)dataPoints;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
