//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveFlexImage, IESLiveImage, NSArray, NSString;

@interface IESLiveFirstChargeExtraModel : MTLModel <MTLJSONSerializing>
{
    NSString *_givingDesc;
    IESLiveImage *_giftImg;
    NSArray *_panelBottomDesc;
    IESLiveImage *_panelTopImg;
    NSArray *_rule;
    IESLiveFlexImage *_panelBottomBGImg;
    IESLiveFlexImage *_panelTopBGImg;
    NSArray *_panelTopDesc;
    IESLiveFlexImage *_giftPanelViewBottomBGImg;
}

+ (id)panelTopDescJSONTransformer;
+ (id)panelTopBGImgJSONTransformer;
+ (id)panelBottomBGImgJSONTransformer;
+ (id)panelTopImgJSONTransformer;
+ (id)panelBottomDescJSONTransformer;
+ (id)giftImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) IESLiveFlexImage *giftPanelViewBottomBGImg; // @synthesize giftPanelViewBottomBGImg=_giftPanelViewBottomBGImg;
@property(retain, nonatomic) NSArray *panelTopDesc; // @synthesize panelTopDesc=_panelTopDesc;
@property(retain, nonatomic) IESLiveFlexImage *panelTopBGImg; // @synthesize panelTopBGImg=_panelTopBGImg;
@property(retain, nonatomic) IESLiveFlexImage *panelBottomBGImg; // @synthesize panelBottomBGImg=_panelBottomBGImg;
@property(retain, nonatomic) NSArray *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) IESLiveImage *panelTopImg; // @synthesize panelTopImg=_panelTopImg;
@property(retain, nonatomic) NSArray *panelBottomDesc; // @synthesize panelBottomDesc=_panelBottomDesc;
@property(retain, nonatomic) IESLiveImage *giftImg; // @synthesize giftImg=_giftImg;
@property(retain, nonatomic) NSString *givingDesc; // @synthesize givingDesc=_givingDesc;
- (void).cxx_destruct;
- (id)panelBottomDescKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
