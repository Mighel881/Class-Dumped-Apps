//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSString;

@interface AWETCMNoticeModel : AWEBaseApiModel
{
    NSString *_title;
    NSString *_content;
    NSString *_schemaURL;
    NSString *_logExtra;
    NSString *_sourceName;
    AWEURLModel *_sourceAvatar;
    AWEURLModel *_sourceAvatarOnDarkMode;
    double _contentW;
    double _contentH;
}

+ (id)sourceAvatarOnDarkModeJSONTransformer;
+ (id)sourceAvatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double contentH; // @synthesize contentH=_contentH;
@property(nonatomic) double contentW; // @synthesize contentW=_contentW;
@property(copy, nonatomic) AWEURLModel *sourceAvatarOnDarkMode; // @synthesize sourceAvatarOnDarkMode=_sourceAvatarOnDarkMode;
@property(copy, nonatomic) AWEURLModel *sourceAvatar; // @synthesize sourceAvatar=_sourceAvatar;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *schemaURL; // @synthesize schemaURL=_schemaURL;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
