//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWECampaignImageModel, NSDictionary, NSNumber, NSString, UIImage;

@interface AWECampaignTabbarBubbleModel : MTLModel <MTLJSONSerializing>
{
    NSString *_text;
    AWECampaignImageModel *_image;
    UIImage *_bubbleImage;
    NSNumber *_disappearThreshold;
}

+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *disappearThreshold; // @synthesize disappearThreshold=_disappearThreshold;
@property(retain, nonatomic) UIImage *bubbleImage; // @synthesize bubbleImage=_bubbleImage;
@property(retain, nonatomic) AWECampaignImageModel *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
