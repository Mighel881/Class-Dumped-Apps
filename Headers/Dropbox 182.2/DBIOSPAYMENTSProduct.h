//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBIOSPAYMENTSTransitionType, NSNumber, NSString;

@interface DBIOSPAYMENTSProduct : NSObject <DBSerializable, NSCopying>
{
    NSString *_mobileProductId;
    NSNumber *_hasProduct;
    NSString *_duration;
    NSNumber *_isRecurring;
    DBIOSPAYMENTSTransitionType *_transitionType;
    NSNumber *_hasTrial;
    NSNumber *_isDefaultForPlan;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *isDefaultForPlan; // @synthesize isDefaultForPlan=_isDefaultForPlan;
@property(readonly, nonatomic) NSNumber *hasTrial; // @synthesize hasTrial=_hasTrial;
@property(readonly, nonatomic) DBIOSPAYMENTSTransitionType *transitionType; // @synthesize transitionType=_transitionType;
@property(readonly, nonatomic) NSNumber *isRecurring; // @synthesize isRecurring=_isRecurring;
@property(readonly, copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSNumber *hasProduct; // @synthesize hasProduct=_hasProduct;
@property(readonly, copy, nonatomic) NSString *mobileProductId; // @synthesize mobileProductId=_mobileProductId;
- (void).cxx_destruct;
- (_Bool)isEqualToProduct:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithMobileProductId:(id)arg1 hasProduct:(id)arg2 duration:(id)arg3 isRecurring:(id)arg4 transitionType:(id)arg5 hasTrial:(id)arg6 isDefaultForPlan:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
