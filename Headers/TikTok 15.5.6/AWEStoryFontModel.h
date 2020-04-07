//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString, NSValue;

@interface AWEStoryFontModel : MTLModel <MTLJSONSerializing>
{
    _Bool _hasBgColor;
    _Bool _hasShadeColor;
    NSString *_title;
    NSString *_fontName;
    NSString *_fontFileName;
    NSString *_localUrl;
    long long _defaultFontSize;
    NSString *_effectId;
    NSValue *_titleSize;
    NSValue *_collectionCellSize;
    long long _downloadState;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long downloadState; // @synthesize downloadState=_downloadState;
@property(retain, nonatomic) NSValue *collectionCellSize; // @synthesize collectionCellSize=_collectionCellSize;
@property(retain, nonatomic) NSValue *titleSize; // @synthesize titleSize=_titleSize;
@property(copy, nonatomic) NSString *effectId; // @synthesize effectId=_effectId;
@property(nonatomic) long long defaultFontSize; // @synthesize defaultFontSize=_defaultFontSize;
@property(nonatomic) _Bool hasShadeColor; // @synthesize hasShadeColor=_hasShadeColor;
@property(nonatomic) _Bool hasBgColor; // @synthesize hasBgColor=_hasBgColor;
@property(copy, nonatomic) NSString *localUrl; // @synthesize localUrl=_localUrl;
@property(copy, nonatomic) NSString *fontFileName; // @synthesize fontFileName=_fontFileName;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool download;
- (id)initWithEffectModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
