//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class DBTrialInfo, DBUpgradeProductScheduledTransition, NSString;

@interface DBUpgradeProduct : NSObject <NSCopying>
{
    _Bool _hasPlan;
    _Bool _isTrial;
    long long _duration;
    long long _cycle;
    NSString *_productId;
    DBTrialInfo *_trialInfo;
    long long _transition;
    DBUpgradeProductScheduledTransition *_scheduledTransition;
}

@property(readonly, nonatomic) DBUpgradeProductScheduledTransition *scheduledTransition; // @synthesize scheduledTransition=_scheduledTransition;
@property(readonly, nonatomic) long long transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) DBTrialInfo *trialInfo; // @synthesize trialInfo=_trialInfo;
@property(readonly, nonatomic) _Bool isTrial; // @synthesize isTrial=_isTrial;
@property(readonly, nonatomic) _Bool hasPlan; // @synthesize hasPlan=_hasPlan;
@property(readonly, copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, nonatomic) long long cycle; // @synthesize cycle=_cycle;
@property(readonly, nonatomic) long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canDowngrade;
@property(readonly, nonatomic) _Bool canUpgrade;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDuration:(long long)arg1 cycle:(long long)arg2 productId:(id)arg3 hasPlan:(_Bool)arg4 trialInfo:(id)arg5 transition:(long long)arg6 scheduledTransition:(id)arg7;
- (id)init;

@end
