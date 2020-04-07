//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveFollowBtnSkin, IESLiveImage, NSString;

@interface IESLiveGameRoomSkinInfo : MTLModel <MTLJSONSerializing>
{
    IESLiveFollowBtnSkin *_unfollowSkin;
    IESLiveFollowBtnSkin *_followedSkin;
    NSString *_tabSelectedColor;
    NSString *_tabUnselectedColor;
    NSString *_commentPlaceHolderColor;
    NSString *_commentPlaceHolderBgColor;
    NSString *_anchorNameColor;
    NSString *_anchorInfoColor;
    IESLiveImage *_userBannerImage;
    IESLiveImage *_toolBarImage;
    IESLiveImage *_shareIcon;
}

+ (id)shareIconJSONTransformer;
+ (id)toolBarImageJSONTransformer;
+ (id)userBannerImageJSONTransformer;
+ (id)followedSkinJSONTransformer;
+ (id)unfollowSkinJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) IESLiveImage *shareIcon; // @synthesize shareIcon=_shareIcon;
@property(readonly, nonatomic) IESLiveImage *toolBarImage; // @synthesize toolBarImage=_toolBarImage;
@property(readonly, nonatomic) IESLiveImage *userBannerImage; // @synthesize userBannerImage=_userBannerImage;
@property(readonly, nonatomic) NSString *anchorInfoColor; // @synthesize anchorInfoColor=_anchorInfoColor;
@property(readonly, nonatomic) NSString *anchorNameColor; // @synthesize anchorNameColor=_anchorNameColor;
@property(readonly, nonatomic) NSString *commentPlaceHolderBgColor; // @synthesize commentPlaceHolderBgColor=_commentPlaceHolderBgColor;
@property(readonly, nonatomic) NSString *commentPlaceHolderColor; // @synthesize commentPlaceHolderColor=_commentPlaceHolderColor;
@property(readonly, nonatomic) NSString *tabUnselectedColor; // @synthesize tabUnselectedColor=_tabUnselectedColor;
@property(readonly, nonatomic) NSString *tabSelectedColor; // @synthesize tabSelectedColor=_tabSelectedColor;
@property(readonly, nonatomic) IESLiveFollowBtnSkin *followedSkin; // @synthesize followedSkin=_followedSkin;
@property(readonly, nonatomic) IESLiveFollowBtnSkin *unfollowSkin; // @synthesize unfollowSkin=_unfollowSkin;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
