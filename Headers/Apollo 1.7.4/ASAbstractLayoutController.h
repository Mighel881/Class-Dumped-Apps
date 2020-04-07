//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AsyncDisplayKit/ASLayoutController-Protocol.h>

@class NSString;

@interface ASAbstractLayoutController : NSObject <ASLayoutController>
{
    vector_0253d28f _tuningParameters;
}

+ (vector_0253d28f)defaultTuningParameters;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allElementsForScrolling:(long long)arg1 rangeMode:(long long)arg2 displaySet:(id *)arg3 preloadSet:(id *)arg4 map:(id)arg5;
- (id)elementsForScrolling:(long long)arg1 rangeMode:(long long)arg2 rangeType:(long long)arg3 map:(id)arg4;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(long long)arg2 rangeType:(long long)arg3;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(long long)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeType:(long long)arg2;
- (CDStruct_c3b9c2ee)tuningParametersForRangeType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
