//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LynxCustomEvent.h"

@class NSDictionary;

@interface LynxDetailEvent : LynxCustomEvent
{
    NSDictionary *_detail;
}

@property(readonly, nonatomic) NSDictionary *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (id)paramsName;
- (id)initWithName:(id)arg1 targetSign:(long long)arg2 currentTargetSign:(long long)arg3 detail:(id)arg4;
- (id)initWithName:(id)arg1 targetSign:(long long)arg2 detail:(id)arg3;

@end
