//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "IESLiveCloseGuideCoordinatorService-Protocol.h"

@class NSArray, NSPointerArray, NSString;

@interface IESLiveCloseGuideCoordinatorFragment : NSObject <IESLiveCloseGuideCoordinatorService, HTSLiveComponent>
{
    NSPointerArray *_highPriorityProviders;
    NSPointerArray *_normalPriorityProviders;
    NSPointerArray *_lowPriorityProviders;
    NSArray *_providersPriorityQueue;
}

+ (long long)preferredLoadPhase;
+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(retain, nonatomic) NSArray *providersPriorityQueue; // @synthesize providersPriorityQueue=_providersPriorityQueue;
@property(retain, nonatomic) NSPointerArray *lowPriorityProviders; // @synthesize lowPriorityProviders=_lowPriorityProviders;
@property(retain, nonatomic) NSPointerArray *normalPriorityProviders; // @synthesize normalPriorityProviders=_normalPriorityProviders;
@property(retain, nonatomic) NSPointerArray *highPriorityProviders; // @synthesize highPriorityProviders=_highPriorityProviders;
- (void).cxx_destruct;
- (_Bool)p_triggerCloseGuideOfProviders:(id)arg1;
- (_Bool)p_existCloseGuideProviders;
- (_Bool)p_containCloseGuideProvider:(id)arg1;
- (void)registerCloseGuideProvider:(id)arg1;
- (_Bool)couldUnmountComponent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
