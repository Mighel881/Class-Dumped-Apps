//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, PromotionVisitor, UrlStruct;

@interface PromotionStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *activityText; // @dynamic activityText;
@property(retain, nonatomic) UrlStruct *brandIcon; // @dynamic brandIcon;
@property(nonatomic) int clicks; // @dynamic clicks;
@property(nonatomic) long long cosFee; // @dynamic cosFee;
@property(copy, nonatomic) NSString *cosFeeText; // @dynamic cosFeeText;
@property(nonatomic) double cosRadio; // @dynamic cosRadio;
@property(nonatomic) long long couponAmount; // @dynamic couponAmount;
@property(retain, nonatomic) NSMutableArray *elasticImgArray; // @dynamic elasticImgArray;
@property(readonly, nonatomic) unsigned long long elasticImgArray_Count; // @dynamic elasticImgArray_Count;
@property(copy, nonatomic) NSString *elasticIntroduction; // @dynamic elasticIntroduction;
@property(copy, nonatomic) NSString *elasticTitle; // @dynamic elasticTitle;
@property(nonatomic) int elasticType; // @dynamic elasticType;
@property(copy, nonatomic) NSString *extra; // @dynamic extra;
@property(nonatomic) _Bool favorited; // @dynamic favorited;
@property(copy, nonatomic) NSString *gid; // @dynamic gid;
@property(copy, nonatomic) NSString *h5URL; // @dynamic h5URL;
@property(nonatomic) _Bool hasActivityText; // @dynamic hasActivityText;
@property(nonatomic) _Bool hasBrandIcon; // @dynamic hasBrandIcon;
@property(nonatomic) _Bool hasClicks; // @dynamic hasClicks;
@property(nonatomic) _Bool hasCosFee; // @dynamic hasCosFee;
@property(nonatomic) _Bool hasCosFeeText; // @dynamic hasCosFeeText;
@property(nonatomic) _Bool hasCosRadio; // @dynamic hasCosRadio;
@property(nonatomic) _Bool hasCouponAmount; // @dynamic hasCouponAmount;
@property(nonatomic) _Bool hasElasticIntroduction; // @dynamic hasElasticIntroduction;
@property(nonatomic) _Bool hasElasticTitle; // @dynamic hasElasticTitle;
@property(nonatomic) _Bool hasElasticType; // @dynamic hasElasticType;
@property(nonatomic) _Bool hasExtra; // @dynamic hasExtra;
@property(nonatomic) _Bool hasFavorited; // @dynamic hasFavorited;
@property(nonatomic) _Bool hasGid; // @dynamic hasGid;
@property(nonatomic) _Bool hasH5URL; // @dynamic hasH5URL;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasItemType; // @dynamic hasItemType;
@property(nonatomic) _Bool hasLastAwemeId; // @dynamic hasLastAwemeId;
@property(nonatomic) _Bool hasLogo; // @dynamic hasLogo;
@property(nonatomic) _Bool hasMarketPrice; // @dynamic hasMarketPrice;
@property(nonatomic) _Bool hasPreCheckStatus; // @dynamic hasPreCheckStatus;
@property(nonatomic) _Bool hasPrice; // @dynamic hasPrice;
@property(nonatomic) _Bool hasPromotionId; // @dynamic hasPromotionId;
@property(nonatomic) _Bool hasPromotionSource; // @dynamic hasPromotionSource;
@property(nonatomic) _Bool hasRank; // @dynamic hasRank;
@property(nonatomic) _Bool hasRankURL; // @dynamic hasRankURL;
@property(nonatomic) _Bool hasSales; // @dynamic hasSales;
@property(nonatomic) _Bool hasSecAuthorId; // @dynamic hasSecAuthorId;
@property(nonatomic) _Bool hasSmallAppURL; // @dynamic hasSmallAppURL;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitlePrefix; // @dynamic hasTitlePrefix;
@property(nonatomic) _Bool hasTraceAuthorId; // @dynamic hasTraceAuthorId;
@property(nonatomic) _Bool hasTraceAwemeId; // @dynamic hasTraceAwemeId;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasViews; // @dynamic hasViews;
@property(nonatomic) _Bool hasVisitor; // @dynamic hasVisitor;
@property(retain, nonatomic) UrlStruct *image; // @dynamic image;
@property(retain, nonatomic) NSMutableArray *imgsArray; // @dynamic imgsArray;
@property(readonly, nonatomic) unsigned long long imgsArray_Count; // @dynamic imgsArray_Count;
@property(nonatomic) long long itemType; // @dynamic itemType;
@property(retain, nonatomic) NSMutableArray *labelArray; // @dynamic labelArray;
@property(readonly, nonatomic) unsigned long long labelArray_Count; // @dynamic labelArray_Count;
@property(copy, nonatomic) NSString *lastAwemeId; // @dynamic lastAwemeId;
@property(copy, nonatomic) NSString *logo; // @dynamic logo;
@property(nonatomic) long long marketPrice; // @dynamic marketPrice;
@property(nonatomic) int preCheckStatus; // @dynamic preCheckStatus;
@property(nonatomic) long long price; // @dynamic price;
@property(copy, nonatomic) NSString *promotionId; // @dynamic promotionId;
@property(nonatomic) int promotionSource; // @dynamic promotionSource;
@property(nonatomic) int rank; // @dynamic rank;
@property(copy, nonatomic) NSString *rankURL; // @dynamic rankURL;
@property(nonatomic) long long sales; // @dynamic sales;
@property(copy, nonatomic) NSString *secAuthorId; // @dynamic secAuthorId;
@property(copy, nonatomic) NSString *smallAppURL; // @dynamic smallAppURL;
@property(copy, nonatomic) NSString *source; // @dynamic source;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *titlePrefix; // @dynamic titlePrefix;
@property(copy, nonatomic) NSString *traceAuthorId; // @dynamic traceAuthorId;
@property(copy, nonatomic) NSString *traceAwemeId; // @dynamic traceAwemeId;
@property(retain, nonatomic) NSMutableArray *userShopCategoriesArray; // @dynamic userShopCategoriesArray;
@property(readonly, nonatomic) unsigned long long userShopCategoriesArray_Count; // @dynamic userShopCategoriesArray_Count;
@property(nonatomic) int views; // @dynamic views;
@property(retain, nonatomic) PromotionVisitor *visitor; // @dynamic visitor;

@end
