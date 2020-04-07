//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEditEffectDataSourceImpl.h>

#import <Module_Framework/YTEditEffectsProviderDataChangeObserver-Protocol.h>

@class NSArray, NSMutableSet, NSString, YTEditEffectsProvider;

@interface YTEditKazooEffectDataSource : YTEditEffectDataSourceImpl <YTEditEffectsProviderDataChangeObserver>
{
    NSMutableSet *_readyEffectsIDs;
    NSArray *_effectIDs;
    int _subpackageID;
    YTEditEffectsProvider *_effectsProvider;
}

@property(nonatomic) int subpackageID; // @synthesize subpackageID=_subpackageID;
@property(retain, nonatomic) YTEditEffectsProvider *effectsProvider; // @synthesize effectsProvider=_effectsProvider;
- (void).cxx_destruct;
- (void)effectsProvider:(id)arg1 effectDidChange:(id)arg2;
- (void)effectsProviderDidParseEffects:(id)arg1;
- (void)effectDidBecomeReady:(id)arg1;
- (void)reloadData;
- (unsigned long long)indexForEffectWithEffectID:(id)arg1;
- (id)effectAtIndex:(unsigned long long)arg1;
- (long long)displayTitleStyle;
- (long long)thumbnailType;
- (long long)totalEffects;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
