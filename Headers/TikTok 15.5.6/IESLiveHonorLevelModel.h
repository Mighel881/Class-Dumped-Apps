//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface IESLiveHonorLevelModel : MTLModel <MTLJSONSerializing>
{
    _Bool _showLevelPanel;
    NSString *_advertisement;
    NSString *_detailPageUrl;
    NSString *_detailText;
    NSArray *_notice;
}

+ (id)noticeJSONTransformer;
+ (id)modelFromSetting:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *detailPageUrl; // @synthesize detailPageUrl=_detailPageUrl;
@property(retain, nonatomic) NSString *advertisement; // @synthesize advertisement=_advertisement;
@property(nonatomic) _Bool showLevelPanel; // @synthesize showLevelPanel=_showLevelPanel;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
