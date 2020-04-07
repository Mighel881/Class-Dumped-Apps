//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveUserModel, NSNumber, NSString;

@interface HTSLiveInteractiveContributorModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_rank;
    IESLiveUserModel *_user;
    NSNumber *_contributedCount;
}

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *contributedCount; // @synthesize contributedCount=_contributedCount;
@property(retain, nonatomic) IESLiveUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
