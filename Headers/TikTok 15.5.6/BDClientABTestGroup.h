//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BDClientABTestGroup : NSObject
{
    NSString *_name;
    long long _minRegion;
    long long _maxRegion;
    NSDictionary *_results;
}

@property(readonly, copy, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(readonly, nonatomic) long long maxRegion; // @synthesize maxRegion=_maxRegion;
@property(readonly, nonatomic) long long minRegion; // @synthesize minRegion=_minRegion;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isLegal;
- (id)initWithName:(id)arg1 minRegion:(long long)arg2 maxRegion:(long long)arg3 results:(id)arg4;

@end
