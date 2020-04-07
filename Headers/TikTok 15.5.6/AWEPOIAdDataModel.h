//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSArray, NSNumber, NSString;

@interface AWEPOIAdDataModel : AWEBaseApiModel
{
    NSNumber *_creativeID;
    NSString *_type;
    NSString *_webURL;
    NSString *_webViewTitle;
    NSString *_logExtra;
    NSString *_title;
    NSString *_source;
    NSString *_buttonText;
    AWEURLModel *_avatarURL;
    NSString *_featureLabel;
    NSString *_price;
    NSString *_originPrice;
    NSString *_openURL;
    NSString *_coverURL;
    NSArray *_adImages;
    unsigned long long _showType;
    NSString *_promotionText;
}

+ (id)adImagesJSONTransformer;
+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *promotionText; // @synthesize promotionText=_promotionText;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(copy, nonatomic) NSArray *adImages; // @synthesize adImages=_adImages;
@property(copy, nonatomic) NSString *coverURL; // @synthesize coverURL=_coverURL;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(copy, nonatomic) NSString *originPrice; // @synthesize originPrice=_originPrice;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *featureLabel; // @synthesize featureLabel=_featureLabel;
@property(retain, nonatomic) AWEURLModel *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *webViewTitle; // @synthesize webViewTitle=_webViewTitle;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *creativeID; // @synthesize creativeID=_creativeID;
- (void).cxx_destruct;

@end
