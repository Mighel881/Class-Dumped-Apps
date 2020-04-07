//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditSwazzlePackageConfig-Protocol.h>

@class NSArray, NSSet, NSString, YTIEffectListRenderer;

@interface YTEditSwazzlePackageConfig : NSObject <YTEditSwazzlePackageConfig>
{
    NSString *_packageID;
    NSArray *_effectIDs;
    NSArray *_effects;
    NSSet *_effectGraphs;
    YTIEffectListRenderer *_effectListRenderer;
}

@property(readonly, nonatomic) YTIEffectListRenderer *effectListRenderer; // @synthesize effectListRenderer=_effectListRenderer;
@property(readonly, nonatomic) NSSet *effectGraphs; // @synthesize effectGraphs=_effectGraphs;
@property(readonly, nonatomic) NSArray *effects; // @synthesize effects=_effects;
@property(readonly, nonatomic) NSArray *effectIDs; // @synthesize effectIDs=_effectIDs;
@property(readonly, copy, nonatomic) NSString *packageID; // @synthesize packageID=_packageID;
- (void).cxx_destruct;
- (id)getEffectListRenderer:(id)arg1;
- (void)parseCatalog:(id)arg1;
- (id)initWithPackageID:(id)arg1 catalog:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
