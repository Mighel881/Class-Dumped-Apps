//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWESpecialChannelHashtagModel, AWESpecialChannelLocalEpicStatusModel, NSArray, NSString;

@interface AWESpecialChannelContentModel : AWEBaseApiModel
{
    _Bool _isCardDataAlreadyShown;
    NSString *_contentTitle;
    NSArray *_videoItemsArray;
    long long _schemaType;
    AWESpecialChannelHashtagModel *_hashTagInfo;
    NSString *_h5URL;
    NSString *_hasMoreContentHint;
    NSArray *_itemIDsArray;
    AWESpecialChannelLocalEpicStatusModel *_localStatusModel;
}

+ (id)localStatusModelJSONTransformer;
+ (id)hashTagInfoJSONTransformer;
+ (id)videoItemsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isCardDataAlreadyShown; // @synthesize isCardDataAlreadyShown=_isCardDataAlreadyShown;
@property(retain, nonatomic) AWESpecialChannelLocalEpicStatusModel *localStatusModel; // @synthesize localStatusModel=_localStatusModel;
@property(copy, nonatomic) NSArray *itemIDsArray; // @synthesize itemIDsArray=_itemIDsArray;
@property(copy, nonatomic) NSString *hasMoreContentHint; // @synthesize hasMoreContentHint=_hasMoreContentHint;
@property(copy, nonatomic) NSString *h5URL; // @synthesize h5URL=_h5URL;
@property(retain, nonatomic) AWESpecialChannelHashtagModel *hashTagInfo; // @synthesize hashTagInfo=_hashTagInfo;
@property(nonatomic) long long schemaType; // @synthesize schemaType=_schemaType;
@property(copy, nonatomic) NSArray *videoItemsArray; // @synthesize videoItemsArray=_videoItemsArray;
@property(copy, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
- (void).cxx_destruct;

@end
