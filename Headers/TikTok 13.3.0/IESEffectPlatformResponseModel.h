//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESPlatformPanelModel, NSArray, NSMutableDictionary, NSString;

@interface IESEffectPlatformResponseModel : MTLModel <MTLJSONSerializing>
{
    _Bool _needReprocessEffects;
    NSString *_version;
    NSString *_defaultFrontFilterID;
    NSString *_defaultRearFilterID;
    NSArray *_collection;
    IESPlatformPanelModel *_panel;
    NSArray *_urlPrefix;
    NSArray *_effects;
    NSArray *_categories;
    NSMutableDictionary *_effectsMap;
}

+ (id)JSONTransformerForKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool needReprocessEffects; // @synthesize needReprocessEffects=_needReprocessEffects;
@property(copy, nonatomic) NSMutableDictionary *effectsMap; // @synthesize effectsMap=_effectsMap;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSArray *effects; // @synthesize effects=_effects;
@property(readonly, copy, nonatomic) NSArray *urlPrefix; // @synthesize urlPrefix=_urlPrefix;
@property(retain, nonatomic) IESPlatformPanelModel *panel; // @synthesize panel=_panel;
@property(copy, nonatomic) NSArray *collection; // @synthesize collection=_collection;
@property(copy, nonatomic) NSString *defaultRearFilterID; // @synthesize defaultRearFilterID=_defaultRearFilterID;
@property(copy, nonatomic) NSString *defaultFrontFilterID; // @synthesize defaultFrontFilterID=_defaultFrontFilterID;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *downloadedEffects;
- (void)preProcessEffects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
